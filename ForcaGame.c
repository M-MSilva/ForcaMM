#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main()

{
	
		FILE *fp;
		char string[1000], c, lacuna[1000]="_",letra[25];
		int i, k=1,x=0,p=0,tp,vida=6;
		int n;
		
		
		
		fp = fopen("FORCA.txt","r");
		if(!fp)
	{
		 printf( "Erro na abertura do arquivo");
		 exit(0);
	}
	
	
	srand(time(NULL));
	n = 1+ rand()%9;
	
	while((c = getc(fp) ) != EOF)
	{
	 
		 if(c=='\n')
		{
			k++;
			if(k==n) break;
		}
	}	
	
	
	for(i=0; (c = getc(fp))!='\n';i++)
	{
		string[i] = c;
		lacuna[i]= '-';
		

		x=0;
		
	}
	string[i] = 0;
	tp = strlen(string);
	printf("\n\n");
	printf("---FORCA---");
	
	while(vida>0)
	{	x=0;
		
		printf("\n\n\n %s \n\n\n" , lacuna);
		printf("\n digite uma letra ");
		
		
		//__fpurge(stdin);
		fgets(letra, sizeof(letra), stdin);
		//gets(letra);
		fflush(stdin);
	
	
		for(i=0; i<tp ;i++)
		{
			if(letra[0]==string[i])
			{
				lacuna[i]=string[i];
				//printf("\n %c", string[i]);
				x++;
				p++;
			}
		}
		if(x==0)
		{
			vida--;
			
				if(vida==0)
				{
						
					printf("\n a palavra eh: %s", string);	
					printf("\n YOU LOSE");
					printf("\n   o ");	
					printf("\n  / \\ ");
					printf("\n   | " );
					printf("\n  / \\ " );
					printf("\n YOU LOSE");
					break;
					
				}
			
				else
				{	if(vida==1)
					{	printf("\n  / \\ ");
						printf("\n   | " );
						printf("\n  / \\ " );
						
					}
					else
					{	if(vida==2)
						{	printf("\n  /  ");
							printf("\n   | " );
							printf("\n  / \\ " );
							
						}
						else
						{	if(vida==3)
							{	
								printf("\n   | " );
								printf("\n  / \\ " );
										
								
							}
							else
							{	if(vida==4)
								{	
									
									printf("\n  / \\ " );
								}
								else
								{	if(vida==5)
									{
										printf("\n  /  " );		
									}
									
								}
							}
						}
					}
				}
			
			}
			else
			{
				if(p==tp) 
				{
					printf("\n\n VOCE GANHOU!");
					printf("\n A PALAVRA E: %s", string);
					break;
				
				}
		
				else 
				{
					printf("\n VOCE ACERTOU UMA LETRA!");
				}							
			
			}
			
			
		
	}	
	
}

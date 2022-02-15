<?php

use App\Http\Controllers\JogosController;
use Illuminate\Support\Facades\Route;


/*
|--------------------------------------------------------------------------
| Web Routes
|--------------------------------------------------------------------------
|
| Here is where you can register web routes for your application. These
| routes are loaded by the RouteServiceProvider within a group which
| contains the "web" middleware group. Now create something great!
|
*/
/*
Route::get('/', function () {
    return view('welcome');
});
*/
/*
Route::view('/jogos','jogos');
*/
/*
Route::get('/jogos',function()
{
  return "curso";
});
*/
/*
Route::view('/jogos','jogos',['name' => 'GTA']);
*/
//digitar na url e aparecer
/*
Route::get('/jogos/{name?}', function($name=null){

  return view('jogos',['nomeJogo'=>$name]);
});
*/

//receber parametros que sejam apenas textos
/*
Route::get('/jogos/{name?}', function($name=null){

  return view('jogos',['nomeJogo'=>$name]);
})->where('name','[A-Za-z]+');
*/
//apenas numeros
/*
Route::get('/jogos/{id?}', function($id=null){

  return view('jogos',['idJogo'=>$id]);
})->where('id','[0-9]+');*/
/*
Route::get('/jogos/{id?}/{name?}', function($id=null,$name=null){

  return view('jogos',['idJogo'=>$id, 'nomeJogo'=>$name]);
})->where(['id'=>'[0-9]+','name'=>'[A-Za-z]+']);
*/
//clicar e redirecionar para outra rota
/*
Route::get('/jogos',function()
{
  return view('jogos');
});

Route::get('/',function()
{
  return view('welcome');
})->name('home-index');
*/
/*
Route::get('/jogos',[JogosController::class,'index']);
*/


Route::prefix('jogos')->group(function(){
  Route::get('/',[JogosController::class,'index'])->name('jogos-index');
  Route::get('/create',[JogosController::class,'create'])->name('jogos-create');
  Route::post('/',[JogosController::class,'store'])->name('jogos-store');
  Route::get('/{id}/edit',[JogosController::class,'edit'])->where('id','[0-9]+')->name('jogos-edit');
  Route::put('/{id}/',[JogosController::class,'update'])->where('id','[0-9]+')->name('jogos-update');
  Route::delete('/{id}',[JogosController::class,'destroy'])->where('id','[0-9]+')->name('jogos-destroy');
});

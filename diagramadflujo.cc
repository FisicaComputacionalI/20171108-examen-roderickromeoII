//Examen Problema 2
//Rodrigo Romero de Lazaro
//8 de noviembre de 2017

#include <iostream>
using namespace std;
int main(){
 
  int x=1; //automaticamente la entrada es 1
 
  //Este do hace que tu programa nunca se cierre. 
  //do{
    while(x<=5)
     if ((x%3)==0){ 
	x=x+2;
    }
    else{
      cout<< x <<endl;
      x=x+2; 
    }
    //}while(x>5);
    
  return 0;
}
//Falta indicar porque solo imprime 1 y 5, y no 1,3 y 5.

//do inicia la corrida si x es menor o igual que 5, despues verificamos si x es divisible entre 3, sino muestra el numero que es divisible y para cualquier caso, se establece un nuevo x como el anterior x mas 2 y se repite el ciclo hasta que x mayor a 5
//en si las salidas son 1 y 5

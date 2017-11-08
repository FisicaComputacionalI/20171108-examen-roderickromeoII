//Examen Problema 2
//Rodrigo Romero de Lazaro
//8 de noviembre de 2017

#include <iostream>
using namespace std;
int main(){
 
  int x=1; //automaticamente la entrada es 1
 
  do{while(x<=5)
     if ((x%3)==0){ 
	x=x+2;
    }
    else{
      cout<< x <<endl;
      x=x+2; 
    }
 }while(x>5);
    
  return 0;
}
//do inicia la corrida si x es menor o igual que 5, despues verificamos si x es divisible entre 3, sino muestra el numero que es divisible y para cualquier caso, se establece un nuevo x como el anterior x mas 2 y se repite el ciclo hasta que x mayor a 5
//en si las salidas son 1 y 5

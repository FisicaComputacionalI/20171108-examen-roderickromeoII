#include <iostream>
using namespace std;

int main (){
  int x=0;
  int t=0;
  cout<<"Distancia recorrida (metros)"<<endl;
  cin>>x;
  cout<<"Tiempo que se llevo para recorrer dicha distancia (segundos)"<<endl;
  cin>>t;
  cout<<"La velocidad fue de: "<<float(x)/float(t)<<" m/s"<<endl;
  return 0;
}

#include <iostream>
int  paresimp(int n,int posicion);
int main()
{ int n= 22005;
  int resultado = paresimp(n,1);
  std::cout<<"cantidad de numeros pares en posiciones impares "<<resultado<<std::endl;
}
int paresimp(int n, int posicion)
{
  if(n == 0)
  {
    return 0;
 }
  int digito = n % 10;
 int contador=0;
    if(posicion % 2 != 0 && digito % 2 == 0)
    { contador = 1;

    }
 return contador + paresimp(n/10,posicion+1);
}
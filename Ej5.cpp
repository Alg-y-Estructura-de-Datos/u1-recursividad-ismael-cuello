#include <iostream>
void busqueda(int n, int d)
{
    if(n==0)
    {
      std::cout<<"Falso";
    }else
    {
        if(n==d)
        {std::cout<<" verdadero";
        }else
        { busqueda(n/10,d);

        }
    }

}
int main()
{
    int n=1323;
    int d=5;

    busqueda(n,d);


}

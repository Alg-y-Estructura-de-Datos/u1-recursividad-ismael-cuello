#include <iostream>
using namespace std;
void invertir(int n, int& invertido ){
    if(n==0){
        return ;
    }else{
        invertido = invertido * 10 + n%10;
        invertir(n/10,invertido);
    }
}
int main() {
    int n = 10523;

    if (n < 0) {
        std::cout << "ingrese un numero no negativo" << std::endl;
    }

    int invertido = 0;
    invertir(n, invertido);

    std::cout<<invertido;
}

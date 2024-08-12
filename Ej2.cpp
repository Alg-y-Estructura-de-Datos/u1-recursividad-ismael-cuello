#include <iostream>
using namespace std;
unsigned suma(int n){
    if(n==1){
        std::cout<< n << " = ";
        return 1;
    }else{
        std::cout<< n << " + ";
        return n + suma(n-1);
    }
}
int main() {
    int n=5;
    std::cout << suma(n) << std::endl;
}

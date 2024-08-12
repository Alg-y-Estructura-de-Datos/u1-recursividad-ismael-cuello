using namespace std;
#include <iostream>
#include <vector>

int encontrarMayor(const vector<int>&vec,int n){
    if(n==1){
        return vec[0];
    }
    int valormay= encontrarMayor(vec,n-1);

    if(vec[n-1]>valormay){
        return vec[n-1];
    }else{
        return valormay;
    }
}
int main() {
    int n;
    cout << "ingrese el tamaño del vector" << endl;
    cin >> n;

    vector<int> vec(n);
    cout << "ingrese los datos del vector " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    int mayor = encontrarMayor(vec, n);
    cout<<" el numero mayor del vector es: "<< mayor << endl;

}

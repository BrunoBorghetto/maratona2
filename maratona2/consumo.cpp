#include <bits/stdc++.h>

using namespace std;

int main(){

    float distancia;
    float combustivel; 
    float consumo;

    cout << "Distancia percorrida: " << endl;
    cin >> distancia;
    cout << "Combustivel gasto: " << endl;
    cin >> combustivel;

    consumo = distancia / combustivel;
   
    cout << "Consumo medio = " << consumo;

}
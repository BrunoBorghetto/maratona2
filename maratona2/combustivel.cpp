#include <iostream>
#include <iomanip>
#include <climits>
#include <string>

using namespace std;

int main(){
   
int codigo, alcool, gasolina, diesel;

   alcool = 0;
   gasolina = 0;
   diesel = 0;

   cout<< "Informe um codigo (1, 2, 3) ou 4 para parar: ";
   cin >> codigo;
   
   while (codigo <= 3 ){
   
      switch (codigo){
      
      case 1:
         alcool = alcool + 1;
         break;;
      case 2:
         gasolina = gasolina + 1;
         break;
      case 3:
         diesel = diesel + 1;
         break;

         default:
         cout<<"Vlw";
         break;
      }
      
      cout<<"Informe um codigo (1, 2, 3) ou 4 para parar: ";
      cin>> codigo;
   
   }
   
   cout<<"MUITO OBRIGADO" << endl;
   cout<<"Alcool: "<< alcool << endl;
   cout<<"Gasolina: "<< gasolina <<endl;
   cout<<"Diesel: "<< diesel <<endl;
   cout<<"Obrigado!!"<<endl;

}
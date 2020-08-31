#include <iostream>
using namespace std;

double division(int a, int b) 
{
   if( b == 0 ) 
   {
      throw "Eksepsi: Penyebut Bernilai Nol atau Bukan Bilangan";
   }
   return (a/(float)b);
}

int main () 
{
   int x, y ;
   double z = 0;

   cout<<"Masukkan Pembilang: ";
   cin>>x;
   cout<<"Masukkan Penyebut: ";
   cin>>y;
   
   try {
      z = division(x, y);
      cout << "Hasil Pembagian : "<< z << endl;
   }catch (const char* msg) {
      cerr << msg << endl;
   }
   return 0;
}

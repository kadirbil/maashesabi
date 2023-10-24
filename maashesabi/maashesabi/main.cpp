#include <iostream>

using namespace std;

int main()
{
   int maas=5;
   int saat;
   cout<<"çalýþýlan saati giriniz";
   cin>>saat;
   if (saat<100){
        maas=saat*1;
        cout<<"maasiniz:"<<maas;}
   else if (saat>100 and saat<250){
        maas=saat*2;
        cout<<"maasiniz:"<<maas;}
   else if (saat>250){
        maas=saat*3;
        cout<<"maasiniz:"<<maas;}
   else
        cout<<"hatavvar";
}

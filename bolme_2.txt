#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int dizi[1000],boyut,i,sag=0,sol=0;
    cout<<"Dizi boyutunu giriniz"<<endl;
    cin>>boyut;
    cout<<boyut;
    for(i=0;i<boyut;i++)
    {
        cout<<"Dizinin"<<i+1<<". elemanını giriniz"<<endl;
        cin>>dizi[i];              
    }
    
    for(i=(boyut-1)/2;i>=0;i--)
    {
                            
                          cout<<dizi[i]<<"-";
                          sol=sol+dizi[i];
                          }
                          cout<<endl;
    for(i=boyut/2;i<boyut;i++)
    {
       cout<<dizi[i]<<"-";
       sag=sag+dizi[i];
    }
                          cout<<endl;
                          cout<<sol<<endl<<sag<<endl<<sol+sag<<endl;
                          
    system("PAUSE");
    return EXIT_SUCCESS;
}

#include <cstdlib>
#include <iostream>

using namespace std;
int step=0;
int step2=0;
long long power(long long x, long long y) {
     step++;
    if(y == 0) 
    {  
         return 1;
    }
    long long d = power(x, y/2);
    if(y%2 == 0) 
    {          
           return d*d;
    }
    else 
    {      
         return x*d*d;
    }
}
long long power2(long long a, long long b){
    long long toplam = 1;
    step++;
    for(int i=0; i<b; i++){
            step2++;
        toplam *= a;
    }
    return toplam;
}
int main(int argc, char *argv[])
{
    cout<<power(2,60)<<endl;
    cout<<step<<endl;
    cout<<power2(2,60)<<endl;
    cout<<step2<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

#include <iostream>
#include <math.h>

using namespace std;

double noRecPower(int a,int b){
    double result=1;
    int step=0;
    while(b){
        if(b%2==0){
            result=result*result;
            b=b/2;
        }else{
            result=result*a;
            b=b-1;
        }
        step++;
    }
    cout<<"Step count: "<<step<<endl;
    return result;

}



int main()
{
    cout << noRecPower(3,62)<< endl;
    cout<<"Log deger:"<<log2(62)<<endl;
    return 0;
}

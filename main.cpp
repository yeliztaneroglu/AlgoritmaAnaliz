#include <iostream>


using namespace std;


int power(int a, int b){
    int toplam = 1;
    for(int i=0; i<b; i++){
        toplam *= a;
    }
    return toplam;
}

int main()
{
    int sonuc = power(2,4);
    cout << sonuc << endl;
    return 0;
}



#include<iostream>

using namespace std;

int main(){
    int n1=0,n2=1,n3,i;

    for(i=0;i<=20;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;

        cout << n3 <<endl;
    }
    return 0;
}
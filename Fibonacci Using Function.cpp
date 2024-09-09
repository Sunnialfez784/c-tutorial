#include<iostream>

using namespace std;

int fibo(int n,int i){
    int n1=0,n2=1,n3;
    cout << "Fibonacci" <<endl;
    for(i=0;i<=n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout << n3;
    }
    return 0;
}

int main(){
    int n,i;
    cout << "Enter number step :" <<endl;
    cin >> n;
    fibo(n,i);
    return 0;
}
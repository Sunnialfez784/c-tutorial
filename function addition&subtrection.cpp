#include<iostream>

using namespace std;

int add(int a,int b){
    cout << "baddition" <<endl;
    cout << a+b;
    return 0;
}

int sub(int a,int b){
    cout << "subtraction" <<endl;
    cout << a-b;
    return 0;
}

int main(){
    cout <<"enter value of a" <<endl;
    cin >> a;
    cout <<"enter value of b" <<endl;
    cin >> b;
    add(a,b);
    sub(a,b);
    return 0;
}
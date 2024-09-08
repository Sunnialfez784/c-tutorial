#include<iostream>

using namespace std;

int main(){
    int a,b,temp;
    a = 20;
    b = 30;

    cout << "before swap value" <<endl;
    cout << "a =" << a << ",b =" << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "after swap value" <<endl;
    cout << "a =" << a << ",b =" << b << endl;

    return 0;
}
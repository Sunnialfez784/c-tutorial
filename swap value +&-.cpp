#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    
    cout << "Enter value of a:" <<endl;
    cin >> a;

    cout << "Enter value of b:" <<endl;
    cin >> b;

    cout << "Enter value of c:" <<endl;
    cin >> c;

    cout << "Before swap value" <<endl;
    cout << "a:"<<a<<",b:"<<b<<",c:"<<c<<endl;

    a=a+b+c;
    b=a-(b+c);
    c=a-(b+c);
    a=a-(b+c);
    
    cout << "After swap value" <<endl;
    cout << "a:"<<a<<",b:"<<b<<",c:"<<c<<endl;

    return 0;
}
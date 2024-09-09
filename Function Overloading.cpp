#include<iostream>

using namespace std;

int add(int y,int z)
{
    cout << "\n......addition of 2 value......." <<endl;
    cout << y+z;
    return 0;
}

int add(int x,int y,int z)
{
    cout << "\n......addition of 3 value........" <<endl;
    cout << x+y+z;
    return 0;
}

int main()
{
    int x,y,z;
    cout << "Enter value of x :" <<endl;
    cin >> x;
    cout << "Enter value of y :" <<endl;
    cin >> y;
    cout << "Enter value of z :" <<endl;
    cin >> z;
    add(x,y,z);
    add(x,y);

    return 0;
}
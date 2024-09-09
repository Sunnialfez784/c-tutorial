#include<iostream>

using namespace std;

int main(){
    int n,j,i=0,temp;

    cout <<"Enter any number=";
    cin >> n;
    temp=n;

    while(n>0)
    {
        j=n%10;
        i=(i*10)+j;
        n=n/10;

    }
    if(temp==i)
    {
        cout <<"Palindrome Number :" <<endl;
    }
    else
    {
        cout <<"Not a Palindrome Number :" <<endl; 
    }
    return 0;
}
#include<iostream>
using namespace std;
main() {
    int a,b,c;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Enter c : ";
    cin>>c;
if ( a > b && a > c) 
    cout<<"The largest number is : "<<a;
else if ( b > a && b > c) 
    cout<<"The largest number is : "<<b;
else if (c > a && c > b) 
    cout<<"The largest number is : "<<c;

}
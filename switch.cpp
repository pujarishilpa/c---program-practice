#include<iostream>
using namespace std;
main() {
    int n;
    cout<<"Enter a Number (1-7) :";
    cin>>n;
    switch(n) { 
        case 1 : cout<<"SUNDAY";
                    break;
        case 2 : cout<<"MONDAY";
                    break;
        case 3 : cout<<"TUESDAY";
                    break;
        case 4 : cout<<"WEDNESDAY";
                    break;
        case 5 : cout<<"THURSDAY";
                    break;
        case 6 : cout<<"FRIDAY";
                    break;
        case 7 : cout<<"SATURDAY";
                    break;
    default : cout<<"invalid number";
    }
}
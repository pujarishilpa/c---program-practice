#include<iostream>
using namespace std;
main () {
    char ch;
    cout<<"enter character";
    cin>>ch;
    if (ch >= '0' && ch <= '9') {
        cout<<"character is digit"<<ch;
    }
    else {
        cout<<"character is not a digit"<<ch;
    }
}

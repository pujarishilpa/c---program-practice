#include<iostream>
using namespace std;
main () {
    int n=6;
    int a[6] = {1,2,3,4,5,6};
    
    for (int i=0; i<n ; i++) {
        if (a[i] % 2 != 0){
            cout<<a[i]<<endl;
        }
    }
    
}
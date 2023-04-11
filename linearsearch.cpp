#include<iostream>
using namespace std;
int main () 
{
    int arr[50],n,key,i,flag=0;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter key element to search : ";
    cin>>key;
    for( i=0;i<n;i++)
    {
        if (arr[i] == key)
        {
            flag=1;
            break;
        }
    }
    if(flag == 1) 
        cout<<"the element found at the position : "<<i<<endl;
    else 
        cout<<"the element not found"<<endl;
}
    

    

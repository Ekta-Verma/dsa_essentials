#include <iostream>
using namespace std;

//time complexity O(n)
int linear_search(int *arr, int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }

    return -1;
}

int main(){
    int arr[]= {1,2,3,40,15,3,5,10};
    int n= sizeof(arr)/sizeof(int);

    int key;
    cin>>key;
    int index = linear_search(arr,n,key);
    cout<<index;


    return 0;
}
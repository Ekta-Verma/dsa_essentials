#include <iostream>
using namespace std;


//Because of this reason we see the size of a pointer to be 4 bytes in 32 bit machine and 8 bytes in a 64 bit machine.

void print_array(int arr[],int n){     // int *arr--> its is a pointer variable
   

    cout<<"In function "<<sizeof(arr)<<endl;

    cout<<"For function:1 without n"<<endl;


    for(int i=0;i<sizeof(arr);i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    cout<<"For function:2 with n"<<endl;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;


    

}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n= sizeof(arr)/sizeof(int);


    print_array(arr,n);

    cout<<"In main "<<sizeof(arr)<<endl;

    cout<<"in main"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;


    return 0;

}
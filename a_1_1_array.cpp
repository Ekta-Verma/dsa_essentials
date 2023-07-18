#include <iostream>
using namespace std;

int main(){
    int marks[100] = {-1}; //initializing the array 
    
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>marks[i];
    }

    for(int i=0;i<n;i++){
        cout<<marks[i]<<",";
    }

    cout<<endl;
    
    return 0;
}
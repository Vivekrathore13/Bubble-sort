#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<" enter the size of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){//n-1 passes
        cin>>arr[i];
    }
     for(int i=0;i<n;i++){//n-1 passes
        cout<<arr[i]<<" ";
        }
        //buuble sort
    for(int i=0;i<n-1;i++){
        //traverse 
        for(int j=0;j<n-1;j++){
           if (arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            // swap(arr[j],arr[j+1]);
           }
        }

    }
    cout<<endl;
     for(int i=0;i<n;i++){//n-1 passes
        cout<<arr[i]<<" ";
}

}
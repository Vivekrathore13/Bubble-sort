#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int x){
        int lo =0;
        int hi =n;
        while(lo<=hi){
            int mid =(lo+hi)/2;
            if (arr[mid]==x){
            return mid;
            }
            else if (arr[mid]>x){
            hi =mid-1;
            }
            else{ 
            lo= mid+1;
            }
        }
        return -1;
}

int main(){
    int n ;
    cout<<" enter the size of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){//n-1 passes
        cin>>arr[i];
    }
        int x;
        cout<<"enter the target element "<<endl;
        cin>>x;

        cout<<binarysearch(arr,n,x)<<endl;
        

        return 0;

}
        
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n ;
    cout<<" enter the size of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;

        //selection sort
        for(int i=0;i<n-1;i++){
            int min =INT_MAX;
            int mindx = -1;
            //minimum calculation for selecting the number
            for(int j=i;j<n;j++){
                if (arr[j]<min){
                    min = arr[j];
                    mindx =j;
                }
            }
            swap(arr[i],arr[mindx]);
        }
         for(int i=0;i<n;i++){//n-1 passes
        cout<<arr[i]<<" ";
        }       
}

#include<iostream>
using namespace std;

int main(){

int arr[] = {3,5,6,8,2,4,6};
int n = sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<n-1;i++){

//find minimum 
int min=i;
for(int j=i+1;j<n;j++){
    if(arr[j]<arr[i]){
        min=j;

    }
}


//swap elements (min with temp)

int temp1=arr[i];
arr[i]=arr[min];
arr[min]=temp1;



}


//fetching 

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}



    return 0 ;

}
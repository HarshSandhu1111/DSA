#include<iostream>
using namespace std;

int main(){

int arr[] = {3,5,6,8,2,4,19,6};
int n = sizeof(arr)/sizeof(arr[0]);

bool swapped=false;
for(int i=0;i<n-1;i++){

    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            swapped = true;
            
        }
 
    }
if(!swapped) break;

}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}




return 0;
}
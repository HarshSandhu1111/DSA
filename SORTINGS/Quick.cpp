#include<iostream>
using namespace std;

int partition(int arr[], int low, int High){
    int pivot = arr[High];

    int i=low-1;

    for(int j=low;j<High;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[j],arr[i]);

        }
    }
    swap(arr[i+1],arr[High]);

    return i+1;

}

void quicksort(int arr[],int low,int high)
{

if(low<high){
    int pi = partition(arr,low,high);

    quicksort(arr,low,pi-1);
    quicksort(arr,pi+1,high);


}

}
int main(){

int arr[] = {23,1,10,5,2};
int n = sizeof(arr)/sizeof(arr[0]);
quicksort(arr,0,n-1);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}




return 0;
}
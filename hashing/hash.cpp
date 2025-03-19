#include<iostream>
using namespace std;


int main(){

int arr[]={1,1,2,3,4,2,6,2,6};
int hasharr[9]={0};

for(int i=0;i<9;i++){
    hasharr[arr[i]]+= 1;

}

int number =1;
    cout<<hasharr[number]<<" ";


}
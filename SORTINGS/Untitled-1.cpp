#include<bits/stdc++.h>
using namespace std;

int getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int large= INT_MIN;
    int secondlarge= INT_MIN;
   
    for(int i=0;i<n;i++){
        if(a[i]>large){
            secondlarge =large;
        large=a[i];
        }
        else if (a[i] > secondlarge && a[i] != large) 
        {
            secondlarge = a[i];
        }

    }
  
        return secondlarge;

}

int main(){
    vector<int> arr = {5, 2, 8,10, 9, 1, 7};
    int  result = getSecondOrderElements(arr.size(), arr);
    cout << "Second Largest: "<<result<< endl;

    return 0; 
}
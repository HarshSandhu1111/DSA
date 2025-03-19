#include<iostream>
#include<string>
using namespace std;


int main(){

string name = "harsh";

int a = name.length();
int hasharr[26]={0};

for(int i=0;i<a;i++){
    hasharr[name[i]-'a']++;

}

for(int i=0;i<26;i++){
cout<<hasharr[i]<<endl;
}
}
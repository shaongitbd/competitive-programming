#include<bits/stdc++.h>
using namespace std;

//coded by shaongit

int main(){

int t,n,k,total=0;
cin>> t;

while(t--){

 n=0;
 k=0;
 total=0;
 cin >> n;
 cin >>k;
 int num;
 for(int i=0;i<n;i++){
    cin>> arr[i];
    if((arr[i]+k)%7==0){
        total +=1;
    }

 }
 
 cout<< total<<endl;

}

}

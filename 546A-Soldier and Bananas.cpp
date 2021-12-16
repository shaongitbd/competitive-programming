#include<bits/stdc++.h>
using namespace std;

int main(){

int k,n,w,total = 0, borrow=0;

cin >> k;
cin >> n;
cin >> w;

for(int i=1;i<=w;i++){

  total = total + (k*i);

}

if(total>n){
    borrow = total- n;
}
else{
    borrow = 0;
}

cout << borrow<<endl;

}

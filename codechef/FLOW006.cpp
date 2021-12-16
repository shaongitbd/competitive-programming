#include<bits/stdc++.h>
using namespace std;

int main(){
int n,total=0;
cin>> n;

while(n--){
    total=0;

    string nums;
    cin>>nums;

  for(int i=0;i<=nums.size()-1;i++){


     total = total + ((int)(nums[i]-48));
  }
  cout<< total<<endl;


}

}

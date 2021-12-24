#include <bits/stdc++.h>
using namespace std;
// coded by shaongit
int main() {
int t,x,y,k,n,pi,c;
    int output=0;
    cin>> t;
    while(t--){
        cin>>x>>y>>k>>n;
        for(int i=0;i<1;i++){

           if(x>y){
               for(int j=0;j<n;j++){

                cin>>pi;
                cin >> c;
                if((pi>=(x-y))&&(c<=k)){
                    output=1;
                }

               }

           }


        }
       if(output==1){
        cout<< "LuckyChef"<<endl;
       }
       else{

        cout<<"UnluckyChef"<<endl;
       }
       output = 0;

    }
	return 0;
}

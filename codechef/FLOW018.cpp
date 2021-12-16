#include<bits/stdc++.h>
using namespace std;

int main(){
int n, num, fact;

cin >> n;
while(n--){
    cin >> num;
    fact =1;
    for (int i=1;i<=num;i++){

       fact *=i;
    }

    cout << fact<<endl;
}

}

// Weird Code that came to my mind after seeing this problem

```python

Please Note that this problem accepts solutions like 18 2 , 20 2, 20,20 when the input = 20. 
```

Solution 1:

```C++

#include<bits/stdc++.h>
using namespace std;

int main(){

int x = 0;
cin >> x;

int output[2];
output[0]=0;
output[1]=0;

for (int i=1;i<=x;i++){

      for(int j=1; j<=x;j++){



        if (1<=i&& j<=x)
        {
              if ((i%j==0)&7  && ((i*j)>x) && ((i/j)<x)){

               output[0]=i;
               output[1]=j;
               break;


              }
            }


      }

    }

if (output[0]>0&& output[1]>0){

    cout << output[0]<<" "<<output[1]<<endl;

}
else{

    cout<<"-1"<<endl;
}


}

```






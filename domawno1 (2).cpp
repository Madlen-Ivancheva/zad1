#include<iostream>
using namespace std;
int main(){
    int n, k, b=0,x;
    cin>>n>>k;
    for(int i=2;i<=n;i++){
        x=i;
        for(int j=2;j<=i/2;j++){
            if(x%j==0){
                b++;
                while(x%j==0){
                    x=x/j;
                }
            }
        }
        if(b==k){
            cout<<i<<" ";
        }
        b=0;
    }
return 0;
}

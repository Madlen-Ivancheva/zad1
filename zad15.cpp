#include<iostream>
using namespace std;
int main(){
    double n,s=0,a[25],x=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0){
            x++;
            s=s+a[i];
        }
    }
    cout<<s/x;
return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n,x,a[36];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    bool k=false;
    for(int i=0;i<n;i++){
       if(a[i]==x){
        k=true;
        cout<<i+1;
        break;
       }
    }
    if(k==false){
        cout<<"No";
    }
return 0;
}

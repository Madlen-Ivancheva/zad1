#include<iostream>
using namespace std;
int main(){
    int n,s=1,a[40];
    bool f=false;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%7==0){
            f=true;
            s=s*a[i];
        }
    }
    if(f==true){
        cout<<s;
    }
    else{
        cout<<"No";
    }
return 0;
}

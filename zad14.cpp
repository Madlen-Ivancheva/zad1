#include<iostream>
using namespace std;
int main(){
    int n,s=0,a[30];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            s++;
        }
    }
    cout<<s;
return 0;
}

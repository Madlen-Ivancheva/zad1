#include<iostream>
using namespace std;
int main(){
    int den, mesec, godina;
    cin>>den>>mesec>>godina;
    den++;
    if(mesec==1 || mesec==3 || mesec==5 || mesec==7 || mesec==8 || mesec==10){
        if(den==32){
            mesec++;
            den=1;
        }
    }
    if(mesec==4 || mesec==6 || mesec==9 || mesec==11){
        if(den==31){
            mesec++;
            den=1;
        }
    }
    if(mesec==2){
        if((godina%4!=0 || (godina%100==0 && godina%400!=0)) && den==29){
            mesec++;
            den=1;
        }
        if((godina%4==0 && (godina%100!=0 || godina%400==0)) && den==30){
            mesec++;
            den=1;
        }
    }
    if(mesec==12 && den==32){
        mesec=1;
        den=1;
        godina++;
    }
    cout<<den<<" "<<mesec<<" "<<godina;
return 0;
}

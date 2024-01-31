#include<iostream>
using namespace std;


int main(void)
{

    //ps1
    // int num , result ;
    // cin >> result; 
    // cin>>num; if(num>result) result = num;
    // cin>>num; if(num>result) result = num;
    // cin>>num; if(num>result) result = num;
    // cin>>num; if(num>result) result = num;
    // cin>>num; if(num>result) result = num;
    // cin>>num; if(num>result) result = num;
    // cin>>num; if(num>result) result = num;
    // cin>>num; if(num>result) result = num;
    // cin>>num; if(num>result) result = num;
    // cout<<result;

    //ps2

    int cnt , result , num;
    cin>> cnt; 
    cin>>result;
    cnt-=1;
    if(cnt>0) {cnt -=1; cin>>num; if(num>result)  result = num;} 
    if(cnt>0) {cnt -=1; cin>>num; if(num>result)  result = num;} 
    if(cnt>0) {cnt -=1; cin>>num; if(num>result)  result = num;} 
    if(cnt>0) {cnt -=1; cin>>num; if(num>result)  result = num;} 
    if(cnt>0) {cnt -=1; cin>>num; if(num>result)  result = num;} 
    if(cnt>0) {cnt -=1; cin>>num; if(num>result)  result = num;} 
    if(cnt>0) {cnt -=1; cin>>num; if(num>result)  result = num;} 
    if(cnt>0) {cnt -=1; cin>>num; if(num>result)  result = num;} 
    if(cnt>0) {cnt -=1; cin>>num; if(num>result)  result = num;} 
    cout<<"\n";
    cout<< result;
    return 0;
}
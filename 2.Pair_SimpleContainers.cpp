#include<utility>
#include<iostream>
using namespace std;
int main(){
    pair<int,char> p1;
    p1.first=10;
    p1.second='a';
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;

    //Initializing by copying
    pair<int,char> p2(p1);
    cout<<p2.first<<" "<<p2.second<<endl;

    //Using different comparison operators
    pair<int,int> a={4,5};
    pair<int,int> b={6,7};

    if(a==b) cout<<"EQUAL";
    else if(a>b) cout<<"A is greater";
    else cout<<"A is lesser"<<endl;

    //Using swap functions
    cout<<"Initially a: "<<a.first<<" "<<a.second<<endl;
    cout<<"Initially b: "<<b.first<<" "<<b.second<<endl;
    swap(a,b);
    cout<<"After swapping a: "<<a.first<<" "<<a.second<<endl;
    cout<<"After swapping b: "<<b.first<<" "<<b.second<<endl;

}
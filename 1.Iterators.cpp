#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> v={10,20,30,40,50};
    vector<int>:: iterator i=v.begin(); // traditional method
    cout<<*i<<endl;
    i++;
    cout<<*i<<endl;
    auto j=v.end();  // Creating iterator using auto
    j--;
    cout<<*j<<endl;

    //Implementing various operations on iterators

    i=next(i);
    cout<<*i<<endl;

    j=prev(j);
    cout<<*j<<endl;

    j=prev(j,2);
    cout<<*j<<endl;

    advance(i,2);
    cout<<*i;

    return 0;

}
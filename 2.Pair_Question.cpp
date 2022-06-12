#include<utility>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    pair<int,char> p[n];
    int a[n];
    cout<<"Enter elements of a(sorting base): ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    char b[n];
    cout<<"Enter elements of b(elements to be sorted): ";
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        p[i].first=a[i];
        p[i].second=b[i];
    }
    sort(p,p+n);
    for(int i=0;i<n;i++){
        cout<<p[i].second<<" ";
    }
    return 0;
}
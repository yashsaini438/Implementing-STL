#include<iostream>
#include<algorithm>

//Take a sample array as input with elements
//{10, 15, 8, 20}. Sort the array and search for 8 inside the array

using namespace std;
int main(){
    int arr[]={10,15,8,20};
    sort(arr,arr+4);
    if(binary_search(arr,arr+4,8)){
        cout<<"Present";
    }
    else
        cout<<"Not Present";
    
    return 0;
}

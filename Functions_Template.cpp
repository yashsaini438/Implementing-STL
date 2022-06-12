#include<iostream>
using namespace std;
template <class T>

// Implementing a template function
T myMax(T x, T y){
    return x>y?x:y;
}

template<class T>
T findMax(T arr[],int n){
    T res=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>res){
            res=arr[i];
        }
    }
    return res;
}

//Template function with a constant value as a parameter along with dtype.
template<class T,int limit>
T findMax2(T arr[],int n){
    if(n>limit){
        cout<<"Limit exceeded";
        return 0;
    }
    T res=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>res){
            res=arr[i];
        }
    }
    return res;
}


int main(){
    cout<<myMax<int>(3,7);
    cout<<endl;
    cout<<myMax<char>('a','b')<<endl;
    int arr[]={4,5,3,6,9};

    cout<<findMax<int>(arr,5)<<endl;
    float arr2[]={3.4,2.8,9.8,5.0};
    cout<<findMax<float>(arr2,4)<<endl;

    cout<<findMax2<int,4>(arr,5); //We can only pass constant i.e 4 not a variable
    return 0;
}
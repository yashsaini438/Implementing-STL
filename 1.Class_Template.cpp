#include<iostream>
using namespace std;
template<class T>
class Pair{
    public:
        T x;
        T y;
    
    Pair(T x, T y){
        this->x=x;
        this->y=y;
    }

    T getfirst();
    T getsecond();
};

template<class T>
T Pair<T> ::  getfirst(){
    return x;
}

template<class T>
T Pair<T> :: getsecond(){
    return y;
}

int main(){
    Pair<int> p1(10,5);
    cout<<p1.getfirst()<<endl;
    cout<<p1.getsecond();
    return 0;
}
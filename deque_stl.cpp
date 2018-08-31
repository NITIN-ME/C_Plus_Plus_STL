#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_front(10);
    d.push_front(20);
    d.push_front(30);
    d.push_front(40);

    deque<int>::iterator itr = d.begin();

    for(; itr != d.end(); itr++){
        cout<<*itr<<"  ";
    }
    cout<<endl;

    deque<int>::reverse_iterator itr1  = d.rbegin();

    for(; itr1 != d.rend(); itr1++){
        cout<<*itr1<<"  ";
    }
    cout<<endl;

    cout<<"front: "<<d.front()<<", back: "<<d.back()<<endl;
    cout<<"size: "<<d.size()<<endl;

    return 0;
}

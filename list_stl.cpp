#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l ;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);
    l.push_front(6);
    l.push_front(7);

    list<int>::iterator it = l.begin();
    for(; it != l.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;

    l.pop_back();

    it = l.begin();
    for(; it != l.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;


    l.pop_front();

    it = l.begin();
    for(; it != l.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;

    it = l.begin();
    l.erase(l.begin());

    it = l.begin();
    for(; it != l.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;

    l.clear();
    cout<<"size: "<<l.size()<<endl;
    return 0;
}

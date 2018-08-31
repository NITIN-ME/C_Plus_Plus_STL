#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    if(!q.empty()){
        cout<<"Queue is not empty!"<<endl;
    }
    else{
        cout<<"Queue is empty!"<<endl;
    }

    cout<<"size: "<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.front()<<"  ";
        q.pop();
    }
    cout<<endl;
    cout<<"size: "<<q.size()<<endl;

    if(!q.empty()){
        cout<<"Queue is not empty!"<<endl;
    }
    else{
        cout<<"Queue is empty!"<<endl;
    }
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;


void show(vector<int>& v){
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    if(v.empty()){
        cout<<"V is empty"<<endl;
    }
    else{
        cout<<"V is not empty"<<endl;
    }
    v.push_back(7);
    v.push_back(14);
    v.push_back(21);
    v.push_back(28);
    vector<int>::iterator itr;
    for(itr = v.begin(); itr != v.end(); itr++){
        cout<<*itr<<"  ";
    }
    cout<<endl;

    vector<int>::reverse_iterator itr1 = v.rbegin();
    for(; itr1 != v.rend(); itr1++){
        cout<<*itr1<<"  ";
    }
    cout<<endl;

    if(v.empty()){
        cout<<"V is empty"<<endl;
    }
    else{
        cout<<"V is not empty"<<endl;
    }
    itr = v.begin();
    cout<<"size: "<<v.size()<<endl;
    cout<<"max_size: "<<v.max_size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.pop_back();
    show(v);
    v.erase(v.begin(), v.end());
    show(v);
    cout<<"size: "<<v.size()<<endl;
    return 0;
}

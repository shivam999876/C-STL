#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};
    vec.pop_back();
    for(int val :vec){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
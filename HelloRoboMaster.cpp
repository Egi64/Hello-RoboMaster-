#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

class hello{
public:
    int n;
    void out(){
        for(int i=1;i<=n;i++){
            cout<<"Hello,RoboMaster!"<<endl;
        }
    }
};

int main(){
    hello test;
    cin>>test.n;
    test.out();
    return 0;
}

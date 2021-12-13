#include<iostream>

using namespace std;

struct number {
    public:
        int number;
};

class base {
    public:
        virtual void count(int i){
            number n;
            n.number = i + 1;
        }
};

class second :public base {

};

int main(){
    int a = 10;
    second se;
    number n;
    se.count(10);
    cout << n.number;
}
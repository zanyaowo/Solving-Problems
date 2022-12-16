#include <iostream>


using namespace std;

void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<&a<<endl<<&b;

}

int main(){
    cout << (int)'a';
    return 0;
}


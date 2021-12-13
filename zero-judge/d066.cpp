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
    int a = 10 , b= 20 ;
    cout << &a << endl;
    swap(a,b);
    return 0;
}


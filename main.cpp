#include <iostream>
#include <vector>
#include <string>
#include <sstream>


using namespace std;

int main() {
    string a, t;
    int i = 0, target;
    int b[50] = {};
    getline(cin, a);
    cin >> target;
    stringstream x(a);
    while(getline(x, t, ' ')){
        b[i] = stoi(t);
        i++;
    }
    cout << i;
    return 0;
}

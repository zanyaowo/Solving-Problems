
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> rotate(vector<vector<int>>& matrix) {
    vector<vector<int>> b (matrix.size());
    int a = matrix.size();
    int c = matrix.size()-1;
    int temp = 0;
    for(int i= 0; i < matrix.size();i++){
        b[i].reserve(a);
    }
    for(int i = 0; i < a; i++){
        temp = 0;
        for(int o = c ; o >= 0 ;o--){
            b[i][temp] = matrix[o][i] ;
            temp++;
        }
    }
    return b;
}


int main(){
    int c = 1;
    vector<vector<int>> matrix(3);
    for(int i = 0;i < matrix.size();i++){
        matrix[i].reserve(3);
        for(int o = 0; o < matrix[i].capacity();o++){
            matrix[i][o] = c;
            c++;
        }
    }
    auto v = rotate(matrix);
    for(int i = 0;i < v.size();i++){
        for(int o = 0; o < v[i].size();o++){
            cout << v[i][o];
        }
    }
    cout << v[0][2];
    return 0;
}

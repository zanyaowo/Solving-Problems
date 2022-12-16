#include <bits/stdc++.h>

using namespace std;

vector<int> node = vector<int>();
vector<int> x = vector<int>();
vector<int> y = vector<int>();
int max_sizeH = 0, max_sizeW = 0;

int getM(){

}

string getinput(string str, int mode2){
    int locate, mode = 1;
    string str1 = "";
    stringstream ss(str);
    switch (mode2) {
        case 1:
            cout << "x1,y1 x2,y2";
            break;
        case 2:
            cout << "x1,y1 x2,y2 x3,y3";
            break;
    }
    while(getline(ss, str1, ' ')){
        if(mode){
            locate = stoi(str1);
            x.push_back(locate);
            mode =  0;
        }else{
            locate = stoi(str1);
            y.push_back(locate);
            mode = 1;
        }
        if(locate > max_sizeW && mode){
            x.resize(locate);
        }else if(locate > max_sizeH && !mode){

        }
        max_sizeH = !mode ? max(max_sizeH, locate) : max_sizeH;
        max_sizeW = mode ? max(max_sizeW, locate) : max_sizeW;
    }
}

// y = mx+b;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int mode = 0;
    cout << "請選擇模式 (1)輸入兩點座標繪出一直線\n(2)輸入三點座標畫出三角形\n(3)劃出上題三角形水平翻轉";
    while(cin >> mode) {
        string str;
        cin.ignore();
        getline(cin, str);
        if(mode != 3){
            getinput(str, mode);
        }

        cout << "請選擇模式 (1)輸入兩點座標繪出一直線\n(2)輸入三點座標畫出三角形\n(3)劃出上題三角形水平翻轉";

    }
    return 0;
}
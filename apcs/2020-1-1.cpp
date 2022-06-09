#include <bits/stdc++.h>

using namespace std;

int winOrLose(int punch, int punch2){
    int res = 0;
    if(punch == punch2){
        res = 3;
    }else{
        if((punch == 0 && punch2 == 2) || (punch == 2 && punch2 == 5) || (punch == 5 && punch2 == 0)){
            res = 1; // 1 win
        }else {
            res = 2; // 2 lose
        }
    }
    return res;
};

int main(){
    int deuce_count =0;
    string str ;
    stringstream ss;
    int punch = 0, count = 0, change = 0, recount = 0;
    vector<int> round  = vector<int>();
    scanf("%d", &punch);
    scanf("%d\n", &count);
    getline(cin, str);
    ss << str;
    while(getline(ss, str, ' ')){
        recount++;
        int num = stoi(str);
        int res = winOrLose(punch, num);
        round.push_back(punch);
        if(res == 3){
            change++;
            if(change == 2){
                change = 0;
                if(punch == 5){
                    punch = num - 3;
                }else if(punch == 2){
                    punch = num - 2;
                }else{
                    punch = 5;
                }
            }
        }else{
            for(int i : round){
                cout << i << " ";
            }
            switch (res) {
                case 1:
                    cout << ": Won at round " << recount;
                    return 0;
                case 2:
                    cout << ": Lost at round " << recount;
                    return 0;
            }
        }
    }

    cout << "Drew at round " << count;
    return 0;
};
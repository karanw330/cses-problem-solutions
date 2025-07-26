#include <iostream>
using namespace std;

int main(){
    long long tot, prev, curr, steps=0;
    cin >> tot;
    cin >> prev;
    // cout << prev << + " ";
    for(long long i=1;i<=tot-1;i++){
        cin >> curr;
        if(prev>=curr){
            steps += prev-curr;
        }
        else{
            prev=curr;
        }
        // cout << prev << + " ";
    }
    cout << steps;
}

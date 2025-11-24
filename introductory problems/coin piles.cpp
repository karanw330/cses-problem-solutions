#include<iostream>
using namespace std;
int main(){
    long long casee,n,m;
    cin >> casee;
    for(int i=0;i<casee;i++){
        cin >> n>>m;
        if((n+m)%3==0){
            if(max(n,m)<=min(n,m)*2){
                cout << "YES"<<endl;
            }
            else{
                cout << "NO"<<endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

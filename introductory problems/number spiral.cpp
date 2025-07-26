#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long iter, row, col;
    cin >> iter;
    for(int i=1;i<=iter;i++){
        cin >> row >> col;
        if(row>=col){
            long long rowans;
            if(row%2==0){
                rowans = row*row;
                cout << rowans-col+1 << "\n";
            }
            else{
                rowans = (row-1)*(row-1)+1;
                cout << rowans+col-1 << "\n";
            }
        }
        else{
            long long colans;
            if(col%2 == 0){
                colans = (col-1)*(col-1)+1;
                cout << colans+row-1 << "\n";
            }
            else{
                colans = col*col;
                cout << colans-row+1 << "\n";
            }
        }
        
    }
}

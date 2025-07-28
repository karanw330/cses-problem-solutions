#include <iostream>
using namespace std;

int main(){
    int num,x;
    cin >> num;
    x=num;
    if (num==1){
        cout << "1";
    }
    else if (num==2 || num==3){
        cout << "NO SOLUTION";
    }
    else if (num==4){
        cout << "3 1 4 2";
    }
    else{
        while (num>0){
            cout << num << " ";
            num-=2;
        }
        num=x-1;
        while (num>0){
            cout << num << " ";
            num-=2;
        }
    }
}

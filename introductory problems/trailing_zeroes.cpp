#include <iostream>
using namespace std;

int main(){
    long long num, ans=0,curr=5,temp,sol=1; //initialising sol here to aviod unwanted behaviour because im using it in the condition of while loop
    cin >> num;
    while (sol>0){
        temp=num;
        sol=temp/curr;
        curr*=5;
        ans+=sol;
    }
    cout << ans;
}

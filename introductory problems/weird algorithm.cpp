#include <iostream>
using namespace std;

void func(long long n){
    cout << n << " ";
    if(n==1){
        return;
    }
    else if(n%2==0){
        func(n/2);
    }
    else{
        func((n*3)+1);
    }
}

int main(){
    long long num;
    cin >> num;
    func(num);
    return 0;
}

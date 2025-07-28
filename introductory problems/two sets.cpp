#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n, i,sum,curr=0,num, sqroot;

    cin >> n;
    i=n;
    sum = n*(n+1)/4;
    if (n*(n+1)%4 != 0){
        cout << "NO";
    }
    else{
        sqroot = sqrt(1+(8*(sum)));
        long long root = (-1+sqroot)/2;
        cout << "YES" << "\n" << min(root,n-root) << "\n";
        while (i>n/2 && sum-curr>=i){
            curr+=i;
            cout << i << " ";
            i--;
        }
        num = sum-curr;
        if (num!=0){
            cout << num << " " << "\n" << max(root,n-root) << "\n";
        }
        else{
            cout << "\n" << max(root,n-root) << "\n";
        }
        while (i>0){
            if (i==num){
                i--;
                continue;
            }
            else{
            cout << i << " ";
            i--;
            }
        }
    }
}

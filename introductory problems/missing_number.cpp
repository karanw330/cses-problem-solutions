#include <iostream>
using namespace std;

// int main(){
//     long long num, x;
//     cin >> num;
//     long long arr[num+1];
//     for (int i=1;i<num;i++){
//         cin >> x;
//         arr[x]=1;
//     }                                                             array method
//                                                                     useful when more than one numbers are missing and total numbers are >10^5                   
//     for (int i=1;i<=num;i++){
//         if(arr[i]!=1){
//             cout << i ;
//         }
//     }

// }

int main(){
    long long num, tot, x,sum=0;
    cin >> num;
    tot = num*(num+1)/2;
    for (long long i=1;i<num;i++){
        cin >> x;
        sum += x;
    }
    cout << tot-sum;
}

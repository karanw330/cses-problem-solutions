#include <iostream>
#include <string>
using namespace std;

int main(){
    string dna;
    cin >> dna;
    long long best=1,rep=1;
    for(long long i=1;i<dna.length();i++){ //use .length() to check the length of the string and not sizeof()
        if(dna[i]==dna[i-1]){
            rep++;
        }
        else{
            best = max(best,rep);
            rep=1;
        }
    }
    best = max(best,rep);
    cout << best;

}

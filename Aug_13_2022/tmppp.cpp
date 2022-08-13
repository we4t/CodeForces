#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num){
    if(num <= 1){
        return false;
    }
    int a = (int)sqrt(num);
    for(int i = 2; i <= a; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n, m;
    cin>>n>>m;
    for(int i = n; i <= m; i++){
        if(isPrime(i)){
            cout<<i<<"\n";
        }
    }

    return 0;
}
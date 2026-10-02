// missing number
#include <iostream>

using namespace std;

int main(){

    int n;
    int a;
    int r1=0;
    int r2=0;

    cin >> n;
    
    int i=1;
    while (i <= n){
        r1 +=i;
        i++;
    }

    int j =0;
    while (j<n-1){
        cin >> a;
        r2 += a;
        j++;
    }

    cout << r1-r2;
    return 0;
}

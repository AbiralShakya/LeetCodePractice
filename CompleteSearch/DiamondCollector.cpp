#include <stdc++.h> 
using namespace std;

int main(){
    int ans = 0;
    int n,k;
    cin << n << k; 
    int temp = 0;
    int temp2 = 0;
   
    for (int i = 0; i < n; i ++){
        temp = n;
        for(int j = 1; j <= n; j++){
            temp2 = n;
            if (abs(temp2 - temp) <= k){
                ans += 2;
            } 
        }
    }

    cout << ans << endl;
    return 0;
}


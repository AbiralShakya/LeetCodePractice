#include <stdc++.h> 
using namespace std;

int main(){
    //ifstream fin('pails.in');
    //ofstream fin('pails.out');
    int x,y,m,ans =0;
    cin >> x >> y >> m;
    for (int i = 0; i * x <= m; i++){
        for(int j = 0; i * x + j * y <= m; i++){
            if( i * x + j * y > ans){
                ans = i * x + j * y;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
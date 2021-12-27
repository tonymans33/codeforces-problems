#include <iostream>
using namespace std;

int main(){

    int n;

    cin>>n;
    int x, y, z, xSum(0), ySum(0), zSum(0);

    while(n--){
        cin >> x >> y >> z ;
        xSum += x;
        ySum += y;
        zSum += z;
    
    }

    if (xSum + ySum + zSum == 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}

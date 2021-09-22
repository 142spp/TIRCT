//큰수의 법칙
#include <bits/stdc++.h>

using namespace std;

vector<int> arr;

int main(){
    int n,m,k;

    cin >> n >> m >> k;

    for(int i =0 ; i < n ; i ++){
        int j;
        cin >> j;
        arr.push_back(j);
    }

    sort(arr.begin(), arr.end());
    int index=0,sum=0;
    for(int i=0; i<m; i++){
        if(index==k) {
            sum+=arr[n-2];
            index=0;
        }
        else {
            sum+=arr[n-1];
            index++;
        }
    }
    cout << sum;
}
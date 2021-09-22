#include <bits/stdc++.h>

using namespace std;
vector<int *> v;
vector<int> smallest;

int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        int* arr = new int[m];
        for(int j=0; j<m; j++){
            cin >> arr[j];
        }
        v.push_back(arr);
        delete [] arr;
    }

    for(int i=0; i<n; i++){
        int the_smallest=10000;
        for(int j=0; j<m; j++){
            if(v[i][j]<the_smallest) the_smallest = v[i][j];
        }
        smallest.push_back(the_smallest);
    }

    sort(smallest.begin(),smallest.end());

    cout << smallest[0];
}
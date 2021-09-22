//1이 될때 까지
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;  //값 입력
    int count =0;   // 횟수선언
    while(n!=1){
        if(n%k==0) n/=k;  // 나누어 떨어지면 나누기
        else n-=1;         // 아니면 1을 빼기
        count ++;         // 횟수  더함
    }
    cout << count;

}
//큰수의 법칙
#include <bits/stdc++.h>

using namespace std;

vector<int> arr;        // 1차원 배열 (백터)

int main(){
    int n,m,k;

    cin >> n >> m >> k;  //입력받기

    for(int i =0 ; i < n ; i ++){
        int j;
        cin >> j;
        arr.push_back(j);         // 벡터에 추가
    }

    sort(arr.begin(), arr.end());   // 작은거 먼저 배열
    int index=0,sum=0;               // 얼마나 반복되는지 알려주는 index 와 합계 sum 선언
    for(int i=0; i<m; i++){
        if(index==k) {          // k 만큼 반복되면
            sum+=arr[n-2];      // 제일 큰항 바로 전항 더하기
            index=0;            // 반복횟수 초기화
        }
        else {
            sum+=arr[n-1];       // 아니면 제일 큰 항 더하기
            index++;             // 반복횟수 갱신
        }
    }
    cout << sum;
}
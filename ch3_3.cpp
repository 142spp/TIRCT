//카드 고르기
#include <bits/stdc++.h>

using namespace std;
vector<int *> v;        // 2차원 배열
vector<int> smallest;   // 1차원 배열

int main(){
    int n,m;
    cin >> n >> m;  //입력
    for(int i=0; i<n; i++){
        int* arr = new int[m];  //동적할당
        for(int j=0; j<m; j++){
            cin >> arr[j];  //i번째 줄 카드 입력받기
        }
        v.push_back(arr);  // 배열을 할당
        delete [] arr;  //삭제
    }

    for(int i=0; i<n; i++){
        int the_smallest=10000;  //제일 큰수가 10000 이므로 smallest 를 10000으로 잡음
        for(int j=0; j<m; j++){
            if(v[i][j]<the_smallest) the_smallest = v[i][j];  //i 번째 행의 카드를 모두 비교해서 제일 작은 카드 선별
        }
        smallest.push_back(the_smallest);   // 제일 작은 카드의 숫자만을 골라 따로 벡터로 저장
    }

    sort(smallest.begin(),smallest.end());  // 각 행의 제일작은 숫자들의 모임중 가장 큰 수를 출력
    cout << smallest[0];
}
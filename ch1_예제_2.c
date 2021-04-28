// CSE_C_Easy_Datastucture
chapter 1 - 예제 2.c

#include <stdio.h>

int seq_search(int list[], int n, int key){ // seq_search 라는 함수를 만듬
    int i;

    for(i = 0; i<=n;i++){
        if(list[i]==key)
            return i; // 탐색에 성공하면 키 값의 인덱스 반환
    }
    return -1; // 탐색에 실패하면 -1을 반환
}

int main(){ // 이게 메인 함수임 이게 주로 돌아간다고 생각
    int arr[3] = {0, 1, 2};
    int result_idx;

    result_idx = seq_search(arr, 3, 1); // 위에 만든 함수에다가 해당하는 값들을 전부 입력해주면서 조정해줌

    printf("%d\n", result_idx);

    return 0;
}

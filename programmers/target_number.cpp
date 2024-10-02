#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int target) {

    //<-- 예외처리 -->
    if(numbers.size() == 0 && target == 0){ // 목표 값이 0이고 numbers배열에 인덱스가 없으면 numbers의 인덱스 값은 0이므로, 0을 얻을 수 있는 방법은 1가지.
        return 1;
    }
    else if(numbers.size() == 0){ // 목표 값은 설정되어 있지만 numbers배열에 인덱스가 없을 경우 목표 값을 달성하기 위한 방법이 없기 때문에 방법은 0가지.
        return 0;
    }

    int temp = numbers[0]; // 첫번째 numbers 인덱스값 추출 후 temp 변수에 저장
    numbers.erase(numbers.begin()); // 추출된 numbers의 첫 번쨰 인덱스 값을 numbers배열에서 제거
    
    return solution(numbers, target + temp) + solution(numbers, target- temp); // 재귀함수 호출 및 계산.

}

int main(){
    vector<int> numbers;
    int target;

    numbers = {1,1,1,1,1};
    target = 3; // numbers 배열의 인덱스들을 +,- 하여 얻을 수있는 목표 값

    cout << solution(numbers,target); // 결과 값 출력
    return 0;
}
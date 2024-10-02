#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

vector<int> duplication(vector<int>& a, vector <int>& b) {
	vector<int>::iterator iter;
	vector<int>::iterator iter_b;
	vector<int> c = a; //a의 값 복사
	
	for (iter_b = b.begin(); iter_b != b.end(); iter_b++) {
		for (iter = c.begin(); iter != c.end();) {
			if (*iter == *iter_b)
				iter = c.erase(iter); //중복 제거
			else
				iter++;			
		}		
	}
	return c; //결과 반환
}


int main(){
    vector<int> students_number;
    vector<int> fail_to_submit_students;
    vector<int> submit_students;

    for(int i = 1; i <= 30; i++){
        students_number.push_back(i);
    }

    for(int j = 0; j < 28; j++){
        int temp = 0;
        
        cin >> temp;

        submit_students.push_back(temp);
    }
    fail_to_submit_students = duplication(students_number,submit_students);

    for(int i = 0; i < fail_to_submit_students.size(); i++){
        cout << fail_to_submit_students[i] << " ";
    }
}
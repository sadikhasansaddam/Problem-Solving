#include<bits/stdc++.h>
using namespace std;


void solution(vector<int> &nums, int val) {
        vector<int> v;

        for(int i = 0; i < nums.size(); i++) {
                if(nums[i] != val) {
                    v.push_back(nums[i]);
                }
        }

        nums.clear();

        for(int i = 0; i < v.size(); i++) {
                nums.push_back(v[i]);
        }

       cout <<  nums.size() << endl;
}



int main() {

    int N, data, target;
    vector<int> v;
    cout << "Enter The vector size : " ;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> data;
        v.push_back(data);
    }

    cout << "Enter The Target value : " ;
    cin >> target;

    solution(v, target);

    return 0;

}

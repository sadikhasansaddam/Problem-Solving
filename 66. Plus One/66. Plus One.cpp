#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int>& digits) {
    for(int i = digits.size()-1; i >= 0; i--) {
        if(digits[i] < 9) {
            digits[i] = digits[i] + 1;
            return digits;
        }
        else {
            digits[i] = 0;
        }
    }

    digits.push_back(0);
    digits[0] = 1;
    return digits;
}

int main() {

    int N, value;
    cin >> N;
    vector<int>digits;
    vector<int>ans;

    for(int i = 0; i < N; i++) {
        cin >> value;
        digits.push_back(value);
    }

    ans = solution(digits);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;

}

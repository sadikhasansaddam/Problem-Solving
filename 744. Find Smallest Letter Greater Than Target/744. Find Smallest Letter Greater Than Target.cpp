#include<bits/stdc++.h>
using namespace std;

char solution(vector<char> & letters, char target) {

        for(int i = 0; i < letters.size(); i++) {
            if(letters[i] > target) {
                return letters[i];
            }
        }

        return letters[0];
}


int main()
{

    int N;
    char c, target;
    cin >> N;
    vector<char> letters;
    for(int i = 0; i < N; i++) {
        cin >> c;
        letters.push_back(c);
    }

    cin >> target;

    cout << solution(letters, target) << endl;

    return 0;
}

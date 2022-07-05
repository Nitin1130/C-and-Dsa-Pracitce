#include <iostream>
#include "Solution1.h"
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> array;
    int a;
    for(int i = 0; i < n; i++) {
        cin >> a;
        array.push_back(a);
    }
    int targetSum;
    cin >> targetSum;
    vector<int> ans = twoNumberSum(array, targetSum);
    cout << "[";
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << "]";
    return 0;
}

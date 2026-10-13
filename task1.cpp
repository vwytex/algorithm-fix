#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a = 0;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    cout << min << " " << max << endl;
}

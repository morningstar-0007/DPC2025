#include <bits/stdc++.h>
using namespace std;

int find_Dup(vector<int>& num) {
    int low = 1, high = num.size() - 1;
    int dup = -1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        int cnt = 0;
        for (int n : num) {
            if (n <= mid) cnt++;
        }
        
        if (cnt > mid) {
            dup = mid;  
            high = mid - 1;
        } else {
            low = mid + 1;   
        }
    }
    return dup;
}

int main() {
    vector<int> v = {3, 1, 3, 4, 2};
    cout << "Duplicate number : " << find_Dup(v) << endl;
    return 0;
}

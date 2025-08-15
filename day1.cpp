#include <bits/stdc++.h>
using namespace std;

void sol(vector<int>& v) {
    int l = 0, m = 0;
    int h = v.size() - 1;

    while (m <= h) {
        if (v[m] == 0) {
            swap(v[l], v[m]);
            l++;
            m++;
        }
        else if (v[m] == 1) {
            m++;
        }
        else { 
            swap(v[m], v[h]);
            h--;
        }
    }
}

int main() {
    vector<int> v = {0, 1, 2, 1, 0, 2, 1, 0};

    sol(v);

    for (int nums : v) {
        cout << nums << " ";
    }
    cout << endl;

    return 0;
}

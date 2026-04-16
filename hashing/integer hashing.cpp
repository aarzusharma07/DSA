#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    int hash[13] = {0};

    for (int i = 0; i < n; i++) {
        if(arr[i] >= 0 && arr[i] <= 12)   
            hash[arr[i]]++;
    }

    int q;
    cin >> q;

    while (q--) {
        int number;
        cin >> number;

        if(number >= 0 && number <= 12)   
            cout << hash[number] << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}

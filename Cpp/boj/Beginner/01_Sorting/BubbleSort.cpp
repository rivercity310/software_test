//
// Created by seungsu on 22. 11. 17.
//

#include <iostream>
#include <vector>

using namespace std;

static void bubble_sort(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++)
        for (int j = arr.size() - 1; j >= i; j--)
            if (arr[j - 1] > arr[j])
                std::swap(arr[j - 1], arr[j]);
}

void bubble_sort_test() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bubble_sort(arr);

    cout << "[ 버블정렬 완료 ]" << "\n";
    for (int val : arr)
        cout << val << " ";
}


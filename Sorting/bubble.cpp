#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"Array before sorting:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubbleSort(arr, n);
    cout<<"Array after sorting:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector <int> arr;
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
    insertionSort(arr, n);
    
    cout << "Array after sorting:"<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

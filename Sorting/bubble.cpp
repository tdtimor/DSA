#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &arr)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size()-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    int n;
    vector<int> arr;
    cout<<"Enter the size of the array:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"Array before sorting:"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubbleSort(arr);
    cout<<"Array after sorting:"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
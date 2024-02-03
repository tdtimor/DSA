#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr)
{
    for(int i=0;i<arr.size();i++)
    {
        int min=i;
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        swap(arr[i],arr[min]);
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
    selectionSort(arr);
    cout<<"Array after sorting:"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
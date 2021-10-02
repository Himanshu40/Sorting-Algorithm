#include <bits/stdc++.h>
using namespace std;

void bucketSort(float arr[], int n)
{
    // Create n number of empty buckets
    vector<float> b[n];
    // put data in their prospective buckets
    for (int i=0; i<n; i++)
    {
       int bi = n*arr[i];
       b[bi].push_back(arr[i]);
    }
    // Sort the array using the default sort() function from algorithm library
    for (int i=0; i<n; i++)
       sort(b[i].begin(), b[i].end());
    // Concatenate all buckets in
    int index = 0;
    for (int i = 0; i < n; i++)
        for ( int j = 0; j < (signed)b[i].size(); j++)
          arr[index++] = b[i][j];
}

int main()
{
    float data[] = {0.8 , 0.5 , 0.6 , 0.1 , 0.6 , 0.3 };
    int len = sizeof(data)/sizeof(data[0]);
    cout << "Unsorted array is :";
    for (int i=0; i<len; i++)
       cout << data[i] << " ";
    bucketSort(data, len);
    cout << endl<<"Sorted array is   :";
    for (int i=0; i<len; i++)
       cout << data[i] << " ";
    cout<<endl;
    return 0;
}
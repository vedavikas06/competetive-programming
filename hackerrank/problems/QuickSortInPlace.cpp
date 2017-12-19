#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 int n;
void swap(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}
 void printArray(int arr[])
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);
        
            printArray(arr);
        
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
       
        quickSort(arr, pi + 1, high);
        
    }
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    cin >> n;
     int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    quickSort(arr, 0, n-1);
    
    
    return 0;
}

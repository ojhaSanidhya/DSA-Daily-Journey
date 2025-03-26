#include <iostream>
using namespace std;

// int binarySearch(int arr[], int n, int target){
//     int start = 0;
//     int end = n-1;
//     int mid = start+(end-start)/2;  // This is equal to (s+e)/2
//     while(start<=end){
//         if (arr[mid]==target)
//         {
//             //return index of the found element
//             return mid;
//         }
//         else if (arr[mid]<target){
//             //right me jao
//             start = mid + 1;
//         }
//         else if (arr[mid]>target){
//             //left me jao
//             end = mid - 1;
//         }
//         //mid update
//         mid = start+(end-start)/2;

//     }
// //agar yaha tk pohohche ho
// //iska matlab element nahi mila tumhe
//     return -1;

// }

int findFirstOccurence(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2; // This is equal to (s+e)/2
    int storeIndex = -1;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            storeIndex = mid; // Yaha storeIndex pe int mat use karna
            // left me jao
            end = mid - 1;

        }
        else if (arr[mid] < target)
        {
            // right me jao
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            // left me jao
            end = mid - 1;
        }
        // mid update
        mid = start + (end - start) / 2;
        
    }
    return storeIndex;
}

int findLastOccurence(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2; // This is equal to (s+e)/2
    int storeIndex = -1;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            storeIndex = mid; // Yaha storeIndex pe int mat use karna
            // right me jao
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            // right me jao
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            // left me jao
            end = mid - 1;
        }
        // mid update
        mid = start + (end - start) / 2;
    }
    return storeIndex;
}

int findTotalOccurence(int arr[], int n, int target)
{
    int firstOcc = findFirstOccurence(arr, n, target);
    int lastOcc = findLastOccurence(arr, n, target);
    int total = lastOcc - firstOcc + 1;
    return total;
}

// Peak Index in Mountain Array
int peakIndexMountainArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2; // This is equal to (s+e)/2
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        { // A wali line me hu
            // peak right me exist krti h
            start = mid + 1;
        }
        else
        {
            // yaa toh main B line pr hu
            // ya toh main Peak element pr hu
            end = mid;
        }
        // mid update
         mid = start + (end - start) / 2; // Yaha mid pe int mat use karna
    }
    return mid; // We can return anything - start,end or mid bcz all are in single element.
}

int main()
{
    // int arr[] = {1,2,3,4,5,6,7,8};
    // int n = 8;
    // int target = 7;
    // int ans = binarySearch(arr, n, target);
    // cout<<ans;

    // int arr[] = {1,2,3,3,3,3,4,5};
    // int n = 8;
    // int target = 3;

    // int firstOcc = findFirstOccurence(arr, n, target);
    // cout<<firstOcc<<endl;

    // int lastOcc = findLastOccurence(arr, n, target);
    // cout<<lastOcc<<endl;

    // int total = findTotalOccurence(arr, n, target);

    // Peak Index in Mountain Array
    int arr[] = {10, 20, 50, 40, 30};
    int n = 5;
    int PeakElement = peakIndexMountainArray(arr, n);
    cout << PeakElement;
}
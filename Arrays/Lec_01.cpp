#include <iostream>
#include <limits.h>
using namespace std;


// void printArray(int arr[], int size){
//     for (int i = 0; i < size; i++)
//     {
//       cout<<arr[i]<<" ";
//     }
    
// }

//Linear search in an array
// int linearSearch(int arr[], int size, int target){
//     for (int i = 0; i < size; i++)
//     {
//       if (arr[i]==target)
//       {
//         return true;
//       }
      
//     }
//     return false;
// }


//Count 0's and 1's ina an array

// int CountZero = 0;
// int CountOne = 0;

// void countZeroOne(int arr[], int size) {
//   int zeroCount = 0;
//   int oneCount = 0;

//   for(int i=0; i<size; i++) {
//     if(arr[i] == 0) {
//       zeroCount++;
//     }
//     if(arr[i] == 1) {
//       oneCount++;
//     }
//   }
//   cout << "ZeroCount: " << zeroCount << endl;
//   cout << "oneCOunt: " << oneCount << endl;
// }


// Find Min no in Array
// int findMinimumInArray(int arr[], int size){

//     int ans = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
      
//       if (arr[i]<ans)
//       {
//         ans = arr[i];
//       }
      
//     }
//     return ans;

    
// }

// Find Max no in Array
// int findMaximumInArray(int arr[], int size){
//   int ans = INT_MIN;
//   for (int i = 0; i < size; i++)
//   {
//     if (arr[i]>ans)
//     {
//       ans = arr[i];
      
//     }
    
//   }
//   return ans;
  
// }

//Reverse an array (eg.1)
// void reverseArray(int arr[], int n){
//   int left = 0;
// int right = n-1;
//   while (left<=right)
// {
//   swap(arr[left], arr[right]);
//   left++;
//   right--;
// }

// for (int i = 0; i < n; i++)
// {
//   cout<<arr[i]<<" ";;
// }

// }

//Reverse an array (eg.2)
// void reverseArray(int arr[], int n){
//   int left = 0;
// int right = n-1;
//   while (left<right)
// {
//   swap(arr[left], arr[right]);
//   left++;
//   right--;
// }

// for (int i = 0; i < n; i++)
// {
//   cout<<arr[i]<<" ";;
// }

// }

//Extreme print in an array, e.g(1)
// void Extreme(int arr[], int n){
//     int left = 0;
//     int right = n-1;
//     while (left<=right)
//     {
//       cout<<arr[left]<<" ";
//       cout<<arr[right]<<" ";
//       left++;
//       right--;
//     }
// }


//Extreme print in an array, e.g(2)
void Extreme1(int arr[], int n){
    int left = 0;
    int right = n-1;
    while (left<right)
    {
      cout<<arr[left]<<" ";
      cout<<arr[right]<<" ";
      left++;
      right--;
    }
    if (left==right)
    {
      cout<<arr[left];
    //OR -> cout<<arr[right]  
    }
    
    

}


int main()
{

//  Array Creation
//  int arr[101];
//  char ch[102];
//  bool flags[223];
//  long num[900];
//  short snum[1000];

// int a = 5;
// cout << "Size of a: "<< sizeof(a) << endl;
// cout << "Address of a :" << &a << endl;

// int arr[10];
// cout << "Base address if Arr is: " << &arr << endl;
// cout << "Base address if Arr is: " << arr << endl;  //This is also used for finding address

// int arr[] = {2,3,4,56,6};

// int brr[5] = {1,2,3,4,5};

// int crr[5] = {2,3};

// int drr[2] = {1,2,3,44,5}; //This will show error

// cout << arr[0] << endl;
// cout << arr[1] << endl;
// cout << arr[2] << endl;
// cout << arr[3] << endl;
// cout << arr[4] << endl;


//Giving output in an array
//  int n = 5;
//  for (int i = 0; i < n; i++)
//  {
//     cout<<arr[i]<<endl;
//  }

//Taking input in an array
// int arr[5];
// int n = 5;
// for (int i = 0; i < n; i++)
// {
//  cout << "Enter the value for index " << i << ": " ;
//    cin >> arr[i];
//    cout << endl;

// }

//P.S - 1
// int arr [10];
// int n =10;
// for (int i = 0; i < n; i++)
// {
//     cin>>arr[i];
//     cout<<endl;
// }
// for (int i = 0; i < n; i++)
// {   
//     cout<<"Array value are"<<endl;
//     cout<<2*arr[i]<<endl;
// }

//P.S - 2
// int arr[5];
//input;
  // int n = 5;
  // cout << "Enter the input " << endl;
  // for(int i=0; i<n; i++) {
  //  cin >> arr[i] ;
  // }

//calculate sum;
  // int sum  = 0;
  // for(int i=0; i<n; i++) {
  //  sum = sum + arr[i];
  // }
  // cout << "printing sum: " << sum << endl;

//Linear search in an array, M-1
  // int arr[5] = {2,4,6,8,10};
  // int target = 11;
  // int n = 5;

  // bool flag = 0;
  // // 0 -> not found;
  // //1 -> found
  
  // for(int i=0; i<n; i++) {
  //  if(arr[i] == target) {
  //    //found
  //    flag = 1;
  //    break;
  //  }
  // }

  // if(flag == 1) {
  //  cout << "target found";
  // }
  // else {
  //  cout << "target not found" << endl;
  // }

//function call
// int arr[] = {1,2,3,4,5,6,7,8,9,0};
// int size = 10;
// printArray(arr,  size);


//Linear search in an array using function, M-2
// int arr[5] = {2,4,6,8,10};
// int target = 10;

// int size = 5;
// int ans = linearSearch(arr, size, target);

// if (ans==1)
// {
//   cout << "target found";
// }
// else{
//   cout << "target not found" << endl;
// }

//Count 0's and 1's ina an array
  // int arr[] = {0,0,0,1,1,0,1,0,1,0,1,0,1,1,1};
  // //zero => 7
  // //one => 8
  // int size = 15;
  // countZeroOne(arr,size);


  // // -2 to the  power 31
  // cout << INT_MIN << endl;
  // //2 to the power 31 - 1
  // cout << INT_MAX << endl;

// Find Min no in Array
// int arr[] = {20,4,15,2,6,8,11};
// int size = 7;

// int finalans = findMinimumInArray(arr, size);
// cout<<finalans;

// Find Max no in Array
// int arr[] ={2,5,8,0,7,3,21,67,89,34,56,76,13,48,69,98,56};
// int size = 17;
// int finalans = findMaximumInArray(arr,size);
// cout<<finalans;

//Reverse in an array (eg.1)
// int arr[] = {10,20,30,40,50,60};
// int n = 6;
// reverseArray(arr,n);

//Reverse an array (eg.2)
// int arr[] = {10,20,30,40,50,60,70};
// int n = 7;
// reverseArray(arr,n);

//Extreme print in an array, e.g(1)
// int arr[] = {10,20,30,40,50,60};
// int n = 6;

// Extreme(arr, n);

//Extreme print in an array, e.g(2)
int arr[]= {1,2,3,4,5,6,7,8,9};
int n = 9;
Extreme1(arr, n);





}

#include <iostream>
using namespace std;

// int incrementby1(int n){
//     n = n+1;
//     return n;
// }

// int incrementby1(int &k){
//     k = k+1;
//     return k;
// }

// Find unique element
//  int getUnique(int arr[], int n){
//      int ans = 0;
//      for (int i = 0; i < n; i++)
//      {
//          ans = ans^arr[i];
//      }
//      return ans;
//  }

// void sortZeroOne(int arr[], int n){
//   int zeroCount = 0;
//   int oneCount = 0;
//   //stepA: Count 0 and 1
//   for(int i=0; i<n; i++) {
//     if(arr[i] == 0)
//       zeroCount++;
//     if(arr[i] ==1)
//       oneCount++;
//   }
//    int i = 0;
    // while (zeroCount--)
    // {
    //     arr[i] = 0;
    //     i++;
    // }
    // cout<<arr[i]<<endl;
    // while (oneCount--)
    // {
    //     arr[i] = 1;
    //     i++;
    // }
    // cout<<arr[i]<<endl;

//Step B: place all zeroes first
//  for(i =0; i<zeroCount; i++) {
//   arr[i] = 0;
//   cout<<arr[i];
//  }
//  //Step B: place all ones first
//  for(int j = i; j<n ;j++) {
//   arr[j] = 1;                     // By prev loop i will become 8 so, j is initiating with value 6.
//   cout<<arr[j];
//  }
// }

// Sort 0's and 1's, e.g 2
 void sortZeroOne2(int arr[], int n){
     int zeroCount = 0;
    int oneCount = 0;
   //stepA: Count 0 and 1
   for(int i=0; i<n; i++) {
     if(arr[i] == 0)
       zeroCount++;
     if(arr[i] ==1)
       oneCount++;
   }
   cout<<zeroCount<<" "<<oneCount<<endl;
 int left = 0;
 int right = n-1;
 while (left<=right)
 {
     arr[left] = 0;
     arr[right] = 1;
     left++;
     right--;
 }

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
}

// Sort 0's and 1's, e.g 3
//  void sortZeroOne3(int arr[], int n){
//      int zeroCount = 0;
//    int oneCount = 0;
//    //stepA: Count 0 and 1
//    for(int i=0; i<n; i++) {
//      if(arr[i] == 0)
//        zeroCount++;
//      if(arr[i] ==1)
//        oneCount++;
//      }
//      cout<<zeroCount<<" "<<oneCount<<endl;
//  int left = 0;
//  int right = n-1;
//  while (left<right)
//  {
//      arr[left] = 0;
//      arr[right] = 1;
//      left++;
//      right--;
//  }
//  if (left==right)
//  {
//      arr[right] = 1;
//  }

// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }
// }

// Sort 0's and 1's, e.g-4
//  void sortZeroOne4(int arr[], int n){
//      int zeroCount = 0;
//    int oneCount = 0;
//    //stepA: Count 0 and 1
//    for(int i=0; i<n; i++) {
//      if(arr[i] == 0)
//        zeroCount++;
//      if(arr[i] ==1)
//        oneCount++;
//      }
//      cout<<zeroCount<<" "<<oneCount<<endl;

//     int left = 0;
// int right = n-1;
// while (left<=right)
// {
//     arr[left] = 0;
//     arr[right] = 1;
//     left++;
//     if (right>8)
//     {
//     right--;
//     }

// }

// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }
// }


//right ki disha me shift
void shiftArray(int arr[], int n)
{
    // Step 1
    int temp = arr[n - 1];
    // int temp2 = arr[n-2];

    // step2
    // shift -> arr[i] = arr[i-1]
    for (int i = n - 1; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }

    // step3 - copy temp into 0th index
    arr[0] = temp;
    // arr[1] = temp2;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    // Reference Variable
    //  int a = 5;
    //  cout<<a<<endl;

    // int &x = a; // here we give a nickname to the variable a.
    // cout<< x<<endl;

    // x=10;
    // cout<< x<<endl;
    // cout<<a<<endl;

    // Function call by Value
    //  int n;
    //  cin>>n;
    //  incrementby1(n);
    //  cout<< "n: "<<n<<endl; // This n is diff from the other fn n

    // Function call by Reference
    //  int n;
    //  cin>>n;
    //  incrementby1(n);
    //  cout<< "n: "<<n<<endl; // Here value of n is copy in itself with diff name.

    // Find unique element
    //  int arr[] = {2,10,11,10,2,13,15,13,15};
    //  int n = 9;

    // int finalans = getUnique(arr, n);
    // cout<<finalans<<endl;

    // Pairing
    //  int arr[]= {10,20,30};
    //  int n =3;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<arr[i]<<" "<<arr[j]<<endl;
    //     }

    // }

    // Triplets
    //  int arr[]= {1,2,3,4};
    //  int n =4;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         for (int k = 0; k < n; k++)
    //         {
    //             // cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
    //             // cout<<arr[i]+arr[j]+arr[k]<<endl;
    //         }

    //     }

    // }

    // Sort 0's and 1's
    //    int arr[] = {0,1,0,1,0,1,1,1,1,0,0,0,0,0};
    //    int n = 14;

    //   sortZeroOne(arr, n);

    // //Sort 0's and 1's, e.g 2
    //  int arr[] = {0,1,0,1,1,0};
    //  int n = 6;
    // sortZeroOne2(arr, n);

    // Sort 0's and 1's, e.g 3
    //   int arr[] = {0,1,0,1,1,0,1};
    //   int n = 7;
    //  sortZeroOne3(arr, n);

    // Sort 0's and 1's, e.g-4
    //    int arr[] = {0,1,0,1,0,1,1,1,1,0,0,0,0,0};
    //    int n = 14;

    //   sortZeroOne4(arr, n);

    // shift array element by 1
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    shiftArray(arr, n);
}

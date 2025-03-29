#include <iostream>
using namespace std;

// Division of two number by bianry search
int getQuotient(int divident, int divisor)
{
    int s = 0;
    int e = divident;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (divisor * mid == divident)
        {
            return mid;
        }
        else if (divisor * mid <= divident)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

// BinarySearch on nearly sorted array
int searchNearlySorted(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (arr[mid - 1] == target)
        {
            return mid - 1;
        }
        else if (arr[mid] < target)
        {
            s = mid + 2; // Catch, if we do  s = mid+1 so we recheck the value which is not necessary
        }
        else
        {
            e = mid - 2; // Catch, if we do  e = mid-1 so we recheck the value which is not necessary
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int findOddOccuringElement(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {   
        //single element
        if (s == e)
        {
            return s;
        }
        // mid check -> even or odd
        if (arr[mid] % 2 == 0)
        {

            if (mid+1 >=n && arr[mid] == arr[mid + 1])
            {
                s = mid + 2;
            }
            else
            {
                // ya toh main right part pr khada hu
                // ya toh main answer k upar khada hu
                // that's why e = mid krra hu
                //  kyoki e = mid - 1; se ans lost ho skta h
                e = mid;
            }
        }
        // odd
        else
        {
            if (mid-1 >=0 && arr[mid] == arr[mid - 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int binarySearch(int arr[], int start, int end, int x){
    int mid = start+(end-start)/2;
    while(start<=end){
        if (arr[mid] == x)
        {return mid;}
        else if (arr[mid] > x)
        {end = mid-1;}
        else
        {start = mid+1;}
        mid = start+(end-start)/2;
    }
    return -1;
};

int exponentialSearch(int arr[], int n, int x){
    if (arr[0]==x){return 0;};
    int i = 1;                  // Here we statrt i ko 1 se bcz 0 se start karne par infinity loop mei fash jate
    while (i<n && arr[i]<=x)
    {
        i = i*2;
    }
    return binarySearch(arr, i/2, min(i, n-1), x); // minimum lenge i and n-1 mei se taaki aaray ke bahar ka index nahi aaye
}

int sqrt(int n){
    int s = 0;
    int e = n-1;
    int ans = 0;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            e = mid-1;
        }
        else{
            ans = mid;
            s = mid+1;
        }
        mid = s+(e-s)/2;
    } 
    return ans;
}

// Sq. root with precision value.
double precision(int n){
    double finalAns = sqrt(n);
    double step = 0.1;
    int precision = 3;
    for(int i = 0; i<precision; i++){
        double j = finalAns;
        while(j*j<=n){
            finalAns = j;
            j = j+step;
        }
        step = step/10;
    }
    return finalAns;
}

int Division(int divident, int divisor){
    int s = 0;
    int e = divident-1;
    int mid = s+(e-s)/2;
    int store = -1;
    while(s<=e){
        if(mid*divisor==divident){
            return mid;
        }
        else if(mid*divisor<divident){
            store = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return store;
}

double DivWithPreci(int divident, int divisor){
    double ans = Division(divident, divisor);
    double step = 0.1;
    int precision = 2;
    for(int i = 0; i<precision; i++){
        double j = ans;
        while(j*divisor<=divident){
            ans = j;
            j = j+step;
        }
        step = step/10;
    }
    return ans;
}


int main()
{

    // Division of two number by bianry search, +ve case
    //  int divident = 29;
    //  int divisor = 7;
    //  int finalAns = getQuotient(divident, divisor);
    //   cout << "Final Ans is: "<<finalAns<<endl;

    // Division of two number by binary search, -ve case
    //  int divident = -29;
    //  int divisor = 7;
    //  int finalAns = getQuotient(abs(divident), abs(divisor));
    //  // Here absolute function is used for converting -ve ko =ve mei.

    // if (divident<0 && divisor>0 || divident>0 && divisor<0)
    // {
    //    finalAns = 0-finalAns;
    //    cout << "Final Ans is: "<<finalAns<<endl;
    // }
    // else{
    //     cout << "Final Ans is: "<<finalAns<<endl;
    // }

    // BinarySearch on nearly sorted array
    //  int arr[] = {20, 10, 30, 50, 40, 70, 60};
    //  int n = 7;
    //  int target = 70;
    //  int targetIndex = searchNearlySorted(arr, n, target);
    //  if (targetIndex == -1)
    //  {
    //      cout << "Element Not found" << endl;
    //  }
    //  else
    //  {
    //      cout << "Element Found at Index: " << targetIndex << endl;
    //  }

    // Odd occuring element
    // int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    // int n = 11;
    // int ansIndex = findOddOccuringElement(arr, n);
    // cout << "Final Ans is: "<< arr[ansIndex] << endl;

    // Exponential search - 1) In normal Array                      
    // int arr[] = {3,4,5,6,11,13,14,15,56,70};
    // int n = 10;
    // int x = 56;
    // int ans = exponentialSearch(arr, n, x); 
    // cout<<ans<<endl;

    // Exponential search - 2) Unbounded Array or Infinity Array
    //  SEE COPY, THERE ONLY IT IS EXPLAINED (IMPORTANT).

    // Sq. root with precision value.
    // int n = 68;
    // // sqrt(n);
    // cout<<precision(n);

    // Division of two number by bianry search with their precised value, +ve case
    int divident = 90;
    int divisor = 8;
    // Division(divident, divisor);
    cout<<DivWithPreci(divident, divisor);
}

#include <iostream>
using namespace std;

// int a = 5;
// int b = 3;
// int c = 10;

// Max of 3no a,b,c
//  int MaxNum(int a, int b, int c){
//      //  if (a>b && a>c)
//      // {
//      //     cout<<a;
//      // }
//      // else if (b>a && b>c)
//      // {
//      //     cout<<b;
//      // }
//      // else{
//      //     cout<<c;
//      // }
// OR
//     int ans = max(a,b);
//     int finalAns = max(ans,c);

//     return finalAns;

// }

// Counting from 1 to N
// void countNum(int num1){
//         for (int i = 1; i < num1; i++)
// {
//     cout<<i<<endl;
// }
// }

// Check Even Or Odd
//  void CheckEvenOrOdd(int num){
//      if (num % 2 == 0)
//      {
//          cout<<"Given number is prime";
//      }
//      else{
//          cout<<"Given number is not prime";
//      }
//  }

// Sum of all number upto 1 to N
// int ans = 0;
//  void SumOfNum(int num1){
//         for (int i = 1; i < num1; i++)
// {
//     // int Finalans = ans + i;
//     int ans = ans + i;
//    //cout<<ans<<endl;

// }
// cout<<ans<<endl;
// }

// Sum of all even number upto 1 to N
int ans = 0;
 void SumOfEvenNum(int num1){
        for (int i = 1; i < num1; i++)
{
    if (i%2==0)
    {
        ans = ans + i;
        // cout<<ans<<endl;
    }

    // int ans = ans + i;
    // cout<<ans<<endl;

}
cout<<ans<<endl;
}

//Area of Circle

// void AreaofCircle(float pi, float r){
//     float rsq = r*r;
//     cout<< pi*rsq<<endl;
// }

int factorialNo(int n){
    int ans = 1;
    for (int i = n; i > 0; i--)
{   
    ans = ans*i;
    // if (i==1)
    // {
    //     return ans;
    // }
    
}
return ans;
}

int main()
{
    // Max of 3no a,b,c
    //  MaxNum(3,8,0);
    //  int z = max(5,7);
    //  cout<< z;

    // int z = MaxNum(300,80,0);
    // cout<< z;

    // Counting from 1 to N
    // countNum(21);

    // Check Even Or Odd
    //  int TakeNo;
    //  cin>>TakeNo;
    //  CheckEvenOrOdd(TakeNo);

    // Sum of all number upto 1 to N
    //  SumOfNum(10);

    // Sum of all even number upto 1 to N
    // SumOfEvenNum(21);

    //Area of Circle
    // float num1= 3.17;
    // float c;
    // cin>>c;
    // AreaofCircle( num1, c);

    int c;
    cin>>c;
    int finalAns = factorialNo(c); 
    cout<<finalAns<<endl;

    //Prime Numer // (Confusion...)
    // int n = 11;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n%i==0)
    //     {
    //         /* code */
    //     }
        
    // }   
}

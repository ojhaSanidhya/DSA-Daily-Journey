#include<iostream>
#include<vector>
using namespace std;

// M3 Sieve of Eratosthenes Algorith,  Prime number
    int countPrimes(int n)
    {
        vector<bool>prime(n + 1, true);
        prime[0] = prime[1] = false;
        int ans = 0;

        for (int i = 2; i < n; i++)
        {
            if (prime[i])
            {
                ++ans;

                int j = 2 * i;
                while (j < n)
                {
                    prime[j] = false;
                    j += i;
                }
            }
        }
        return ans;
    }

//Method -2, Prime number
bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    int countPrimes(int n)
    {
        int c = 0;
        for (int i = 2; i < n; ++i)
        {
            if (isPrime(i))
                ++c;
        }
        return c;
    }


//Method -1,  Prime number
bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }

int countPrimes(int n)
    {
        int c = 0;
        for (int i = 2; i < n; ++i)
        {
            if (isPrime(i))
                ++c;
        }
        return c;
    }

//GCD
int gcd(int A, int B){
    if (A == 0)
        return B;
    if (B == 0)
        return A;

    while (A > 0 && B > 0)
    {
        if (A > B)
            A = A - B;
        else
            B = B - A;
    }
    return A == 0 ? B : A;
}

int fastExponentiation(int x, int n)
{
    long long int ans = 1;

    while (n > 0)
    {
        if (n & 1)
        {
            // n is odd.
            ans = (ans * x);
        }
        x = (x * x);
        n >>= 1;
    }
    return ans;
}

int slowExponentiation(int a, int b)
{
    int ans = 1;
    while (b--)
    {
        ans *= a;
    }
    return ans;
}

void CheckPrime(int a){
    for(int i = 2; i<a; i++){
        if(a%i==0){
            cout<<false;
        }
    }
    cout<<true;
}


int main(){
    // Prime number
    // int n = 10;

    // cout<<countPrimes(n)<<endl;

    //GCD
    // int a = 74;
    // int b = 24;
    // cout<<gcd(a,b)<<endl;

    // int a = 5;
    // int b = 4;

    // cout << slowExponentiation(a, b) << endl;
    // cout << fastExponentiation(a, b) << endl;
    
    int a = 10;
    CheckPrime(a);

    
}

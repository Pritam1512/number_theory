#include<bits/stdc++.h>
using namespace std;


//VALID TILL 10^5~10^6
//WILL BE FAIL FOR NUMBER 10^9
//FOR THAT WE HAVE TO CREATE SEGMENTED SIEVE

int main()
{
    int n;
    cin >> n;

    vector<bool> is_prime(n);
    for(int i=2;i<=n;i++)
    {
        is_prime[i] = true;
    }

    for(int i=2;i*i<=n;i++)
    {
        if(is_prime[i] ==true)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                is_prime[j] = false;
            }
        }
    }

    int t;
    cin >> t;
    while(t--){

            int low,high;
            cin >> low >> high;

            for(int i=low;i<=high;i++)
            {
                if(is_prime[i])
                    cout << i << " ";
            }
    }

}


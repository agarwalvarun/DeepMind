//1000000000
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<map>
#define MAX_NO 50000
#define MAX_INTERVAL 100000
using namespace std;
int stprime[50000];
int no;
void startingprime()
{
      bool primes[MAX_NO+100];

    std::memset(primes, 1, sizeof primes);

    primes[0] = false;
    primes[1] = false;
    primes[2] = true;

    for (int i = 2; i <= MAX_NO; ++i)
    {
        if (primes[i])
        {
            for (int j = i + i; j <= MAX_NO; j += i)
            {
                primes[j] = false;
            }
        }
    }

    no = 0;
    for (int i = 2; i <= MAX_NO; ++i)
    {
        if (primes[i])
        {
            stprime[no] = i;
            ++no;
        }
    }
}
main()
{
      startingprime();
      long t,m,n;
      scanf("%ld",&t);
      while(t--)
      {
                scanf("%ld%ld",&m,&n);
                bool primeinterval[MAX_INTERVAL+100];
                std::memset(primeinterval, 1, sizeof primeinterval);
                if (m == 0)
                {
                      primeinterval[0] = false;
                      if (n - m > 1) primeinterval[1] = false;
                }
                if (m == 1) primeinterval[0] = false;
                for (int i = 0; i < no; ++i)
                {
                    int prime = stprime[i];
                    if (prime * 2 > n) break;
                    int j = m / prime;
                    if (j < 2) j = 2;
                    for (;;)
                    {
                        int prod = prime * j;
                        if (prod > n) break;
                        if (prod >= m)
                        {
                                 primeinterval[prod - m] = false;
                        }
                        ++j;
                     }

                }
                for(int i=m;i<=n;i++)
                {
                        if( primeinterval[i - m])
                        cout<<i<<",";
                }
      printf("\n");
      }
}

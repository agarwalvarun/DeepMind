#include<stdio.h>
#include<string.h>
#include<math.h>
char arr[100001],isprime[31625];

void sieve(void);
void compute(int,int);

int main()
{
int m,n,t;
sieve();
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&m,&n);
compute(m,n);
}
return 0;
}

void sieve(void)
{
int i,p;
memset(isprime,1,31625);
isprime[0]=0;
for(p=2;p<=177;)
{
for(i=p*p;i<=31625;i+=p)
isprime[i-1]=0;
p++;
while(!isprime[p-1])
p++;
}
}

void compute(int m,int n)
{
int d,i,p,s,count=0;
d=n-m+1;
memset(arr,1,d);
if(m==1)
arr[0]=0;
i=(m<4)?4:(((m+1)>>1)<<1);
for(;i<=n;i+=2)
arr[i-m]=0;
for(p=3;(s=p*p)<=n;)
{
if(s<m)
{
s=((m+p-1)/p)*p;
if(!(s&1))
s+=p;
}
for(i=s;i<=n;i+=p)
arr[i-m]=0;
p++;
while(!isprime[p-1])
p++;
}
for(i=0;i<d;i++)
{if(arr[i])
printf("%d,",i+m);
}
//printf("");
}

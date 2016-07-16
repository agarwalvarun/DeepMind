#include<bits/stdc++.h>
using namespace std;
bool mark[5*1000000+1];
vector < int > V;

void ini()
{
    int i  , j ;
    for(i=2;i<=5*1000000;++i)
    {
        if(mark[i])
            continue;
        if(i%4==1)
            V.push_back(i);

        for(j=1;j*i<=5*1000000;++j)
            {
                mark[j*i]=1;

            }
    }
    return ;

}

int main(){
    ini();
    FILE *fp=fopen("out.txt","w+");
    for(vector < int>::iterator it = V.begin();it!=V.end();++it)
        {

            fprintf(fp,"%d,",(*it));
        }

    return 0;
}

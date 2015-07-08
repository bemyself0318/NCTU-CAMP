#include <stdio.h>
#include <stdlib.h>

int f91(int x)
{
    if(x<=100) {
        return f91(f91(x+11));
    } else {
        return x-10;
    }
}

int main()
{
    int N;
    while(scanf("%d",&N)!=EOF && N!=0) {
        printf("f91(%d) = %d\n",N,f91(N));
    }
    return 0;
}
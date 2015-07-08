#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cases;
    scanf("%d",&cases);
    getchar();
    while(cases--){
        long long int R_u=1,R_d=0;
        long long int L_u=0,L_d=1;
        char c[100]={' '};
        fgets(c,100,stdin);
        int len=strlen(c)-1;
        long long int C_u=1,C_d=1;
        for(int i=0;i<len;i++){
            if(c[i]=='R'){
                L_u=C_u;
                L_d=C_d;
                C_u+=R_u;
                C_d+=R_d;
            }
            else if(c[i]=='L'){
                R_u=C_u;
                R_d=C_d;
                C_u+=L_u;
                C_d+=L_d;
            }
        }
        printf("%lld/%lld\n",C_u,C_d);
    }
    return 0;
}
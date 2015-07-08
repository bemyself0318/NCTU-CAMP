#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("input.txt","w");
    for(int i=1;i<=1000;i++){
        fprintf(fp,"%d\n",i);
        if(i==1000)
        fprintf(fp,"%d\n",0);
    }
    fclose(fp);
    printf("finished\n");
    return 0;
}
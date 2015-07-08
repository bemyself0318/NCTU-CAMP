#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool check(int a,int b){
    int book[11]={0};
    if(a<10000){
        book[0]++;
    }
    if(b<10000){
        book[0]++;
    }
    
    if(book[0]>1){
        return false ;
    }
    while(a!=0){
        int tmp=a%10;
        if(book[tmp]!=0){
            return false;
        }
        book[tmp]++;
        a/=10;
    }
     while(b!=0){
        int tmp=b%10;
        if(book[tmp]!=0){
            return false;
        }
        book[tmp]++;
        b/=10;
    }
   return true;
}

int main()
{
    int N;
    int mark=0;
    while(scanf("%d",&N) && N!=0){
        if(mark!=0){
        printf("\n");
        }
        int fhgi=1234;
        int abcde=fhgi*N;
        bool found=false;
        for(fhgi=1234 ; abcde<100000 && fhgi<abcde; fhgi++){
            abcde=fhgi*N;
            if(check(abcde,fhgi)){
                found=1;
                    printf("%05d / %05d = %d\n",abcde,fhgi,N);
            }
        }
        if(!found){
           printf("There are no solutions for %d.\n",N); 
        }
        mark++;
    }
    return 0;
}
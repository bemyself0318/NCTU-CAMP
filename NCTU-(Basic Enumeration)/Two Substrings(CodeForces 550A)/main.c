#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s[100010]= {'0'};
    fgets(s,100010,stdin);
    int len=(int)strlen(s);
    int i;
    bool result=false,check1=false;
    for(i=1; i<len-1; i++) {
        if(check1==false) {
            if(s[i]=='B' && s[i-1]=='A') {
                i++;
                check1=true;
            }
        } else if(check1==true) {
            if(s[i]=='A' && s[i-1]=='B') {
                result=true;
                break;
            }
        }
    }
    bool check2=false;
    for(i=1; i<len-1; i++) {
        if(check2==false) {
            if(s[i]=='A' && s[i-1]=='B') {
                i++;
                check2=true;
            }
        } else if(check2==true) {
            if(s[i]=='B' && s[i-1]=='A') {
                result=true;
                break;
            }
        }
    }

    if(result)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

void solve(char *pre, char *in, int n, char *post){
    if(n<=0)
    return;
    char *p=strchr(in,pre[0]);  //find root
    solve(pre+1,in,p-in,post);  //left tree
    solve(pre+(p-in)+1,p+1,in + n - 1 - p,post+(p-in)); //right tree
    post[n-1]=pre[0]; //root
    
}

int main()
{
    char line[60];
    while(fgets(line,60,stdin)!=NULL){
        char pre[30]={' '},in[30]={" "},post[30]={' '};
        char *temp1=strtok(line," ");
        char *temp2=strtok(NULL," ");
        strcpy(pre,temp1);
        strcpy(in,temp2);
        int len=(int)strlen(pre);
        solve(pre,in,len,post);
        printf("%s\n",post);
    }
    return 0;
}
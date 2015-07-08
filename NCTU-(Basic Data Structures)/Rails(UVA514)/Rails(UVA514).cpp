#include <cstdio>
#include <cstdlib>
#include <cstdbool>
#include <stack> 

using namespace std;

int main()
{
    int N;
    while(scanf("%d",&N)==1 && N){
        int train[N+10];
       /* if(flag!=0){
           printf("\n");
        }
        flag++;*/
        while(scanf("%d",&train[1]) && train[1]){
            for(int i=2;i<=N;i++){
                scanf("%d",&train[i]);
            }
            stack<int> station;
            int A=1,B=1;
            int ok=true;
            while(B<=N){
                if(A==train[B]){
                    A++;B++;
                }
                else if(!station.empty() && station.top()==train[B]){
                    station.pop();
                    B++;
                }
                else if(A<=N){
                    station.push(A);
                    A++;
                }
                else{
                    ok=false;
                    break;
                }
            }
           printf("%s\n",ok ?"Yes":"No");
        }
        printf("\n");
    }
    return 0;
}
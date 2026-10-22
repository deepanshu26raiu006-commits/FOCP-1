#include<stdio.h>
int n=2,cnt,prime;
int main(){
    for(int i=1;i<=5;i++){
        cnt=0;
        while(cnt<i){
            prime=1;
        for(int j=2;j*j<=n;j++){
            if(n%j==0 ){
                prime=0;
                break;
            }
        }
        if(prime){
            printf("%d",n);
            i--;
            break;
        }
          n++; 
        }
        n++;
        printf("\n");
    }
}
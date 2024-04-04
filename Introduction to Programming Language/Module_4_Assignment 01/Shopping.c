//InjamTanvir(INJAM UL HAQUE)

#include<stdio.h>

int main(){
    long long int N;
    scanf("%lld", &N);
    if ( N > 1000){
        printf("I will buy Punjabi\n");
        long long int After_buying_Punjabi = N - 1000;
        if (After_buying_Punjabi >= 500){
            printf("I will buy new shoes\nAlisa will buy new shoes\n");
        }
    }
    else{
        printf("Bad luck!\n");
    }
    return 0;
}
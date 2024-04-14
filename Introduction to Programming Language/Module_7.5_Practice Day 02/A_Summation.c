//InjamTanvir(INJAM UL HAQUE)

#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int arr[a];
    for(int i=0; i < a; i++){
        scanf("%d", &arr[i]);
    }
    long long int sum = 0;
    for(int j = 0; j < a; j++){
        sum = sum + arr[j];
    }
    if(sum < 0){
        sum = sum * -1;
    }
    printf("%lld", sum);
}
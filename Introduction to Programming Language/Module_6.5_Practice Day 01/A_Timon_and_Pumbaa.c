//InjamTanvir(INJAM UL HAQUE)

#include<stdio.h>

int main(){
    int a, b, st = 0;
    scanf("%d %d", &a, &b);
    int subtract = a - b;
    if(subtract > 0){
        printf("%d", subtract);
    }
    else{
        printf("%d", st);
    }
    return 0;
}
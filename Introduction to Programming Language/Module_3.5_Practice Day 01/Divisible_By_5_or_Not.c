//InjamTanvir(INJAM UL HAQUE)

#include<stdio.h>

int main(){
    int i, inp;  
    scanf("%d", &inp);
    for(i=1;i<=inp;i++){
        if(i%5 == 0){
            printf("%d Yes\n", i);
        }
        else{
            printf("%d No\n", i);
        }
    }  
    return 0;
}
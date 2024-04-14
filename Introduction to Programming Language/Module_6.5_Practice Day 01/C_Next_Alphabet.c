//InjamTanvir(INJAM UL HAQUE)

#include<stdio.h>

int main(){
    char C;
    scanf("%c", &C);
    if(C>=97 && C <=122){
        if(C == 122){
            int ans = C-25;
            printf("%c", ans);
        }
        else{
            int ans = C + 1;
            printf("%c", ans);
        }
    }
    return 0;
}
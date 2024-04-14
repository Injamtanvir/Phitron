//InjamTanvir(INJAM UL HAQUE)
 
#include<stdio.h>
 
int main(){
    int a, N;
    scanf("%d", &a);
    int arr[a];
    for(int i = 0; i < a; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &N);
    int ans = -1;
    for(int i = 0; i < a; i++){
        if(arr[i] == N){
            ans = i;
            break;
        }
        }
 
    printf("%d", ans);
    return 0;
}
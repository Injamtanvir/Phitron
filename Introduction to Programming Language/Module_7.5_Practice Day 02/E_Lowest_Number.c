//InjamTanvir(INJAM UL HAQUE)

#include<stdio.h>
#include<limits.h>

int main(){
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 1; i <= a; i++){
        scanf ("%d", &arr[i]);
    }
    int inx = 0;
    int min = INT_MAX;
    for (int i = 1; i <= a; i++){
        if (arr[i] < min){
            min = arr[i];
            inx = i;
        }
    }
    printf("%d %d", min, inx);
    return 0;
}
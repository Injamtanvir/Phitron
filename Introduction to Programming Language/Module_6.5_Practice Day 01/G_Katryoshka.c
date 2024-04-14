//InjamTanvir(INJAM UL HAQUE)

#include<stdio.h>

int main(){
    long long int n, m, k; 
    scanf("%lld %lld %lld", &n, &m, &k);

    // type 3
    long long int katryoshkas_type_3 = n;
    if(m < katryoshkas_type_3){
        katryoshkas_type_3 = m; 
    }
    if(k < katryoshkas_type_3){
        katryoshkas_type_3 = k;
    }

    // remaining resources after making type 3
    //type 1
    long long int remaining_eyes = n - katryoshkas_type_3;
    long long int remaining_bodies = k - katryoshkas_type_3;

    long long int katryoshkas_type1 = remaining_eyes / 2;
    if(remaining_bodies < katryoshkas_type1){
        katryoshkas_type1 = remaining_bodies; 
    }

    long long int total_katryoshkas = katryoshkas_type_3 + katryoshkas_type1;

    printf("%lld\n", total_katryoshkas);
    return 0;
}

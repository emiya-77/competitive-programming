#include <stdio.h>

int main(){
    int n, a, by_two=0, by_three=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        if(a%2 == 0){
            by_two++;
        }else if(a%3 == 0){
            by_three++;
        }
    }
    printf("%d %d\n", by_two, by_three);
    return 0;
}
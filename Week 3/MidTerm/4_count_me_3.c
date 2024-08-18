#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t){
        int cap=0, sm=0, digits=0;
        char s[10000];
        scanf("%s", s);
        for(int i=0; i<strlen(s); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                cap++;
            }else if(s[i] >= 'a' && s[i] <= 'z'){
                sm++;
            }else if(s[i] >= '0' && s[i] <= '9'){
                digits++;
            }
        }
        printf("%d %d %d\n", cap, sm, digits);
        t--;
    }
    return 0;
}
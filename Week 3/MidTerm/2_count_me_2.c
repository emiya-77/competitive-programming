#include <stdio.h>
#include <string.h>

int main(){
    char s[100000];
    int cons=0;

    scanf("%s", s);
    for(int i=0; i<strlen(s); i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
            cons++;
        }
    }
    printf("%d\n", cons);
    return 0;
}
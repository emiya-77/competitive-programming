#include <stdio.h>

int main(){
    int t;
    double m1, m2, d;
    scanf("%d", &t);
    while(t){
        t--;
        scanf("%lf %lf %lf", &m1, &m2, &d);
        double faster = (m1+m2)/m1;
        printf("%0.0lf\n", d-(d/faster));
    }
    return 0;
}
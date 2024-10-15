#include <stdio.h>
#include <math.h>

int main(){

    // int a, b, c;
    // scanf("%d %d %d", &a, &b, &c);
    // printf("%d, %d, %d", a, b, c);

    int k;
    scanf("%d", &k);

    double res_1, res_2;
    double delta;
    int b, c;
    int a = -k;
    while(a <= k){
        b = -k;
        while(b <=k){
            c = -k;
            while(c<=k){
                if(a!=0 && b!=0 && c!=0){
                    delta = sqrt(pow(b, 2)-4*a*c);
                    if ((int)delta == delta){
                        res_1 = (-b + delta)/(2*a);
                        res_2 = (-b - delta)/(2*a);
                        if ((int)res_1 == res_1 && (int)res_2 == res_2){
                            printf("%d %d %d\n", a, b, c);
                        }
                    }
                }
                c++;
            }
            b++;
        }
        a++;
    }

    return 0;
}

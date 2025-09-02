#include <stdio.h>
#include <math.h>

int main() {
    int a = 0, b = 0, c = 0, x , delta = 0;
    
    printf("Entrez A et B et C : ");
    scanf("%d %d %d", &a, &b, &c );
    
    delta = pow(b,2) - 4 * a * c;
    
    if(delta > 0){
        double x1 = (-b  + sqrt(delta)) / 2 * a;
        double x2 = (-b  - sqrt(delta)) / 2 * a;
        printf("car delta > 0 donc il a deux result : %lf %lf", x1,x2);
    }
    else if(delta = 0){
        x = -b / 2 * a;
        printf("x = %d", x);
    }
    else{
        printf("aucan result ");
    }
    

    return 0;
}
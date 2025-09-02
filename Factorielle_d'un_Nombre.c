#include <stdio.h>
#include <math.h>

int main() {
    
    int Nombre = 0, result = 1;
    printf("Entrez le Nombre : ");
    scanf("%d", &Nombre);
    
    for(int i = Nombre; i < 10 ;i--){
        result = result * i;
        if(i == 1){
            break;
        }
    }
    printf("%d", result);
    
    return 0;
}

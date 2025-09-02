#include <stdio.h>
#include <math.h>

int main() {
    
    int Nombre = 0, result = 0;
    printf("Entrez le Nombre : ");
    scanf("%d", &Nombre);
    
    for(int i = 1; i < 11 ;i++){
        result = Nombre * i;
        printf("%d * %d = %d\n", Nombre, i,result);
        result = 0;
    }
    
    
    return 0;
}
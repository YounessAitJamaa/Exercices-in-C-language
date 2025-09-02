#include <stdio.h>
#include <math.h>

int main() {
    int annee = 0, choix = 0, result = 0;
    
    printf("Entrez l'annee : ");
    scanf("%d", &annee);
    
    printf("Menu : \n");
    printf("1-Mois\n");
    printf("2-Jours\n");
    printf("3-Heures\n");
    printf("4-Minutes\n");
    printf("5-Secondes\n");
    scanf("%d", &choix);
    
    
    switch(choix){
        case 1:
            result = annee * 12;
            printf("result : %d", result);
            break;
        case 2:
            result = annee * 365;
            printf("result : %d", result);
            break;
        case 3:
            result = annee * 8760;
            printf("result : %d", result);
            break;
        case 4:
            result = annee * 8760 * 60;
            printf("result : %d", result);
            break;
        case 5:
            result = annee * 31536000;
            printf("result : %d", result);
        default:
            break;
        
    }
    
    
    return 0;
}
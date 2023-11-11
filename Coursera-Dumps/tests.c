#include <stdio.h>

int main(void) {
    
    int noOfIngre, i, j, k;
    double inGredientsPrices[10], inGredientsWeights[10], totalCost = 0.0;
    
    scanf("%d", &noOfIngre);
    if (noOfIngre <= 10) {
        
        for (i = 0; i < noOfIngre; i++) {
            scanf("%lf", &inGredientsPrices[i]);
            
        }
        for (j = 0; j < noOfIngre; j++){
            scanf("%lf", &inGredientsWeights[j]);
            
        }
        
        for (k = 0; k < noOfIngre; k++){
            totalCost = totalCost + (inGredientsPrices[k] * inGredientsWeights[k]);
        }
        printf("%.6lf\n", totalCost);
    }
    
    
    return 0;
}
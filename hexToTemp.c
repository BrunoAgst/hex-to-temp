#include <stdio.h>
#include <stdlib.h>

void formatString(int8_t temp, int8_t uni, int8_t sig);

int main(){
      
      unsigned short int value;
      int8_t temp;
      int8_t uni;
      int8_t sig;

      printf("Insira o valor recebido em ----h: ");
      scanf("%16hx", &value);
      
      temp = value;
      uni = (value >> 8) & 1 ? 1 : 0;
      sig = (value >> 9) & 1 ? 1 : 0;

      formatString(temp, uni, sig);

      return 0;
}

void formatString(int8_t temp, int8_t uni, int8_t sig){
      char tempPosOrNeg = (sig == 1) ? '-' : '\0';
      char tempFahOrCel = (uni == 1) ? 'F' : 'C';

      printf("%c%dº%c", tempPosOrNeg, temp, tempFahOrCel); 
}
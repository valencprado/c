#include <stdio.h>

int main(void) {
    int idade = 0;
    printf("Idade: ");
    scanf("%d", &idade);

    if((idade >= 18) && (idade <=67)) {
        printf("Pode doar sangue");
    } else {
        printf("Nao pode doar sangue");
    }
}
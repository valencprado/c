#include <stdio.h>

int idadeEmDias(int anos, int meses, int dias) {
    int anos_dias = 0;
    anos_dias = anos * 365;
    int meses_dias = meses * 30;
    int dias_total = dias;
    return meses > 12 || dias > 30 ? -1 : anos_dias + meses_dias + dias_total;
}

int main() {
    printf("%d", idadeEmDias(10, 10, 10));
}
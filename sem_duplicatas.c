#include <stdio.h>

int main(void) {
    int ent[6], sai[6];
    int i, j, k = 0;

    for(i = 0; i < 6; i++) {
        for(j = 0; j < k; j++) {
            if(ent[i] == sai[j]) {
                break;
            }
        }
            if(k == j) {
                sai[k] = ent[i];
                k++;
            }
    }

    for( i = 0; i < k; i++) {
        printf("%d ", sai[i]);
    }
}
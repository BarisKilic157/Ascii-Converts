#include <math.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>

int main() {
    char cumle[1000];
    char kelime[200];
    int i, j = 0;

    printf("Bir cümle girin: ");
    gets(cumle);

    printf("Cümledeki kelimeler:\n");

    for (i = 0; i < strlen(cumle); i++) {
        if (cumle[i] != ' ') {
            kelime[j] = cumle[i];
            j++;
        } else {
            kelime[j] = '\0'; 
            if (j > 0) {
                printf("%c", atoi(kelime)); 
                j = 0; 
            }
        }
    }

    kelime[j] = '\0';
    if (j > 0) {
        printf("%c",atoi(kelime));
    }

    return 0;
}


#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

char numArr[100];

int len(char dm[]){
    int length;
    length = strlen(dm);
    return length;
}

int secretMessage(char message[]){
    int i;
    int length = len(message);
    

    for(i = 0; i< length;i++){
        numArr[i] = message[i];
        printf("%d ",numArr[i]);
    }
}

int main(){
    char array[100];
 
         gets(array);
         secretMessage(array);

    return 0;
}
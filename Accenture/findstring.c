/*
1.Find Frist K no of the string
2.Ex:My Name is RupKumar Bera And K=3
output : My Name is
*/

#include <stdio.h>
#include <string.h>

int main() {
    int count = 0;
    char sentence[] = "My Name is RupKumar Bera";
    int len = strlen(sentence);
    int k;
    
    printf("Enter k value: ");
    scanf("%d", &k);

   
    for(int i = 0; i < len; i++) {
        if(sentence[i] == ' ') {
            count++;
        }
       
        if(count < k) {
            printf("%c", sentence[i]);
        } else if (count == k) {
            printf("%c", sentence[i]);
            break;
        }
    }

    printf("\n");
    return 0;
}

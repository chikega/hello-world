/* Gary Chike                                 03/06/2022 */

#include <stdio.h>

int main(void) {
    int i = 0;
    char word1[50];
    char word2[50];

    printf("Please enter a word: ");
    scanf("%s", word1);
    printf("And another: ");
    scanf("%s", word2);
    // Find first letter in which words differ
    while (word1[i]!='\0' && word2[i]!= '\0' && word1[i] == word2[i])
    i++;
    if (word1[i] < word2[i])
        printf("%s come before %s in the alphabet.\n", word1, word2);
    else if (word1[i]> word2[i])
        printf("%s come before %s in the alphabet.\n", word1, word2);
    else printf("You entered the same word, \"%s\", twice.\n", word1);
}

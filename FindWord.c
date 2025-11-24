#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void free_split_array(char **words, int count)
{
    if (words == NULL)
        return;
    for (int i = 0; i < count; i++)
    {
        free(words[i]);
    }
    free(words);
}
void search_word(char *array[20], int length, char word[20])
{
    for (int i = 0; i < length; i++)
    {
        if (strcmp(array[i], word) == 0)
        {
            printf("Hurrh! Find it at index %d .\n", i);
        }
    }
}
int count_word(char sentence[], char separator)
{
    int counter = 0;
    for (int i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i] == separator)
        {
            counter += 1;
        }
    }
    return counter + 1;
}
char **split_str(char sentence[], char separator)
{
    char word[20] = "";
    char **words = (char **)malloc(count_word(sentence, separator) * sizeof(char *));
    for (int i = 0; i < count_word(sentence, separator); i++)
    {
        words[i] = (char *)malloc(20 * sizeof(char));
    }
    int j = 0;
    for (int i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i] != separator)
        {
            int current_len = strlen(word);
            if (current_len < 19)
            {
                word[current_len] = sentence[i];
                word[current_len + 1] = '\0';
            }
            if (i == strlen(sentence) - 1)
            {
                strcpy(words[j], word);
            }
        }
        else
        {
            strcpy(words[j], word);
            strcpy(word, "");
            j++;
        }
    }
    return words;
}

int main()
{
    char sentence[] = "Hi my name is sourasis maity";
    char sepa = ' ';
    printf("Words Count : %d \n", count_word(sentence, sepa));
    char **array = split_str(sentence, sepa);
    char query[20];
    printf("Enter the query : ");
    scanf("%s", query);
    int current_len = strlen(query);
    query[current_len] = '\0';
    search_word(array, count_word(sentence, sepa), query);
    free_split_array(array, count_word(sentence, sepa));
    return 0;
}

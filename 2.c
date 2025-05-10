#include <stdio.h>


int indexOf(char text[], char word[]) 
{
    int i = 0, j = 0;
    
    while (text[i] != '\0') {
        if (text[i] == word[j]) {
            j++;
            if (word[j] == '\0') {
                return i - j + 1; 
            }
        } else 
        {
            i -= j;  
            j = 0;   
        }
        i++;
    }
    
    return -1; 
}

int main() 
{
    char text[] = "the cat sat on the mat";
    char target[] = "cat";
    
    printf("Ищем слово \"%s\" в тексте: \"%s\"\n", target, text);
    
    int position = indexOf(text, target);
    
    if (position != -1) 
    {
        printf("Результат: слово найдено на позиции %d\n", position);
    } else 
    {
        printf("Результат: слово не найдено\n");
    }
    
    return 0;
}

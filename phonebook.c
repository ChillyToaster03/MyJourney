#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    FILE *file = fopen("phonebook.csv", "a");
    if (file == NULL)
    {
        perror("Error Opening File");
        return 1;
    }

    char *name= malloc(100 * sizeof(char));
    char *num= malloc(100 * sizeof(char));
    if (name == NULL || num == NULL)
    {
        perror("Memor Allocation Failed");
        return 1;
    }

    printf("Enter The Name: ");
    scanf("%99s", name);
    printf("Enter The Number: ");
    scanf("%99s", num);

    fprintf(file, "%s, %s\n", name, num);
    fclose(file);
    free(name);
    free(num);
return 0;
}

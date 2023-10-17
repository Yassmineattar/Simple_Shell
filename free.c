#include "shell.h"
void freeing(char **array_2d)
{
    int i;

    if (!array_2d)
        return(NULL);
    for (i = 0; array_2d[i]; i++)
    {
        free(array_2d[i]);
        array_2d = NULL;
    }
    free(array_2d);
    array_2d = NULL;
}
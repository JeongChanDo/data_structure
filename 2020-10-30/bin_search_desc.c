#include <stdio.h>
#include <stdlib.h>

int int_cmpr(const int *a, const int *b)
{
    if (*a < *b)
        return 1;
    else if(*a > *b)
        return -1;
    else
        return 0;
}

int main(void)
{
    int i, nx, ky;
    int *x;
    int *p;
    puts("bin search using bsearch function");
    printf("the num of element : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    printf("insert value in descending order \n");
    printf("x[0] : ");
    scanf("%d", &x[0]);
    for (i = 1; i< nx; i++)
    {
        do {
            printf("x[%d] : ", i);
            scanf("%d", &x[i]);
        }while(x[i] > x[i-1]);
    }
    printf("searching value : ");
    scanf("%d", &ky);
    p = bsearch(&ky, x, nx, sizeof(int), (int(*)(const void *, const void *))int_cmpr );
    if (p == NULL)
        puts("search failed");
    else
        printf("%d is in x[%d] \n", ky, (int)(p - x));
    free(x);
    return 0;
}
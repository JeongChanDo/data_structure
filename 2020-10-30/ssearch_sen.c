#include <stdio.h>
#include <stdlib.h>

int search(int a[], int n, int key)
{
    int i = 0;
    a[n] = key;
    while(1){
        if (a[i] == key)
            break;
        i++;
    }
    return i = n ? -1 : i;
}

int main()
{
    int i, nx, ky, idx;
    int *x;
    puts(" linear search sen");
    printf("the number of elements : ");
    scanf("%d", &nx);
    x = calloc(nx + 1, sizeof(int));
    for (i = 0; i < nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    printf("search value : ");
    scanf("%d", &ky);
    idx = saech(x, nx, ky);
    if(idx==-1)
        puts("search failed");
    else
        printf("%d is in x[%d]\n", ky, idx);
    free(x);
    return 0;
}
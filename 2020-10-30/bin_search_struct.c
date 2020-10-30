#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[10];
    int height;
    int weight;
} Person;

int npcmp(const Person *x, const Person *y)
{
    return strcmp(x->name, y->name);
}

int main(void)
{
    Person x[]={
        {"son", 179, 79},
        {"lee", 172, 64},
        {"john", 165, 51},
        {"kim", 163, 54},
        {"aj", 180, 86},
        {"hee", 172, 79}
    };

    int nx = sizeof(x) / sizeof(x[0]);
    int retry;
    puts("search by names");
    do {
        Person temp, *p;
        printf("name : ");
        scanf("%s", temp.name);
        p = bsearch(&temp, x, nx, sizeof(Person), (int(*)(const void *, const void *))npcmp);
        if (p == NULL)
            puts("search failed");
        else
        {
            puts("search success");
            printf("x[%d] : %s &dcm %dkg\n", (int)(p-x), p->name, p->height, p->weight);
        }
        printf("retry? (1) yes/ (2) no");
        scanf("%d", &retry);
    } while(retry == 1);
    return 0;
}
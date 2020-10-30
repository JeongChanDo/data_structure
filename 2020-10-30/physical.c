#include <stdio.h>
#define VMAX 21

typedef struct {
    char name[20];
    int height;
    double vision;
} PhysCheck;

double avg_height(const PhysCheck dat[], int n)
{
    int i;
    double sum = 0;
    for (i = 0; i < n; i++)
        sum += dat[i].height;
    return sum/n;
}


void dist_vision(const PhysCheck dat[], int n, int dist[])
{
    int i;
    for (i = 0; i < VMAX; i++)
        dist[i] = 0;
    for (i = 0; i < n; i++)
        if(dat[i].vision >= 0.0 &&dat[i].vision <= VMAX/10.0)
            dist[(int)(dat[i].vision * 10)]++;
}

int main(void)
{
    int i;
    PhysCheck x[] ={
        {"박현규", 162, 0.3},
        {"함진아", 173, 2.0},
        {"최윤미", 175, 1.5}
    };
    int nx = sizeof(x) / sizeof(x[0]);
    int vdist[VMAX];

    puts("신검표");
    puts("이름\t\t키\t시력");
    for(i=0; i<nx; i++)
        printf("%s\t%4d%6.1f\n", x[i].name, x[i].height, x[i].vision);
}
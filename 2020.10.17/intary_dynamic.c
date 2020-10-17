#include <stdio.h>
#include <stdlib.h>

//int 배열 동적 생성하기
int main()
{
	int i;
	int *a;
	int na;
	printf("요소 개수 : ");
	scanf("%d", &na);
	a = calloc(na, sizeof(int));

	if (a == NULL)
		puts("메모리 확보에 실패했습니다.");
	else {
		printf("%d개의 정수를 입력하시오. \n", na);
		for(i = 0; i < na; i++){
			printf("a[%d] : ", i);
			scanf("%d", &a[i]);
		}
		printf("입력한 각 요솟값은 다음과 같습니다. \n");
		for (i = 0; i < na; i++)
			printf("a[%d] = %d\n", i, a[i]);
		free(a);
	}
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *x;
	x = calloc(1, sizeof(int));
	if (x == NULL){
		puts("메모리 할당 실패");
	}else {
		*x = 57;
		printf("*x = %d\n", *x);
		free(x);
	}
	return 0;
}
#include <stdio.h>

int main()
{
	int no;
	printf("2자리 정수 입력하시오.\n");
	do{
		printf("수는 : ");
		scanf("%d",&no);
	}while(no < 10 || no > 99);
	printf("변수 no의 값은 %d가 되었습니다. \n", no);

}
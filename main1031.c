#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	while(i<6){
		printf("%d\n", rand() % 45 + 1);//0~44 : 1~45
		i++;
	}
	
	return 0;
}
/*
#include<stdio.h>
int main()
{
	int i = 1;
	while (i<=9)
	{
		printf("%d * %d = %02d\n", 2, i, 2 * i);
		i++;
	}
	return 0;
}
//*/

/*
#include<stdio.h>
int main()
{
	int i = 1;
	while(i <= 10)
	{
		if (i%3==0)
		{
			printf("%d\n", i);
		}
		i++;
	}
	

	return 0;
}
//*/
/*
#include<stdio.h>
int main()
{
	//while(조건문)
	int index=10;//초기값

	//조건문이 true이면 {}실행
	//조건문이 false(0)이면 {}탈출
	while (index > 0)//조건문
	{
		printf("%d\n", index);
		index -= 2;//index = index+2 //증감문
	}//조건문으로 이동
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int i = 1;
	while (1)
	{
		if (i == 10)
		{
			break;
		}

		printf("문자열을 출력합니다. %d\n",i);
		++i;
		
	}
	
	return 0;
}
//*/

/*
#include<stdio.h>
int main()
{
	char data='a';
	//switch(data) : data 의 type과 case 의 오른쪽 type이 일치
	switch (data)//data -- value
	{
	case 'a':
	case 'b':
	}

	

	return 0;
}
//*/
/*
#include<stdio.h>

int main()
{
	int jumsu;
	puts("점수를 입력하세요 ! (0 ~ 100)");
	scanf_s("%d", &jumsu);

	switch (jumsu/10) 
	{
	case 10:
	case 9:
		puts("A학점");
		break;
	case 8:
		puts("B학점");
		break;// {}다음으로 이동
	case 7:
		puts("C학점");
		break;
	case 6:
		puts("D학점");
		break;
	default://case이외 나머지
		puts("F학점");
	}//탈출위치
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int jumsu;
	puts("점수를 입력하세요 ! (0 ~ 100)");
	scanf_s("%d", &jumsu);

	if (jumsu >= 90) 
	{
		puts("A학점");
	}
	else if (jumsu >= 80)
	{
		puts("B학점");
	}
	else if (jumsu >= 70)
	{
		puts("C학점");
	}
	else if (jumsu >= 60)
	{
		puts("D학점");
	}
	else
	{
		puts("F학점");
	}
			


	return 0;
}
//*/

/*
//학점계산 : 0~100
//90점이상이면 A학점
//80점이상90미만 B
//70점이상80미만 C
//60점이상70미만 D
//60미만 F

#include<stdio.h>
int main()
{
	int jumsu;
	puts("점수를 입력하세요 ! (0 ~ 100)");
	scanf_s("%d", &jumsu);

	if (jumsu >= 90)// 90점이상
	{
		puts("A학점입니다.");
	}
	else //A학점 이외 나머지
	{
		if (jumsu >= 80)
		{
			puts("B학점입니다.");
		}
		else//B학점 이외 나머지
		{
			if (jumsu >= 70)
			{
				puts("C학점입니다.");
			}
			else//B학점 이외 나머지
			{
				if (jumsu >= 60)
				{
					puts("D학점입니다.");
				}
				else//B학점 이외 나머지
				{
					puts("F학점입니다.");
				}
			}

		}
	}

	return 0;
}
//*/
/*
//중첩if
#include<stdio.h>
int main()
{
	int n;
	puts("숫자를 입력하세요!");//자동줄바꿈
	scanf_s("%d", &n);



	if (n > 0) 
	{
		printf("양수입니다.");
	}else//양수가 아닌 나머지 조건(음수, 0)
	{
		//printf("0보다 크지 않습니다.\n");
		if (n<0) {
			printf("음수입니다.\n");
		}else{//음수가 아닌 나머지조건 : 0
			printf("0입니다.\n");
		}
	}


	return 0;
}
//*/
/*
#include<stdio.h>
int main()
{
	int n;//로컬변수 local 

	//키보드로부터 입력
	scanf_s("%d", &n);

	// n%2 : 10%2 : 0
	if (n % 2 == 0)//조건이 true일때만 {}내용실행
	{
		printf("%d는(은) 짝수입니다.", n);
	}
	else //조건이 false일때만 else{}내용실행
	{
		printf("%d는(은) 홀수입니다.", n);
	}

	return 0;
}
//*/
/*
#include<stdio.h>
int main()
{
	int n;//로컬변수 local 
	
	//키보드로부터 입력
	scanf_s("%d", &n);

	// n%2 : 10%2 : 0
	if (n % 2 == 0)//조건이 true일때만 {}내용실행
	{
		printf("%d는(은) 짝수입니다.", n);
	}

	if (n % 2 == 1)//조건이 true일때만 {}내용실행
	{
		printf("%d는(은) 홀수입니다.", n);
	}

	return 0;
}
//*/
/*
#include<stdio.h>
int main()
{
	double r;//반지름 저장하기위한 변수
	const double pi = 3.141592;
	printf("반지름 입력 : ");
	scanf_s("%lf", &r);
	printf("\n원의 둘레 : %.2f\n", 2 * pi * r);

	//pi = 3.14;
	printf("원의 넓이 : %.2f\n", pi * r * r);





	return 0;
}
//*/

/*
//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() 
{
	int height;
	//scanf("%d", &height);//height변수의 메모리주소
	scanf_s("%d", &height);
	//출력

	printf("%dm %dcm\n", height/100, height%100);

	return 0;
	//함수의 종료 : 종료하면서 0을 반환하세요.
	//일반적으로 0 정상종료를 의미한다.
}
//*/
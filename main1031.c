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
	//while(���ǹ�)
	int index=10;//�ʱⰪ

	//���ǹ��� true�̸� {}����
	//���ǹ��� false(0)�̸� {}Ż��
	while (index > 0)//���ǹ�
	{
		printf("%d\n", index);
		index -= 2;//index = index+2 //������
	}//���ǹ����� �̵�
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

		printf("���ڿ��� ����մϴ�. %d\n",i);
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
	//switch(data) : data �� type�� case �� ������ type�� ��ġ
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
	puts("������ �Է��ϼ��� ! (0 ~ 100)");
	scanf_s("%d", &jumsu);

	switch (jumsu/10) 
	{
	case 10:
	case 9:
		puts("A����");
		break;
	case 8:
		puts("B����");
		break;// {}�������� �̵�
	case 7:
		puts("C����");
		break;
	case 6:
		puts("D����");
		break;
	default://case�̿� ������
		puts("F����");
	}//Ż����ġ
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int jumsu;
	puts("������ �Է��ϼ��� ! (0 ~ 100)");
	scanf_s("%d", &jumsu);

	if (jumsu >= 90) 
	{
		puts("A����");
	}
	else if (jumsu >= 80)
	{
		puts("B����");
	}
	else if (jumsu >= 70)
	{
		puts("C����");
	}
	else if (jumsu >= 60)
	{
		puts("D����");
	}
	else
	{
		puts("F����");
	}
			


	return 0;
}
//*/

/*
//������� : 0~100
//90���̻��̸� A����
//80���̻�90�̸� B
//70���̻�80�̸� C
//60���̻�70�̸� D
//60�̸� F

#include<stdio.h>
int main()
{
	int jumsu;
	puts("������ �Է��ϼ��� ! (0 ~ 100)");
	scanf_s("%d", &jumsu);

	if (jumsu >= 90)// 90���̻�
	{
		puts("A�����Դϴ�.");
	}
	else //A���� �̿� ������
	{
		if (jumsu >= 80)
		{
			puts("B�����Դϴ�.");
		}
		else//B���� �̿� ������
		{
			if (jumsu >= 70)
			{
				puts("C�����Դϴ�.");
			}
			else//B���� �̿� ������
			{
				if (jumsu >= 60)
				{
					puts("D�����Դϴ�.");
				}
				else//B���� �̿� ������
				{
					puts("F�����Դϴ�.");
				}
			}

		}
	}

	return 0;
}
//*/
/*
//��øif
#include<stdio.h>
int main()
{
	int n;
	puts("���ڸ� �Է��ϼ���!");//�ڵ��ٹٲ�
	scanf_s("%d", &n);



	if (n > 0) 
	{
		printf("����Դϴ�.");
	}else//����� �ƴ� ������ ����(����, 0)
	{
		//printf("0���� ũ�� �ʽ��ϴ�.\n");
		if (n<0) {
			printf("�����Դϴ�.\n");
		}else{//������ �ƴ� ���������� : 0
			printf("0�Դϴ�.\n");
		}
	}


	return 0;
}
//*/
/*
#include<stdio.h>
int main()
{
	int n;//���ú��� local 

	//Ű����κ��� �Է�
	scanf_s("%d", &n);

	// n%2 : 10%2 : 0
	if (n % 2 == 0)//������ true�϶��� {}�������
	{
		printf("%d��(��) ¦���Դϴ�.", n);
	}
	else //������ false�϶��� else{}�������
	{
		printf("%d��(��) Ȧ���Դϴ�.", n);
	}

	return 0;
}
//*/
/*
#include<stdio.h>
int main()
{
	int n;//���ú��� local 
	
	//Ű����κ��� �Է�
	scanf_s("%d", &n);

	// n%2 : 10%2 : 0
	if (n % 2 == 0)//������ true�϶��� {}�������
	{
		printf("%d��(��) ¦���Դϴ�.", n);
	}

	if (n % 2 == 1)//������ true�϶��� {}�������
	{
		printf("%d��(��) Ȧ���Դϴ�.", n);
	}

	return 0;
}
//*/
/*
#include<stdio.h>
int main()
{
	double r;//������ �����ϱ����� ����
	const double pi = 3.141592;
	printf("������ �Է� : ");
	scanf_s("%lf", &r);
	printf("\n���� �ѷ� : %.2f\n", 2 * pi * r);

	//pi = 3.14;
	printf("���� ���� : %.2f\n", pi * r * r);





	return 0;
}
//*/

/*
//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() 
{
	int height;
	//scanf("%d", &height);//height������ �޸��ּ�
	scanf_s("%d", &height);
	//���

	printf("%dm %dcm\n", height/100, height%100);

	return 0;
	//�Լ��� ���� : �����ϸ鼭 0�� ��ȯ�ϼ���.
	//�Ϲ������� 0 �������Ḧ �ǹ��Ѵ�.
}
//*/
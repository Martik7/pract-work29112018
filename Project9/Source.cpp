#include <stdio.h>
#include <iostream>
#include <locale.h>

void task8()
{
	int a;
start:
	printf("������� �����: ");
	scanf_s("%d", &a);
	if (a > 99 || a < 1)
	{
		printf("������� ����� �� 1 �� 99! \n");
		goto start;
	}
	if ((a - (a / 10) * 10) >= 2 && (a - (a / 10) * 10) <= 4)
		printf("%d ������� \n", a);
	else if((a-(a/10)*10) >= 5 && (a-(a/10)*10) <=9)
		printf()



}



void task7()
{
	int Morning, Day, Evening, Night;

	printf("����� ����� � 6 �� 12: ");
	scanf_s("%d", &Morning);

	printf("����� ����� � 12 �� 18: ");
	scanf_s("%d", &Day);

	printf("����� ����� � 18 �� 24: ");
	scanf_s("%d", &Evening);

	printf("����� ����� � 00 �� 6:");
	scanf_s("%d", &Night);

	if (Morning > 6 && Morning < 12)
	{
		printf("����!\n");
	}
	if (Day > 12 && Day < 18)
	{
		printf("����!\n");
	}
	if (Evening > 18 && Evening < 24)
	{
		printf("�����!\n");
	}
	if (Night > 0 && Night < 6)
	{
		printf("����!\n");
	}


}


void task6()
{
	int a, b, c;
	printf("������� ����� a: ");
	scanf_s("%d", &a);

	printf("������� ����� b: ");
	scanf_s("%d", &b);

	printf("������� ����� �: ");
	scanf_s("%d", &c);

	if (a == b || b==c || a==c)
	{
		printf("����� ��������� ����� ������� ���� ������: \n");
	}
	else
	{
		printf("��� ����� �����! \n");
	}


}


void task5()
{
	int season;
start:
	printf("������� ����� �� 1 �� 12: ");
	scanf_s("%d", &season);
	if (season < 1 || season > 12)
	{
		printf("������� ����� ��������: \n");
		goto start;
	}

	switch (season)
	{
	case 12:
	case 1:
	case 2:
		printf("���� \n");
		break;
	case 3:
	case 4:
	case 5:
		printf("����� \n");
		break;
	case 6:
	case 7:
	case 8:
		printf("���� \n");
	case 9:
	case 10:
	case 11:
		printf("����� \n");
		break;
	default:
		break;
	}

}



void task4()
{
	int price=0;
	printf("������� ��������� �������: ");
	scanf_s("%d", &price);
	
	if (price > 500 && price < 1000)
	{
		price = price * 0.95;
		printf("��� ��������������� ������ 5%%. ��������� ��������: %d \n", price);
	}
	else if (price > 1000)
	{
		price = price * 0.9;
		printf("��� ��������������� ������ 10%%. ��������� ��������: %d \n", price);
	}
	else
	{
		printf("�������! ��� ������ ��� ����!\n");
	}
	

}


void task3()
{
	int duration, day, price = 23, total, x;

	//������ ����������������� ��������� 
	printf("������� ����������������� ���������: ");
	scanf_s("%d", &duration);

	printf("������� ���� ������: ");
	scanf_s("%d", &day);

	if (day == 6 || day == 7)
	{
		total = duration * price;
		printf("����� ��� �������: %d \n", total);

		x = (duration*price) / 20;
		total = total - x;
		printf("����� �� �������: %d \n", total);
	}
	else
	{
		total = duration * price;
		printf("�����: %d \n", total);
	}
}





void task2()
{
	int shirota, dolgota;
start:
	printf("������� ������: ");
	scanf_s("%d", &shirota);

	printf("������� �������: ");
	scanf_s("%d", &dolgota);

	if (shirota >= 90 || shirota < -90)
	{
		printf("�� ����� ������������ ������ \n");
		goto start;
	}
	if (dolgota < 180 || dolgota < -180)
	{
		printf("�� ����� ������������ ������� \n");
	}

	if (shirota >= 0 && shirota <= 90)
	{
		printf("�������� ���������: \n");
	}
	else if (shirota >= -90 && shirota < 0)
	{
		printf("����� ���������: \n");
	}
	if (dolgota > 0 && dolgota < -180)
	{
		printf("��������� ���������: \n");
	}
	else if (dolgota > -180 && dolgota < 0)
	{
		printf("�������� ���������: \n");
	}

}

void task1()
{
	int a = 5, b = 7, c,d;
	c = pow(a, 2) - pow(a, b);
	d = abs(c);
		if (c > d)
		{
			printf("�������� ��������� ���� �����: \n");
		}
		else
		{
			printf("������ �������� �������� ���� ����� \n");
		}

}

int main()
{
	setlocale(LC_ALL, "");

	int task;
	int flag;

start:
	printf("������� ����� �������: ");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1:
	{
		task1();
	}break;
	case 2:
	{
		task2();
	}break;
	case 3:
	{
		task3();
	}break;
	case 4:
	{
		task4();
	}break;
	case 5:
	{
		task5();
	}break;
	case 6:
	{
		task6();
	}break;
	case 7:
	{
		task7();
	}break;
	default:
		break;
	}

	printf("������ ���������� 1/0? \n");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;

	system("pause");
}
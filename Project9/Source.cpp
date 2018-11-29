#include <stdio.h>
#include <iostream>
#include <locale.h>

void task8()
{
	int a;
start:
	printf("Введите число: ");
	scanf_s("%d", &a);
	if (a > 99 || a < 1)
	{
		printf("Введите число от 1 до 99! \n");
		goto start;
	}
	if ((a - (a / 10) * 10) >= 2 && (a - (a / 10) * 10) <= 4)
		printf("%d копейки \n", a);
	else if((a-(a/10)*10) >= 5 && (a-(a/10)*10) <=9)
		printf()



}



void task7()
{
	int Morning, Day, Evening, Night;

	printf("Время суток с 6 до 12: ");
	scanf_s("%d", &Morning);

	printf("Время суток с 12 до 18: ");
	scanf_s("%d", &Day);

	printf("Время суток с 18 до 24: ");
	scanf_s("%d", &Evening);

	printf("Время суток с 00 до 6:");
	scanf_s("%d", &Night);

	if (Morning > 6 && Morning < 12)
	{
		printf("Утро!\n");
	}
	if (Day > 12 && Day < 18)
	{
		printf("День!\n");
	}
	if (Evening > 18 && Evening < 24)
	{
		printf("Вечер!\n");
	}
	if (Night > 0 && Night < 6)
	{
		printf("Ночь!\n");
	}


}


void task6()
{
	int a, b, c;
	printf("Введите число a: ");
	scanf_s("%d", &a);

	printf("Введите число b: ");
	scanf_s("%d", &b);

	printf("Введите число с: ");
	scanf_s("%d", &c);

	if (a == b || b==c || a==c)
	{
		printf("Среди введенных чисел имеется пара равных: \n");
	}
	else
	{
		printf("Нет таких чисел! \n");
	}


}


void task5()
{
	int season;
start:
	printf("Введите число от 1 до 12: ");
	scanf_s("%d", &season);
	if (season < 1 || season > 12)
	{
		printf("Введите число повторно: \n");
		goto start;
	}

	switch (season)
	{
	case 12:
	case 1:
	case 2:
		printf("Зима \n");
		break;
	case 3:
	case 4:
	case 5:
		printf("Весна \n");
		break;
	case 6:
	case 7:
	case 8:
		printf("Лето \n");
	case 9:
	case 10:
	case 11:
		printf("Осень \n");
		break;
	default:
		break;
	}

}



void task4()
{
	int price=0;
	printf("Введите стоимость покупок: ");
	scanf_s("%d", &price);
	
	if (price > 500 && price < 1000)
	{
		price = price * 0.95;
		printf("Вам предоставляется скидка 5%%. Стоимость составит: %d \n", price);
	}
	else if (price > 1000)
	{
		price = price * 0.9;
		printf("Вам предоставляется скидка 10%%. Стоимость составит: %d \n", price);
	}
	else
	{
		printf("Бомжара! Нет скидки для тебя!\n");
	}
	

}


void task3()
{
	int duration, day, price = 23, total, x;

	//Ввести продолжительность разговора 
	printf("Введите продолжительность разговора: ");
	scanf_s("%d", &duration);

	printf("Введите день недели: ");
	scanf_s("%d", &day);

	if (day == 6 || day == 7)
	{
		total = duration * price;
		printf("Итого без скидкой: %d \n", total);

		x = (duration*price) / 20;
		total = total - x;
		printf("Итого со скидкой: %d \n", total);
	}
	else
	{
		total = duration * price;
		printf("Итого: %d \n", total);
	}
}





void task2()
{
	int shirota, dolgota;
start:
	printf("Введите широту: ");
	scanf_s("%d", &shirota);

	printf("Введите долготу: ");
	scanf_s("%d", &dolgota);

	if (shirota >= 90 || shirota < -90)
	{
		printf("Вы ввели некорректную широту \n");
		goto start;
	}
	if (dolgota < 180 || dolgota < -180)
	{
		printf("Вы ввели некорректную долготу \n");
	}

	if (shirota >= 0 && shirota <= 90)
	{
		printf("Северное полушарие: \n");
	}
	else if (shirota >= -90 && shirota < 0)
	{
		printf("Южное полушарие: \n");
	}
	if (dolgota > 0 && dolgota < -180)
	{
		printf("Восточное полушарие: \n");
	}
	else if (dolgota > -180 && dolgota < 0)
	{
		printf("Западное полушарие: \n");
	}

}

void task1()
{
	int a = 5, b = 7, c,d;
	c = pow(a, 2) - pow(a, b);
	d = abs(c);
		if (c > d)
		{
			printf("Разность квадратов этих чисел: \n");
		}
		else
		{
			printf("Модуль квадрата разности этих чисел \n");
		}

}

int main()
{
	setlocale(LC_ALL, "");

	int task;
	int flag;

start:
	printf("Введите номер задания: ");
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

	printf("Хотите продолжить 1/0? \n");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;

	system("pause");
}
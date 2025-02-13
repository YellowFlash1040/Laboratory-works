﻿#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdio.h>

int main()
{
	//My own settings
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Code from site
	char name1[9], name2[9], name3[9];
	char sc1, sc2, sc3;
	unsigned short cnt1, cnt2, cnt3;
	unsigned short sq1, sq2, sq3;

	//Variant with user input
	/*printf("1. Введите: наименование, тип, посевная площадь, урожайность > ");
	scanf("%s %c %hu %hu", name1, &sc1, &cnt1, &sq1);
	printf("2. Введите: наименование, тип, посевная площадь, урожайность > ");
	scanf("%s %c %hu %hu", name2, &sc2, &cnt2, &sq2);
	printf("3. Введите: наименование, тип, посевная площадь, урожайность > ");
	scanf("%s %c %hu %hu", name3, &sc3, &cnt3, &sq3);*/

	//Variant without user input
	printf("1. Введите: наименование, тип, посевная площадь, урожайность > Соя Б 13000 45\n");
	strcpy(name1, "Соя"); sc1 = 'Б'; cnt1 = 13000; sq1 = 45;
	printf("2. Введите: наименование, тип, посевная площадь, урожайность > Чумиза З 8000 17\n");
	strcpy(name2, "Чумиза"); sc2 = 'З'; cnt2 = 8000; sq2 = 17;
	printf("3. Введите: наименование, тип, посевная площадь, урожайность > Рис З 25650 24\n");
	strcpy(name3, "Рис"); sc3 = 'З'; cnt3 = 25650; sq3 = 24;

	/////////////////////////////////////////////////////////////////////////////////////////////////////
	printf("\n\n\n");
	printf("------------------------------------------------------\n");
	printf("|              Сельскохозяйственные культуры         |\n");
	printf("|----------------------------------------------------|\n");
	printf("| Наименование | Тип | Посевная площадь |Урожайность |\n");
	printf("|              |     |        (га)      |    (ц/га)  |\n");
	printf("|--------------|-----|------------------|------------|\n");
	printf("| %-12s | %3c | %-16d | %-10d |\n", name1, sc1, cnt1, sq1);
	printf("| %-12s | %3c | %-16d | %-10d |\n", name2, sc2, cnt2, sq2);
	printf("| %-12s | %3c | %-16d | %-10d |\n", name3, sc3, cnt3, sq3);
	printf("|----------------------------------------------------|\n");
	printf("| Примечание: З - зерновые; Б - бобовые;             |\n");
	printf("------------------------------------------------------\n");
	printf("\n\n");
	return 0;
}
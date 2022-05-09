#include <iostream>
#include "Ochered1.h"
#include "Ochered2.h"
#include "Ochered3.h"

int m;
int menu();
Ochered1 l1, l2, l3;
Ochered2 k1, k2, k3;
Ochered3 p1, p2, p3;

int main()
{
	std::cout << "Choose which child class to work with: " << std::endl;
	std::cout << "1. Private" << std::endl;
	std::cout << "2. Public" << std::endl;
	std::cout << "3. Protected" << std::endl;
	std::cin >> m;
	system("pause");
	system("cls");
	menu();
	return 0;
}

int menu(){

	int n;
	int flag;
	std::cout << "\nУкажите размер циклической очереди" << std::endl;
	std::cout << "Menu:" << std::endl;
	std::cout << "1. Add element" << std::endl;
	std::cout << "2. Delete element" << std::endl;
	std::cout << "3. Output queue" << std::endl;
	std::cout << "4. Copy queue " << std::endl;
	std::cout << "5. Output a copy of the queue " << std::endl;
	std::cout << "6. Merging queues " << std::endl;
	std::cout << "7. Output merge queues " << std::endl;
	std::cout << "8. Range between numbers with an odd ordinal number " << std::endl;
	std::cout << "0. End programm" << std::endl;
	do {
		std::cin >> flag;
	} while (flag < 0 || flag>8);
	if (m == 1) {
		switch (flag)
		{
		case 1:
			std::cout << "Enter the item you want to add " << std::endl;
			std::cin >> n;
			k1.add2(n);
			system("pause");
			system("cls");
			menu();
			break;
		case 2:
			k1.del2();
			system("pause");
			system("cls");
			menu();
			break;
		case 3:
			std::cout << "Element Output " << std::endl;
			k1.list2();
			system("pause");
			system("cls");
			menu();
			break;
		case 4:
			k1.Copy2(&k2);
			system("pause");
			system("cls");
			menu();
			break;
		case 5:
			std::cout << "Displaying elements of a copy of the queue" << std::endl;
			k2.list2();
			system("pause");
			system("cls");
			menu();
			break;
		case 6:
			k1.Fusion2(&k2, &k3);
			system("pause");
			system("cls");
			menu();
			break;
		case 7:
			std::cout << "Displaying elements of merged queues" << std::endl;
			k3.list2();
			system("pause");
			system("cls");
			menu();
			break;
		case 8:
			k1.ravn();
			k1.razriv();
			system("pause");
			system("cls");
			menu();
			break;
		case 0:
			break;
		default:
			main();
			break;
		}
	}
	if (m == 2) {
		switch (flag)
		{
		case 1:
			std::cout << "Enter the item you want to add " << std::endl;
			std::cin >> n;
			l1.add(n);
			system("pause");
			system("cls");
			menu();
			break;
		case 2:
			l1.del();
			system("pause");
			system("cls");
			menu();
			break;
		case 3:
			std::cout << "Element Output " << std::endl;
			l1.list();
			system("pause");
			system("cls");
			menu();
			break;
		case 4:
			l1.copy(&l2);
			system("pause");
			system("cls");
			menu();
			break;
		case 5:
			std::cout << "Displaying elements of a copy of the queue" << std::endl;
			l2.list();
			system("pause");
			system("cls");
			menu();
			break;
		case 6:
			l1.fusion(&l2, &l3);
			system("pause");
			system("cls");
			menu();
			break;
		case 7:
			std::cout << "Displaying elements of merged queues" << std::endl;
			l3.list();
			system("pause");
			system("cls");
			menu();
			break;
		case 8:
			l1.ravn();
			l1.razriv();
			system("pause");
			system("cls");
			menu();
			break;
		case 0:
			break;
		default:
			main();
			break;
		}
	}
	if (m == 3) {
		switch (flag)
		{
		case 1:
			std::cout << "Enter the item you want to add " << std::endl;
			std::cin >> n;
			p1.add3(n);
			system("pause");
			system("cls");
			menu();
			break;
		case 2:
			p1.del3();
			system("pause");
			system("cls");
			menu();
			break;
		case 3:
			std::cout << "Element Output " << std::endl;
			p1.list3();
			system("pause");
			system("cls");
			menu();
			break;
		case 4:
			p1.Copy3(&p2);
			system("pause");
			system("cls");
			menu();
			break;
		case 5:
			std::cout << "Displaying elements of a copy of the queue" << std::endl;
			p2.list3();
			system("pause");
			system("cls");
			menu();
			break;
		case 6:
			p1.Fusion3(&p2, &p3);
			system("pause");
			system("cls");
			menu();
			break;
		case 7:
			std::cout << "Displaying elements of merged queues" << std::endl;
			p3.list3();
			system("pause");
			system("cls");
			menu();
			break;
		case 0:
			break;
		case 8:
			p1.ravn();
			p1.razriv();
			system("pause");
			system("cls");
			menu();
			break;
		default:
			main();
			break;
		}
	}
	return 0;
}
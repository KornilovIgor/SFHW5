#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

#include "VendingMachine.h"

int main() {
	setlocale(LC_ALL, "");

	
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(3);
	slot->addSnack(bounty); //��������� �������� � ����
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(2);
	machine->addSlot(slot); // �������� ���� ������� � �������

	cout << "���������� ������ ������ ��� ������: "
		<< machine->getEmptySlotsCount() << endl; // ������ �������� ���������� ������ ������ ��� ������

	cout << "���������� ��������� � ��������: " 
		<< machine->getSnacksCount() << endl;

	machine->giveSnack();

	cout << "���������� ��������� � ��������: "
		<< machine->getSnacksCount() << endl;

	cout << "���������� ������ ������ ��� ������: "
		<< machine->getEmptySlotsCount() << endl;

	machine->giveSnack();

	cout << "���������� ��������� � ��������: "
		<< machine->getSnacksCount() << endl;

	cout << "���������� ������ ������ ��� ������: "
		<< machine->getEmptySlotsCount() << endl;

	delete machine;
	delete slot;
	delete snickers;
	delete bounty;

	_CrtDumpMemoryLeaks();
	return 0;
}
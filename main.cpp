#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

#include "VendingMachine.h"

int main() {
	setlocale(LC_ALL, "");

	/*
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10);
	slot->addSnack(bounty); //��������� �������� � ����
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(5);
	machine->addSlot(slot); // �������� ���� ������� � �������

	cout << machine->getEmptySlotsCount(); // ������ �������� ���������� ������ ������ ��� ������
	
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;*/


	
	int slotCount = 5;

	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");

	SnackSlot* slot1 = new SnackSlot(10);
	SnackSlot* slot2 = new SnackSlot(10);
	SnackSlot* slot3 = new SnackSlot(10);
	SnackSlot* slot4 = new SnackSlot(10);
	SnackSlot* slot5 = new SnackSlot(10);


	slot5->addSnack(bounty);

	slot1->addSnack(snickers);

	slot2->addSnack(bounty);
	slot2->addSnack(bounty);

	slot3->addSnack(snickers);

	VendingMachine* machine = new VendingMachine(slotCount);

	machine->showProducts();

	machine->addSlot(slot1);
	machine->addSlot(slot2);
	machine->addSlot(slot3);
	machine->addSlot(slot4);

	machine->showProducts();
	cout << "������ ������ � ������: " << machine->getEmptySlotsCount() << endl << endl;

	cout << "����� �������� " << (machine->giveSnack(0)).getName()
		<< " �� ����� �" << 0 << '.' << endl << endl;;

	machine->showProducts();
	cout << "������ ������ � ������: " << machine->getEmptySlotsCount() << endl << endl;

	machine->addSlot(slot5);

	machine->showProducts();
	cout << "������ ������ � ������: " << machine->getEmptySlotsCount() << endl << endl;

	delete machine;
	delete slot5;
	delete slot4;
	delete slot3;
	delete slot2;
	delete slot1;
	delete snickers;
	delete bounty;


	_CrtDumpMemoryLeaks();
	return 0;
}
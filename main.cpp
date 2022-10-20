#include "VendingMachine.h"
#include <iostream>
using namespace std;

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

	return 0;
}

/*
V  1. � ������������ ������ �� ������������� ������������ using, 
	�.�.��� ����� �������� � �������� ����.
V  2. ������� ������ ���� ��������� � �������������� const.
V  3. ���� ������ ������ std::string �� ���������� � �������, 
	�� ��� ���������� ���������� �� ����������� ������, ��������, 
	const std::string& name. ����� ������ ����� ����������, 
	� ��� ������������� ��������.
V  4. �� �������� ������ ����� ������������� ����� �������.
V  5. ��� ������������ ����� ������������� ������������ double, 
	�.�.�� �������.
V  6. ��� ������� ������������ / ����������� ������������� 
	������������ �������� ����� default.�.�.,
	������ ~Snack() {}
	����� ������
	~Snack() = default;
*/
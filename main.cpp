#include "VendingMachine.h"
#include "SnackSlot.h"
#include "Snack.h"

const int slotCount = 10;

int main() {
	setlocale(LC_ALL, "");

	Snack* bounty = new Snack("Bounty");
	cout << "������ ������: " << bounty << endl;
	Snack* snickers = new Snack("Snickers");
	cout << "������ �������: " << snickers << endl;
	SnackSlot* slot = new SnackSlot(10/*���������� ����������, ������� ���������� � ����*/);
	slot->addSnack(bounty); //��������� �������� � ����
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(slotCount /*���������� ������ ��� ������*/);
	//machine->addSlot(slot); // �������� ���� ������� � �������


	//cout << machine->getEmptySlotsCount(); // ������ �������� ���������� ������ ������ ��� ������
	//delete machine;
	delete slot;
	delete snickers;
	delete bounty;
}
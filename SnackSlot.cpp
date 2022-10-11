#include "SnackSLot.h"

SnackSlot::SnackSlot(short slotSize)
{
	size = slotSize;
	slot = new Snack[size];
	cout << slot << endl;
}

SnackSlot::~SnackSlot()
{
	delete[] slot;
}

int SnackSlot::addSnack(Snack* snack)
{
	if (snackCount < size)
	{
		slot[snackCount] = *snack;
		cout << "�������� ���� " << snack->getName() << " � ������ #" << snackCount << endl;
		++snackCount;
		return 0;//���� ������� ��������
	}
	else
	{
		return 1;//���� ��������
	}
}

Snack SnackSlot::giveSnack()
{
	if (snackCount > 0)
	{
		snackCount--;
		cout << "������������ ���� " << slot[snackCount].getName() << endl;
		return slot[snackCount];
	}
}


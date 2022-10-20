#include "VendingMachine.h"
#include <iostream>
using namespace std;

VendingMachine::VendingMachine(int size) : _size(size)
{
	slots = new SnackSlot[size];
}

VendingMachine::~VendingMachine()
{
	//delete[] slots; //��� � �� ����� ������ ������ ���� ��� ����������������� :(
}

int VendingMachine::getSize()
{
	return _size;
}

int VendingMachine::getEmptySlotsCount()
{
	_emptySlotsCount = 0;
	for (int i = 0; i < _size; ++i)
	{
		if ((slots[i].isEmpty()) == true)
		{
			++_emptySlotsCount;
		}
	}
	return _emptySlotsCount;
}

void VendingMachine::addSlot(SnackSlot* slot)
{
	if (getEmptySlotsCount() == 0)
	{
		cout << "������ ���������. ���� �� ��������" << endl << endl;
	}
	else
	{
		for (int i = 0; i < _size; ++i)
		{
			if ((slots[i].isEmpty()) == true)
			{ 
				slots[i] = *slot;
				break;
			}
		}
	}
}

Snack VendingMachine::giveSnack(int slotNumber)
{
	return slots[slotNumber].giveSnack();
}

void VendingMachine::showProducts()
{
	cout << "��������� ��������: " << endl;
	snacksCount = 0;
	for (int i = 0; i < _size; ++i)
	{
		cout << "���� �" << i;
		slots[i].slotShow();
		snacksCount += slots[i].getSnackCount();
	}
	cout << "����� ���������� � ��������: " << snacksCount << endl << endl;
}


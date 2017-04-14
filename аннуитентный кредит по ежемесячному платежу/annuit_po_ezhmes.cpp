#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
/*
ezhemes - ����� ������������ �������
stavka - ���������� ������, � ������������� (0,155 = 15,5% / 100%)
summa - ����� ������� (�������� ����)
years - ���� ��������� � �����
kolpr - ����� ���������� ��������� � ������� ����
*/



long long double  Annuitet_po_ezhemes(long long double ezhemes,double stavka, int kolpr, double years)
{
  long long double summa;
  summa = ezhemes * kolpr * ( 1 - 1/( pow(1+stavka/kolpr,years*kolpr) ) );
  return summa;
}

double kstavka(double pr)
/* ������� ���������� ������ � �������������� */
{
  return pr/100;       
}



/*
  ������� �� ����� ��� (�����������) 
*/
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
/*
ezhemes - ����� ������������ �������
stavka - ������� ���������� ������, � ������������� (0,155 = 15,5% / 100%) 
summa - ����� ����� ����� 
months - ���� ��������� � ������� 
*/
long long double Ipoteka_po_ezhemes(long long double ezhemes,double stavka,int months)
{
  long long double summa;
  
  summa = ( ezhemes * (pow(stavka + 1, months) - 1) )/ ( stavka * pow(stavka + 1, months) ) ;
  return summa;
}


double kstavka(double pr)
/* ������� ���������� ������ � �������������� */
{
  return pr/100;       
}


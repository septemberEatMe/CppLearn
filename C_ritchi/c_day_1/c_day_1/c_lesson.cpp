#include <stdio.h>

//������� ����� �� ������� ������
int main()
{	
	int c, nl; 
	nl = 0; // ������ ���������� ��������

	while ((c = getchar())!= EOF) // ���� ���������� � �������� ������ � �� �� ����� EOF - End Of File
		if (c == '\n') { // ���� � ����� ����� ������ (escape ������������������ /n) 
			nl ++; // ���� ����� �������������� ������� 
			printf("%d", nl); // ������� �� �����
		}
}
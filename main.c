#include <stdio.h>
#include <conio.h>
#include <string.h>

//Task 16.1 (���������� ����� ������)-------------------------------------------

int main()
{

SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������

int i = 0, n = 0, k;
int d;
char alf[] = "��������������������������������0123456789";
char buf[10];//������ ��� ����� ���������
char decod[10];//������ ��� ����� ���������

printf("*��������*\n");
printf("\n");

printf("\n������� ����� ��������� ������� ��� �����: ");

scanf("%s",&buf);
printf("\n������� �������� ���� �� 1 �� 10:  ");

scanf("%i",&k);
    for (n = 0; n < 10; n++) {
        for (i = 0; i < 43; i++) {
             if (buf[n] == alf[i]) {
             if (i >= 43)
             buf[n] = alf[i - 43];
             else
             buf[n] = alf[i + k];
             break;
         }
     }
 }
printf("\n��� ����: %s\n", buf);

printf("\n*����������*\n");
printf("\n������� ��� ����: ");
scanf("%s",&decod);
printf("\n������� �������� ���� �� 1 �� 10: ");
scanf("%i",&d);
    for (n = 0; n < 10; n++) {
        for (i = 0; i < 43; i++) {
            if (decod[n] == alf[i]) {
            if (i >= 43)
            decod[n] = alf[i - 43];
            else
            decod[n] = alf[i - d];
            break;
        }
    }
}
printf("\n�����:= ");
puts (decod);
getch();
    return 0;
}

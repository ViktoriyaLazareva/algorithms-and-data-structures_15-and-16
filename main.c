#include <stdio.h>
#include <conio.h>
#include <string.h>

//Task 16.1 (шифрование кодом Цезаря)-------------------------------------------

int main()
{

SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

int i = 0, n = 0, k;
int d;
char alf[] = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя0123456789";
char buf[10];//массив для ввода сообщения
char decod[10];//массив для ввода сообщения

printf("*Шифровка*\n");
printf("\n");

printf("\nВведите слово строчными буквами или цифры: ");

scanf("%s",&buf);
printf("\nВведите цифровой ключ от 1 до 10:  ");

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
printf("\nВаш шифр: %s\n", buf);

printf("\n*Дешифровка*\n");
printf("\nВведите Ваш шифр: ");
scanf("%s",&decod);
printf("\nВведите цифровой ключ от 1 до 10: ");
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
printf("\nСлово:= ");
puts (decod);
getch();
    return 0;
}

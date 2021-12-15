#include <iostream>
#include <string>

using namespace std;
int main()
{
    system("chcp 1251");
    printf("Работу выполнил Жигалин Данил Вадимович\n");

    printf("Ввести x, y:\n");
    float x, y;

    int h = scanf_s("%f%f", &x, &y);

    if (h == 2) {
        if (y >= -2 && y <= 2) {
            if ((x >= 0.5 * y && x <= -0.5 * y) ||
                (x <= 0.5 * y && x >= -0.5 * y)
                )
            {
                printf("Точка принадлежит");
                return 0;
            }
        }

        printf("Точка не принадлежит");
    }
    else {
        printf("Введены неверные данные");
    }

    return 0;
}

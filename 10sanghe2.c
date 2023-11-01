#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int number[] = {111, 222, 333, 444, 555, 666, 777, 888, 999};

    // Tìm kiếm một số trong mảng
    int searchNumber = 555;
    bool found = false;

    for (int i = 0; i < 9; i++)
    {
        if (number[i] == searchNumber)
        {
            printf("Number found! Position: %i value: %i\n", i + 1, number[i]);
            found = true;
            break;  // Khi tìm thấy số, thoát khỏi vòng lặp
        }
    }

    if (!found)
    {
        printf("The number %i was not found in the array.\n", searchNumber);
    }

    return 0;
}

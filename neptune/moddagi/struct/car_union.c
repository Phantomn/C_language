#include <stdio.h>

typedef struct Dashboard {
    int speed;
    char feul;
    float mileage;
    int engineTemp;
    int rpm;
} DASHBOARD;

int main()
{
    DASHBOARD d1;

    d1.speed = 80;
    d1.feul = 'F';
    d1.mileage = 5821.442871;
    d1.engineTemp = 200;
    d1.rpm = 1830;

    printf("Speed: %dkm/h\n", d1.speed);
    printf("Feul: %c\n", d1.feul);
    printf("Mileage: %fkm\n", d1.mileage);
    printf("Engine temp: %d℃\n", d1.engineTemp);
    printf("RPM: %d\n", d1.rpm);

    return 0;
}
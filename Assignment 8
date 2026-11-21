#include <stdio.h>

int main()
{
    int motor1, motor2;
    int *ptr1, *ptr2;
    int temp;

printf("enter speed of motor1:");
scanf("%d", &motor1);
printf("enter speed of motor2:");
scanf("%d", &motor2);

ptr1 = &motor1;
ptr2 = &motor2;

printf("\n before swapping:\n");
printf("motor1 speed = %d\n", motor1);
printf("motor2 speed = %d\n", motor2);

printf("\n memory adresses:\n");
printf("motor1 address = %p\n", (void*)&motor1);
printf("motor2 address = %p\n", (void*)&motor2);

temp = *ptr1;
*ptr1 = *ptr2;
*ptr2 = temp;

printf("\n after swpping:\n");
printf("motor1 speed = %d\n",motor1);
printf("motor2 speed = %d\n",motor2);

printf("\n verification:\n");
printf("motor1 = %d\n", *ptr1);
printf("motor2 = %d\n", *ptr2);

return 0;
}

#include<stdio.h>
main()
{
    int id, age;
    char name[10], city[15], mobile[15];

    printf("Enter ID: ");
    scanf("%d", &id);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter City: ");
    scanf("%s", city);

    printf("Enter Mobile Number: ");
    scanf("%s", mobile);

    printf("\n--- User Details ---\n");
    printf("ID: %d\n", id);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("City: %s\n", city);
    printf("Mobile Number: %s\n", mobile);

    return 0;

}

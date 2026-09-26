#include <stdio.h>
//veriyebal ne goolobal dikler krinakhvani
int a,b;       // am
void getvalue()
{
	 printf("Enter number1: ");
    scanf("%d", &a);

    printf("Enter number2: ");
    scanf("%d", &b);
}

void add()
{


    printf("Enter number1: ");
    scanf("%d", &a);

    printf("Enter number2: ");
    scanf("%d", &b);

    printf("Add = %d\n", a + b);
}

void sub()
{
    

    printf("Enter number1: ");
    scanf("%d", &a);

    printf("Enter number2: ");
    scanf("%d", &b);

    printf("Sub = %d\n", a - b);
}

void mul()
{
    

    printf("Enter number1: ");
    scanf("%d", &a);

    printf("Enter number2: ");
    scanf("%d", &b);

    printf("Mul = %d\n", a * b);
}

void div()
{
    

    printf("Enter number1: ");
    scanf("%d", &a);

    printf("Enter number2: ");
    scanf("%d", &b);

    printf("Div = %d\n", a / b);
}

int main()
{
    int choice ;

    printf("\n1. Add");
    printf("\n2. Sub");
    printf("\n3. Mul");
    printf("\n4. Div");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            add();
            break;

        case 2:
            sub();
            break;

        case 3:
            mul();
            break;

        case 4:
            div();
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

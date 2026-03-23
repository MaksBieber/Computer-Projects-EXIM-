#include <stdio.h>
#include <math.h>

void addition() {
    printf("\nThis is addition function..\n");

    int n;
    printf("How many numbers you want: ");
    scanf("%d", &n);

    int a[n], i;
    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += a[i];
    }

    printf("Total sum is: %d\n", sum);
}

void subtraction() {
    printf("\nThis is subtraction function..\n");

    int n;
    printf("How many numbers you want: ");
    scanf("%d", &n);

    int a[n], i;
    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sub = a[0];
    for (i = 1; i < n; i++) {
        sub -= a[i];
    }

    printf("Total sub is: %d\n", sub);
}

void multiplication() {
    printf("\nThis is multiplication function..\n");

    int n;
    printf("How many numbers you want: ");
    scanf("%d", &n);

    int a[n], i;
    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int mul = 1;
    for (i = 0; i < n; i++) {
        mul *= a[i];
    }

    printf("Total multiplication is: %d\n", mul);
}

void division() {
    printf("\nThis is division function..\n");

    float a, b;
    printf("Enter number of A: ");
    scanf("%f", &a);
    printf("Enter number of B: ");
    scanf("%f", &b);

    if (b == 0) {
        printf("Math error: Division by zero!\n");
    } else {
        float div = a / b;
        printf("Total division is: %.2f\n", div);
    }
}

void modulus() {
    printf("\nThis is modulus function..\n");

    int a, b;
    printf("Enter number of A: ");
    scanf("%d", &a);
    printf("Enter number of B: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Math error: Modulus by zero!\n");
        return;
    } else {
        int mod = a % b;
        printf("Total modulus is: %d\n", mod);
        }
}

void square() {
    printf("\nThis is square function..\n");

    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    int sqr = a * a;
    printf("Total square is: %d\n", sqr);
}

void power() {
    printf("\nThis is power function..\n");

    double a, b;
    printf("Enter number: ");
    scanf("%lf", &a);
    printf("Enter the power number: ");
    scanf("%lf", &b);

    double ans = pow(a, b);
    printf("Total power is: %.2lf\n", ans);
}

int main() {
    while (1) {
        printf("\nWhat do you want:\n");
        printf("1. Addition (array)\n");
        printf("2. Subtraction(array)\n");
        printf("3. Multiplication(array)\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Square\n");
        printf("7. Power\n");
        printf("8. Exit\n");

        int t;
        printf("Enter your option: ");
        scanf("%d", &t);

        switch (t) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                modulus();
                break;
            case 6:
                square();
                break;
            case 7:
                power();
                break;
            case 8:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Enter the right menu....\n");
        }
    }

    return 0;
}

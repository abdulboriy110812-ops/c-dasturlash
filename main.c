#include <stdio.h>

void mashq1(void) {
    const char ISM[] = "Eldorbek";
    int yosh = 14;
    float boy = 1.77;
    double og_irlik = 76.5;
    const char JINS = 'M';
    
    printf("Ism: %s\n", ISM);
    printf("Yosh: %d\n", yosh);
    printf("Boy: %f\n",boy);
    printf("Ogirlik: %lf\n",og_irlik);
    printf("Jins: %c\n\n",JINS);
}

void mashq2(void) {
    int a = 10;
    int b = 3;
    
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d (integer)\n", a / b);
    printf("a %% b = %d (qoldiq)\n", a % b);
    printf("(float) a / b = %.2f\n\n", (float)a / b);
}

void mashq3(void) {
    const double PI = 3.14159;
    double radius = 5.0;
    
    double perimeter = 2 * PI * radius;
    double area = PI * radius * radius;
    
    printf("Radius: %.2f\n", radius);
    printf("Perimeter: %.2f\n", perimeter);
    printf("Area: %.2f\n\n", area);
}

void mashq4(void) {
    int x = 42;
    float y = 3.14;
    double z = 2.71828;
    char c = 'A';
    
    printf("Decimal: %d\n", x);
    printf("Hex: %x\n", x);
    printf("Octal: %o\n", x);
    printf("Float: %f\n", y);
    printf("Float 2 decimal: %.2f\n", y);
    printf("Double: %lf\n", z);
    printf("Scientific: %e\n", z);
    printf("Char: %c\n", c);
    printf("ASCII raqam: %d\n\n", c);
}

void mashq5(void) {
    int a = 7;
    int b = 2;
    
    int int_natija = a / b;
    float float_natija_1 = a / b;            
    float float_natija_2 = (float)a / b;
    float float_natija_3 = a / (float)b;
    
    printf("int / int = %d\n", int_natija);
    printf("float natija 1 (xato): %f\n", float_natija_1);
    printf("float natija 2 (to'g'ri): %f\n", float_natija_2);
    printf("float natija 3 (to'g'ri): %f\n\n", float_natija_3);
    
}

void mashq6(void) {
    double vazn = 70.5;
    double boy = 1.75;
    
    double bmi = vazn / (boy * boy);
    
    printf("Vazn: %.1f kg\n", vazn);
    printf("Bo'y: %.2f m\n", boy);
    printf("BMI: %.2f\n", bmi);
}

void mashq7(void) {
    #include <stdio.h>

int main(void) {
    printf("Hajmlar (byte):\n");
    printf("char: %zu\n", sizeof(char));
    printf("short: %zu\n", sizeof(short));
    printf("int: %zu\n", sizeof(int));
    printf("long: %zu\n", sizeof(long));
    printf("long long: %zu\n", sizeof(long long));
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    printf("long double: %zu\n\n", sizeof(long double));
    
}
}

void mashq8(void) {
    
    int harorat = 5;
    if (harorat > 40){
        printf("\nSoyabon va kepka shart sababi harorat 40 gradusdan baland");
    }else{
        printf("Soyabon va kepka shart emas sababi harorat 40 gradusdan past");
    }
}

int main(void) {
    mashq1();
    mashq2();
    mashq3();
    mashq4();
    mashq5();
    mashq6();
    mashq7();
    mashq8();
    return 0;
}
#include <stdio.h>
#include <string.h>

struct human {
    char name[10];
    int age;
    int weight;
};

int main(){
    struct human *a;
    struct human b;

    strcpy(b.name , "Patipan");

    b.age = 21;
    b.weight = 60;
    a = &b;

    printf("%s\n", (*a).name);
    printf("%d years\n", (*a).age);
    printf("%d kg\n", (*a).weight);

    a->age = 50;

    printf("%d year\n", (*a).age);
    printf("%d year\n", b.age);
    
    return 0;
}

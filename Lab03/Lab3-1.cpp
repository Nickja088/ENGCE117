#include <stdio.h>

struct Patipan  {
    int Age;
    int Height;
    int Weight;
};

int main() {
    struct Patipan body;
    body.Age = 21;
    body.Height = 175;
    body.Weight = 60;
    printf("Patipan Age : %d years\n", body.Age );
    printf("Patipan Height : %d cm\n", body.Height );
    printf("Patipan Weight : %d kg\n", body.Weight );
    return 0;
}

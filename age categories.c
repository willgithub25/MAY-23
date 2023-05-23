#include <stdio.h>

int main() {
    int persons = 20;
    int baby_age_count = 0;
    int school_age_count = 0;
    int adult_age_count = 0;
    int age, i;

    for (i = 0; i < persons; i++) {
        printf("Enter the age of person %d: ", i + 1);
        scanf("%d", &age);

        if (age <= 1) {
            baby_age_count++;
        } else if (age <= 18) {
            school_age_count++;
        } else {
            adult_age_count++;
        }
    }

    printf("\nNumber of persons in each age category:\n");
    printf("Baby Age: %d\n", baby_age_count);
    printf("School Age: %d\n", school_age_count);
    printf("Adult Age: %d\n", adult_age_count);

    return 0;
}


#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do {
        height = get_int("Please enter height: ");
    } while (height < 1 || height > 8);

    for (int i = 0; i < height; i++) {
        
        for (int space_counter = height - i - 1; space_counter > 0; space_counter--) printf("%c", ' ');
        
        for (int j = 0; j < 2 * i + 2; j++) {
            printf("%c", '#');
            if (j == i) {
                printf("  ");
            }
        }
        printf("\n");
    }
}

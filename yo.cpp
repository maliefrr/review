#include <stdio.h>
#include <conio.h>
main()
{
    float tahun, hari;

    printf("Ketik usia anda dalam tahun: ");
    scanf("%f", &tahun);
    hari = tahun*365;
    printf("Usia anda %f hari\n", hari);

    getch();
}

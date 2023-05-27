int main()
{
    // deklarasi variabel
    int matriks[5][5];
    int baris;
    int kolom;

    // pengisian array
    for (baris = 0; baris < 5; baris++)
    {
        for (kolom = 0; kolom < 5; kolom++)
        {
            printf("masukkan angka :\n");
            scanf("%d", &matriks[baris][kolom]);
            printf("\n");
        }
    }

    for (baris = 0; baris < 5; baris++)
    {
        for (kolom = 0; kolom < 5; kolom++)
        {
            printf("%d ", matriks[baris][kolom]);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
#include <cs50.h>

int calculate_500k(int TienThua);
int calculate_200k(int TienThua);
int calculate_100k(int TienThua);
int calculate_50k(int TienThua);
int calculate_20k(int TienThua);
int calculate_10k(int TienThua);
int calculate_5k(int TienThua);
int calculate_2k(int TienThua);
int calculate_1k(int TienThua);

int main(void)
{
    int TienThua;
    do
    {
        TienThua=get_int("Tiền thừa: \n");
    }
    while(TienThua <0);

    int to500k = calculate_500k(TienThua);
    TienThua = TienThua - 500* to500k;
    int to200k = calculate_200k(TienThua);
    TienThua = TienThua - 200 * to200k;
    int to100k = calculate_100k(TienThua);
    TienThua = TienThua - 100 * to100k;
    int to50k = calculate_50k(TienThua);
    TienThua = TienThua - 50* to50k;
    int to20k = calculate_20k(TienThua);
    TienThua = TienThua - 20* to20k;
    int to10k = calculate_10k(TienThua);
    TienThua = TienThua - 10* to10k;
    int to5k = calculate_5k(TienThua);
    TienThua = TienThua - 5* to5k;
    int to2k = calculate_2k(TienThua);
    TienThua = TienThua - 2* to2k;
    int to1k = calculate_1k(TienThua);
    TienThua = TienThua - 1* to1k;

    // Tính tổng số tờ tiền và các loại cần trả
    printf("Tổng số tờ cần trả: %i\n", to500k + to200k + to100k + to50k + to20k + to10k + to5k + to2k + to1k);
    printf("Chi tiết các loại: \n");
    printf("Tờ 500k: %i\n", to500k);
    printf("Tờ 200k: %i\n", to200k);
    printf("Tờ 100k: %i\n", to100k);
    printf("Tờ 50k: %i\n", to50k);
    printf("Tờ 20k: %i\n", to20k);
    printf("Tờ 10k: %i\n", to10k);
    printf("Tờ 5k: %i\n", to5k);
    printf("Tờ 2k: %i\n", to2k);
    printf("Tờ 1k: %i\n", to1k);
}

int calculate_500k(int TienThua)
{
    int to500k=0;
    while(TienThua >=500)
    {
        TienThua=TienThua - 500;
        to500k++;
    }
    return to500k;
}

int calculate_200k(int TienThua)
{
    int to200k=0;
    while(TienThua >=200)
    {
        TienThua=TienThua - 200;
        to200k++;
    }
    return to200k;
}

int calculate_100k(int TienThua)
{
    int to100k=0;
    while(TienThua >=100)
    {
        TienThua=TienThua - 100;
        to100k++;
    }
    return to100k;
}

int calculate_50k(int TienThua)
{
    int to50k=0;
    while(TienThua >=50)
    {
        TienThua=TienThua - 50;
        to50k++;
    }
    return to50k;
}

int calculate_20k(int TienThua)
{
    int to20k=0;
    while(TienThua >=20)
    {
        TienThua=TienThua - 20;
        to20k++;
    }
    return to20k;
}

int calculate_10k(int TienThua)
{
    int to10k=0;
    while(TienThua >=10)
    {
        TienThua=TienThua - 10;
        to10k++;
    }
    return to10k;
}

int calculate_5k(int TienThua)
{
    int to5k=0;
    while(TienThua >=5)
    {
        TienThua=TienThua - 5;
        to5k++;
    }
    return to5k;
}

int calculate_2k(int TienThua)
{
    int to2k=0;
    while(TienThua >=2)
    {
        TienThua=TienThua - 2;
        to2k++;
    }
    return to2k;
}

int calculate_1k(int TienThua)
{
    int to1k=0;
    while(TienThua >=1)
    {
        TienThua=TienThua - 1;
        to1k++;
    }
    return to1k;
}



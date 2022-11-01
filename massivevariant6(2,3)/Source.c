#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define N 100
zadanie2()
{
    double znach;
    float A[N];
    double x = 1;
    double shag = 2. / N;
    double sum = 0;
    int cnt1 = 0, cnt2 = 0;
    while (x <= 3)
    {
        for (int i = 0; i < N; i++)
        {
            znach = pow(x, 3) - 4 * pow(x, 2) + 2;
            if (znach > 0) {
                sum += znach;
                cnt1 += 1;
            }
            else
            {
                cnt2 += 1;
            }
            A[i] = znach;
            printf("a[%d] = %lf\n", i + 1, znach);
            x += shag;
        }
        printf("Кол-во положительных элементов: %d\nКол-во отрицательных элементов: %d\n", cnt1, cnt2);
    }
    if (cnt1 > 0) {
        double sr = sum / (double)cnt1;
        printf("%lf", sr);
    }
    else
    {
        printf("Положительные значения отсутствуют");
    }
}
zadanie3()
{
    int a[15], n, i;
    int sum, cnt;
    printf("Введите размер массива не более 15 элементов, n = ");
    scanf("%d", &n);
    printf("Массив A \n");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    sum = 0;
    cnt = 0;
    int state = 0;
    for (i = 0;i < n;i++) {
        if (a[i] < 0)
            state++;
        if (state == 2)
            break;
        if (a[i] >= 0 && state == 1)
        {
            sum += a[i];
            cnt += 1;
        }
    }
    printf("Среднее значение: %.1f", (float)sum / (float)cnt);
}
void main()
{
    setlocale(LC_ALL, "RU");
    //zadanie2();
    zadanie3();
}
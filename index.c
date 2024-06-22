#include <stdio.h>

int main()
{
    int N;
    int A[200];
    int count = 0;

    int a = scanf("%d", &N);

    for (int i = 0; i < 2 * N; i++)
    {
        a = scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < ((2 * N) - 2); j++)
        {
            if (A[j] == i)
            {
                if (A[j + 2] == A[j])
                {
                    count++;
                }
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}
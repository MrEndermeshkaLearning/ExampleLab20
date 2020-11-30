#include <stdio.h>

double GetSumOfMathMaticalFruction(int doTill, int CurrentStep=0, double sum=0);
int GetRecursevlyFactorial(int n);

int main()
{
    int k;
    printf("MakeFraction till: ");
    scanf_s("%d", &k);
    printf("answer is equal to %lf", GetSumOfMathMaticalFruction(k));
}
int GetRecursevlyFactorial(int n)
{
    if (n == 0 || n == 1) return 1;
    return n * GetRecursevlyFactorial(n - 1);
}
double GetSumOfMathMaticalFruction(int doTill, int CurrentStep, double sum) {
    if (CurrentStep != doTill) {
            sum += 1 / (double)GetRecursevlyFactorial(CurrentStep);
            CurrentStep++;
            return GetSumOfMathMaticalFruction(doTill, CurrentStep, sum);
    }
    else {
        return sum;
    }
}
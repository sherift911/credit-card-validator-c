#include <stdio.h>
int main(void)
{
    long card_number;
    int sum = 0;
    int position = 0;

    printf("Number: ");
    scanf("%li", &card_number);

    long card = card_number;

    while (card > 0)
    {
        int digit = card % 10 ;

        if (position % 2 == 1)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit = (digit / 10) + (digit % 10);
            }
        }
        sum += digit;
        card /= 10;
        position++;
    }

    if (sum % 10 == 0)
    {
        long n = card_number;
        int length = 0;

        while (n > 0)
        {
            n /= 10;
            length++;
        }
        n = card_number;

        while (n >= 100)
        {
            n /= 10;
        }

        int first_two_number_sum = n;
        int first_digit = n / 10;

        
        if ((length == 15) && (first_two_number_sum == 34 || first_two_number_sum == 37))
        {
            printf("AMEX\n");
        }

        else if ((length == 16) && (first_two_number_sum >= 51 && first_two_number_sum <= 55))
        {
            printf("MASTERCARD\n");
        }

        else if ((length == 13 || length == 16) && (first_digit == 4))
        {
            printf("VISA\n");
        }

        else
        {
            printf("INVALID\n");
        } 
    }

    else
    {
        printf("INVALID\n");
    }

    return 0;
}

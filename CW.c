#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int deletesymbolbynumber(char str[], int numberfordelete) //delete symbol by number
{
    int i = numberfordelete;
    for(i; i < strlen(str); i++)
    {
    str[i] = str[i+1];
        if (i == (strlen(str) - 1))
        {
            str[i] ='\0';
            str[strlen(str)] = ' ';
            break;
        }
    }
    puts(str);
}

int deletesymbol(char str[], int symbolfordelete) //delete symbol
{
    int i = 0;
    for(i; i < strlen(str); i++)
    {
        int a = str[i];
        if ( a == symbolfordelete)
        {
            for(int ii=i; ii < strlen(str); ii++)
            {
                str[ii] = str[ii+1];

                if (ii == (strlen(str) - 1))
                {
                    str[ii] ='\0';
                    str[strlen(str)] = ' ';
                    break;
                }
            }
        }
    }
    puts(str);
}

int main()
{
    char str[] = "abcd efrt uihb poujh 123456789 abcd efrt uihb poujh 123456789";
    char polindrom[] = "abcdcba";
    puts(str);
    for (int i = 0; i < strlen(str)-1; i++) //change " " on "\t"
    {
        if(str[i] == ' ')
        {
            str[i] = '\t';
        }
    }
    puts(str);
    int number = 0;
    int Bigletter = 0;
    int Smallletter = 0;
    for (int i = 0; i < strlen(str); i++) //letters, numbers and other
    {
        int c = 0;
        c = str[i];
//      printf("%d\n", c);
        if(c >= 48 && c <= 57)
        {
            number++;
        }
        else if (c >= 65 && c <= 90)
        {
            Bigletter++;
        }
        else if (c >= 97 && c <= 122)
        {
            Smallletter++;
        }
    }
    printf("Numbers: %d, Big letters: %d, Small letters: %d, All symbols: %d\n", number, Bigletter, Smallletter, (int) strlen(str));

    int start = 0;                   //polindrom
    int end = (int) strlen(polindrom)-1;

    for (start; start < end; start++)
    {
        int s = polindrom[start];
        int e = polindrom[end];
        if(s == e)
        {
            end--;
            continue;
        }
        else
        {
            puts("No polindrom");
            break;
        }
    }
    if (start == end)
    {
        puts("Have polindrom"); //end polindrom
    }
    puts("Enter number of symbol for delete"); //delete symbol by number
    int numberfordelete;
    scanf("%d", &numberfordelete);
    deletesymbolbynumber(str,numberfordelete);
    puts("Enter symbol for delete");
    getchar();
    int symbolfordelete = 0;
    symbolfordelete = getchar();                      //delete symbol
    deletesymbol(str, symbolfordelete);

//    system("Pause");
    return 0;
}
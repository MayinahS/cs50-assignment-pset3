#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>


int main(int argc, string argv[])
{
    if (argc !=2)
    {
        printf("Usage: crack <hash>");
        return 1;
    }


    const int password_length = 53;

      string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string hash = argv[1];

    char salt[3];
    memcpy(salt, hash, 2);
    salt[2] ='\0';

    char key_word[5]= "\0\0\0\0\0";

        for (int ms = 0; ms< password_length; ms++)
        {
            for (int  mbs= 0; mbs < password_length; mbs++)
            {
                for (int maiga = 0; maiga < password_length; maiga++)
                {

                    for (int salou = 1; salou < password_length; salou++)
                    {
                        key_word[0] = letters[red]
                        key_word[1] = letters[blue]
                        key_word[2] = letters[yellow]
                        key_word[3] = letters[green]


                        if (strcmp(crypt(key_word, salt), hash) == 0)
                        {
                            printf("%s\n" , key_word);
                            return 0;
                        }
                    }
                }
            }
        }

    printf("Password should not be crack!");


    return 0;
}
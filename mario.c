# include <stdio.h>

int main(void)
{

    for(i=0; i<3;i++)
    {
        printf("#");
    }

}

//think by simple way
for(int i=0; i<3,i++)

{
    for(j=0;j<3;j++)
    {
        printf("#");
    }

    printf("\n");
}
// para evitar que se altere o valor de n no processo de define-se constante
const int n=5;
for(int i=0; i<n,i++)

{
    for(j=0;j<n ;j++)
    {
        printf("#");
    }

    printf("\n");
}
//se quiser introduzir do utilizador
//obrigatorio acrescentar
include <cs50.h>

int main(void)
{
    int n=get_int("Size:");
    for(int i=0; i<n,i++)

{
    for(j=0;j<n ;j++)
    {
        printf("#");
    }

    printf("\n");
}
}

//caso o utilizador use negativo como desfazer-se dessas tentativas


int main(void)
{

    int n=get_int("Size:");
    if (n<1)
    {
        n=get_int("Size:");
        if(n<1)
        n=get_int("Size");
    }
    for(int i=0; i<n,i++)

{
    for(j=0;j<n ;j++)
    {
        printf("#");
    }

    printf("\n");
}
}
// tentando trocando o if por com While
int main(void)
{

    int n=get_int("Size:");
    while(n<1)
    {
        n=get_int("Size:");
    }
    
    for(int i=0; i<n,i++)

    {
        for(j=0;j<n ;j++)
        {   
        printf("#");
        }

    printf("\n");
    }
}

//esta maneira de pensar while e "do while"

int main(void)
{
    //Get size of grid 
    int n;
    do
    {
        n=get_int("Size:");
    }
    while(n<1);
    // Print grid of bricks
    for(int i=0; i<n,i++)

    {
        for(j=0;j<n ;j++)
        {   
        printf("#");
        }

    printf("\n");
    }
}

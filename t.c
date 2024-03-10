#include <stdio.h>
#include <stdlib.h>
void p(int **spl)
{

    spl[0][0] = 6;
    spl[0][1] = 0;
    spl[0][2] = 1;
    spl[1][0] = 5;
    spl[1][1] = 5;
    spl[1][2] = 5;
    //spl[1][0] = 5;
    //printf("a = %d, ai = %d, bi = %d", spl[0][0],spl[0][1],spl[0][2]);

}
void	ft_freespac(int **str)
{
	// int	i;

	// i = 0;
    // if (str == NULL)
    //     return;
    // // while (i < 3)
    // // {
        free(str[0]);
        free(str[1]);
        free(str[2]);
    //     i++;
    // }
        
    free(str);
}
int main()
{
    int **spl;
    int i = 0;

    spl = malloc (sizeof(int*) * 8);
    while (i < 3)
    {
        spl[i++] = malloc(sizeof(int) * 3);
    }
    // spl = malloc (sizeof(int) * 3);
    // *spl = malloc (sizeof(int) * 3);
    int a[] = {4,7,8,1};
    int b[] = {1,4,7,8};
    p(spl);
    printf("%d", spl[1][0]);
    ft_freespac(spl);

    


    
}
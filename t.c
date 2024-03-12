#include <stdio.h>
#include <stdlib.h>



int ft_find_idex_max(t_pushswap *data, int c)
{
    int i;
    int max_idex;

    i = -1;
    if (c == 'a')
    {
        if (data->stack_a_lenght < 2)
            return (0);
        max_idex = ft_find_max(data, 'a');
        while (++i < data->stack_a_lenght)
            if (data->stack_a[i] == max_idex)
                max_idex = i;
    }
    else
    {
        if (data->stack_b_lenght < 2)
            return (0);
        max_idex = ft_find_max(data, 'b');
        while (++i < data->stack_b_lenght)
            if (data->stack_b[i] == max_idex)
                max_idex = i;
    }
    return (max_idex);
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
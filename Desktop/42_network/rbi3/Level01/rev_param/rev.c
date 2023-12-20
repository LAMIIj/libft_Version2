int main(int ac, char   *av[])
{
    int i;

    i = 0;
    if (ac > 1)
    {
        while (av[ac - 1])
        {
            write (1,av[ac][i],1);
        }

    }
}
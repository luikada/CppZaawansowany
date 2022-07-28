#include <iostream>

int unsafe()
{
    A* a = new A;

    if (a->f())
    {
        B* b = new B;

        if (b->f())
        {
            int ret = b->g();
            return ret;
        }
        else
            return a->g();
    }

    return 0;
}
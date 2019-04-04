#include <boost/pool/pool.hpp>
using namespace boost;

int main()
{
    pool<> pl(sizeof(int));
    int *p = (int *)pl.malloc();

    pl.free(p);
    for (int i = 0; i < 100; ++i)
    {
        pl.ordered_malloc(10);
    }
}

#include <cstdio>
#include <cstdlib>

#ifdef BLOCK
#include "new_blocker.hpp"
#endif


int main(void)
{
#ifdef BLOCK
    std::printf("Hello world, blocking\n");
#else
    std::printf("Hello world, non blocking\n");
#endif

    auto val = new int(1);

    return EXIT_SUCCESS;
}
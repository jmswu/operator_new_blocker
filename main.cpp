#include <cstdio>
#include <cstdlib>

#ifdef BLOCK
#include "new_blocker.hpp"
#endif

// void *operator new(std::size_t) = delete;
// void *operator new[](std::size_t) = delete;

int main(void)
{
#ifdef BLOCK
    std::printf("Hello world, blocking\n");
#else
    std::printf("Hello world, non blocking\n");
#endif

    // uncomment to test
    // auto val = new int(1);

    return EXIT_SUCCESS;
}
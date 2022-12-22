#include <cstdio>
#include <cstdlib>

#ifdef BLOCK
#include "new_blocker.hpp"
#endif

// newer compiler can use this instead of blocker
// void *operator new(std::size_t) = delete;
// void *operator new[](std::size_t) = delete;

int main(void)
{
#ifdef BLOCK
    std::printf("Hello world, blocking\n");
#else
    std::printf("Hello world, non blocking\n");
#endif

#ifdef TEST
    auto val = new int(1);
    std::printf("val = %i\n", *val);
#endif

    return EXIT_SUCCESS;
}
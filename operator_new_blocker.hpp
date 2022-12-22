#include <cstdlib>

//
// Declare but not define this. The goal is to overload the new operator
// so when any of our code need to use dynamic memory allcation. this will
// block it from linking.
//
void *operator_new_blocker();

void *operator new(std::size_t)
{
    return operator_new_blocker();
}

void *operator new[](std::size_t)
{
    return operator_new_blocker();
}

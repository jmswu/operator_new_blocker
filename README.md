# operator_new_blocker
Operator new blocker to stop heap allocation

it may need to use with flags -ffunction-sections -fdata-sections -Wl,-gc-sections

on new cpp, we can use void *operator new(std::size_t) = delete;

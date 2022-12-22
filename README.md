# operator_new_blocker
Operator new blocker to stop heap allocation

it may need to use with flags 
```
-ffunction-sections -fdata-sections -Wl,-gc-sections
```

On new compiler, we can use 
```
void *operator new(std::size_t) = delete;
void *operator new[](std::size_t) = delete;
```

Make commands:
```
make BLOCK
make BLOCK_TEST
make NO_BLOCK
make NO_BLOCK_TEST
```


# Credit/reference
[Preventing dynamic allocation, Dan Saks](https://www.embedded.com/preventing-dynamic-allocation/)

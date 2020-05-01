# Array
Usually, an array of characters is called a ‘string’, whereas an array of ints or floats is called simply an array.

## python
list capacity: l=[None] * 1000
### except
```
try:
    pass
except Exception as e:
    pass
```

### contiguous memory
cache
hugepages
cpuid | grep -i tlb
/sys/kernel/mm/hugepages

## cpp
non-standard GNU/Clang initialization: `int a[3] = { [0...2]=12 };`
cpp11 initialize all array elements:
`std::fill(std::begin(a), std::end(a), 5);`

cpp: `int arr[3] = { 10}` // result: 10, 0, 0

Array parameters are always passed as pointers, even when we use square brackets.
```
int f(int ptr[]) //eqv: int f(int* const ptr)
   // size of a pointer is printed which is 8 Bytes
   printf("sizeof(ptr) = %d\n", sizeof(ptr));
```
int f(int (&ptr)[SIZE])

hint: don't use arrays as function arguments, use const pointer instead.
### exception
```
#include<exception>
try {
}
catch (exception& e){ //    catch(...)
    cout<<e.what();
}
```

### array vs pointer
- 64bit system
```
float a[2];
float* b = a;
cout<<sizeof(a); //2 * 4 = 8 Bytes
cout<<sizeof(b); //one pointer of 8 Bytes
```

#### cpp vector:
v[1] // no boundary check -> no exception
v.at(1) // boundary check -> might have exception; performance overhead


## c vs cpp
- int arr[2] = { 10, 20, 30, 40, 50 }; // ok in c, error in cpp
- struct.initializer in c, not in cpp
- OOP
- c is more permissive about type cast
- 
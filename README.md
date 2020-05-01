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

## c vs cpp
int arr[2] = { 10, 20, 30, 40, 50 }; // ok in c, error in cpp

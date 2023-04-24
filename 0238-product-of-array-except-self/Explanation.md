Explanation:

First, we include the vector library to use vector data type in C++.

```
#include <vector>
```

We declare a function called productExceptSelf that takes a vector of integers as input and returns a vector of integers as output.

```
vector<int> productExceptSelf(vector<int>& nums) {
```

We get the size of the input vector and declare three vectors - left, right, and answer. We will use these vectors to store the product of all elements to the left of i, all elements to the right of i, and the final answer array respectively.

```
    int n = nums.size();
    vector<int> left(n), right(n), answer(n);
```

We calculate the left array. The first element of the left array is always 1. For all other elements, we multiply the previous element with the corresponding element of the input vector.

```
    left[0] = 1;
    for (int i = 1; i < n; i++) {
        left[i] = left[i-1] * nums[i-1];
    }
```
We calculate the right array. The last element of the right array is always 1. For all other elements, we multiply the next element with the corresponding element of the input vector.

```
    right[n-1] = 1;
    for (int i = n-2; i >= 0; i--) {
        right[i] = right[i+1] * nums[i+1];
    }
```

We calculate the answer array by multiplying the corresponding elements from the left and right arrays.

```
    for (int i = 0; i < n; i++) {
        answer[i] = left[i] * right[i];
    }
```

We return the answer array.

```
    return answer;
}
```

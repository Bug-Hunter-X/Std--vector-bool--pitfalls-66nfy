# std::vector<bool> Pitfalls

This repository demonstrates a common, yet subtle, issue with using `std::vector<bool>` in C++.  `std::vector<bool>` is often used for memory efficiency, but its specialized implementation can lead to unexpected behavior and makes it difficult to work with.

The problem lies in the fact that `std::vector<bool>` does *not* store `bool` values directly. To save space, it employs a bit-packing strategy. This means that it doesn't guarantee the same interface as `std::vector` for other data types.

The example provided shows how using it with standard `std::vector` operations can lead to unexpected results.

**Solution:** Consider using `std::vector<int8_t>` (or another small integer type) instead, unless memory optimization is absolutely critical. This will lead to better code readability, and the minor increase in memory consumption is usually worth the reduced chance for bugs.
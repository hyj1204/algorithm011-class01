## Greedy:每一步找的都是最优解，从而得到全局最优
Question | Tips
------------ | -------------
455.assign-cookies | sort之后，一个个满足
122.best-time-to-buy-and-sell-stock-ii | 累加所有单调递增的值得到最大利润

## Binary search:1）单调增/减 2）有界 3） index accessible
Template code
```cpp
int left = 0, int right = size() - 1； //确定左右两点
  mid = (left + right)/ 2；
if (arr[mid] < target)
  return result;
else if (arr[mid] < target) //中值小于目标的时候，再看右半边
  left = mid + 1;
else
  right = mid - 1; ////中值大于目标的时候，看左半边
```
Question | Tips
------------ | -------------
74.search a 2D matrix | 把2d想象成一维平铺，然后通过index/cols得到当前元素是在第几行，index % cols得到当前元素在第几列

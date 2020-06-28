通用思考方向 <br>
最基本的情况列举 -> 找重复规律，看能否用recursion  <br>
1.Move Zeroes 
|情景|思考方向  |
|---| ---|
|array 里面的元素位置变换 | 用i定位原数组，用j定位目标数组  |
|in place without making a copy of the array | swap 元素 |

2.2sum & 3sum
|情景|思考方向  |
|---| ---|
|array元素之间有特定关系 | 双指针法:1) sort( O(nlogN)) 2) i,j 定位两端，根据条件向中间移动(while (i <j))| 

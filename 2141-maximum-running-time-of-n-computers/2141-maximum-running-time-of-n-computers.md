Intuition
The maximum possible ans can be sum of all batteries divide by no computers.
The minimum possible ans can 1.
so we found a range for ans from 1 to sum/n and we need maximum time to run computer => BINARY SEARCH

Approach-1
Take low as 0 and high as sum/n.
mid is the maximum time of 1 computer
Now we check how much time each batteries last
n = 2, batteries = [1,4,4]
low =1 , high = 9/2 = 4 , mid =3
time avilable = 1 4 4
time need = 3 3 3
time we get = min(1,3)+min(4,3) + min(4,3) = 1+3+3=7
Now if 1 computer take mid time then n computer take nmid time.
So if time >= midn then there is some time left to run more computer
=> low = mid
else time < mid*n then we dont have time to run every computer mid time => high=mid-1

Complexity
Time complexity:O(NlogN)
Space complexity:O(1)

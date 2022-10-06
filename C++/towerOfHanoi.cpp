// This code is contributed by Abdul Rahman

// Recursive approach

#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int N, char source_rod, char target_rod,
				char auxiliary_rod)
{
    // base case
    // if there is 0 disk then simply we return 0

	if (N == 0) {
		return;
	}

    // we will first move the first and second disk from source_rod to auxiliary_rod with the help of target_rod 
	towerOfHanoi(N - 1, source_rod, auxiliary_rod, target_rod);
    
    // the third disk will be moved to target rod through source_rod directly 

	cout << "Move disk " << N << " from source rod " << source_rod
		<< " to rod " << target_rod << endl;

        // Now we will move back first and second disk from auxiliary rod to target rod with the help of source rod
	towerOfHanoi(N - 1, auxiliary_rod, target_rod, source_rod);
}

// Driver code
int main()
{
	int N = 3;

	// Taken the names of rod A,B,C

	towerOfHanoi(N, 'A', 'C', 'B');
	return 0;
}

/*
Time Complexity: O(2^N)
Since there are two possiblities for every disk means if a disk is on the source rod then it can go either target rod or auxiliary rod.
That's why for N rod it will be:
2 * 2 * 2 * . . . * 2(N times) that is 2^N
Auxiliary Space: O(N), Function call stack space */

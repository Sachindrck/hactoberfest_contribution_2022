/*
    Time complexity: O(3^(N^2))
    Space Complexity: O(N^2)

    where N is the size of array/list ARR.
*/

#include <bits/stdc++.h>
using namespace std;


bool isValidMove(int y, int x, vector < vector < int >> & arr, vector < vector < bool >> & visited) {

    if (x == -1 || x == arr.size() || y == -1 || y == arr.size() || visited[y][x] || arr[y][x] == 0) {
        return false;
    }

    return true;
}

void printPathUtil(vector < vector < int >> & arr, int y, int x, string path, vector < string > & pathList, vector < vector < bool >> & visited) {
    
    // This will check the initial point(i.e. (0, 0)) to start the paths.
    if (x == -1 || x == arr.size() || y == -1 || y == arr.size() || visited[y][x] || arr[y][x] == 0) {
        return;
    }

    // If reach the last cell (n-1, n-1) then store the path and return.
    if (x == arr.size() - 1 and y == arr.size() - 1) {
        pathList.push_back(path);
        return;
    }

    visited[y][x] = true;

    // Try for all the 4 directions (down, left, right, up) 
    // in the given order to get the paths in lexicographical order.

    if (isValidMove(y + 1, x, arr, visited)) {
        path += "D";
        printPathUtil(arr, y + 1, x, path, pathList, visited);
        path.pop_back();
    }

    if (isValidMove(y, x - 1, arr, visited)) {
        path += "L";
        printPathUtil(arr, y, x - 1, path, pathList, visited);
        path.pop_back();
    }

    if (isValidMove(y, x + 1, arr, visited)) {
        path += "R";
        printPathUtil(arr, y, x + 1, path, pathList, visited);
        path.pop_back();
    }

    if (isValidMove(y - 1, x, arr, visited)) {
        path += "U";
        printPathUtil(arr, y - 1, x, path, pathList, visited);
        path.pop_back();
    }

    // Mark the cell as unvisited for other possible paths.
    visited[y][x] = false;

}

vector < string > searchMaze(vector < vector < int >> & arr, int n) {

    // Vector to store the answer.
    vector < string > possiblePaths;
    string path = "";

    vector < vector < bool >> visited(n, vector < bool > (n, false));

    printPathUtil(arr, 0, 0, path, possiblePaths, visited);

    return possiblePaths;
}
/*
question : rat in a maze
*/
#include <iostream>
using namespace std;

int n = 4;

bool isSafe(int maze[][4], int x, int y) {
    if (x < n && y < n && maze[x][y] == 1)
        return true;
    return false;
}

void solveMaze(int maze[][4], int sol[][4], int x, int y) {

    // destination reached
    if (x == n - 1 && y == n - 1) {
        sol[x][y] = 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << sol[i][j] << " ";
            cout << endl;
        }
        return;
    }

    if (isSafe(maze, x, y)) {

        sol[x][y] = 1;

        // move down
        solveMaze(maze, sol, x + 1, y);

        // move right
        solveMaze(maze, sol, x, y + 1);

        // backtrack
        sol[x][y] = 0;
    }
}

int main() {

    int maze[4][4] = {
        {1,0,0,0},
        {1,1,0,1},
        {0,1,0,0},
        {1,1,1,1}
    };

    int sol[4][4] = {0};

    solveMaze(maze, sol, 0, 0);
}                  
   //code from ai i will break it down in next session
  // some part i dont understand but i will figure it out in next session
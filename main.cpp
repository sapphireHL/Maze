#include "Maze.h"

int main() {
	Maze maze(10, 12);
	maze.generateMaze();
	maze.solveMaze();
	return 0;
}
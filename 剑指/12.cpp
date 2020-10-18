#include <iostream>
#include <vector>
#include <string>
using namespace std;
//
//class Solution {
//public:
//	bool exist(vector<vector<char>>& board, string word) {
//		// if(borad==nullptr || word== nullptr)
//		//     return false;
//		int cols = board[0].size();
//		int rows = board.size();
//		int pathlength = 0;
//		bool* visited = new bool[rows*cols];
//		memset(visited, 0, rows*cols);
//		for (int row = 0; row<rows; ++row) {
//			for (int col = 0; col<cols; ++col) {
//				if (hasPathCore(board, rows, cols, row, col, word, pathlength, visited))
//					return true;
//			}
//		}
//		delete[] visited;
//		return false;
//	}
//
//	bool hasPathCore(vector<vector<char>>& board, int rows, int cols, int row, int col, string word, int pathlength, bool* visited) {
//		if (word[pathlength] == '\0')
//			return true;
//		bool hasPath = false;
//		if (col>0 && col<cols && row>0 && row<rows && board[row][col] == word[pathlength] && !visited[row*cols + col]) {
//			++pathlength;
//			visited[row*cols + col] = true;
//
//			hasPath = hasPathCore(board, rows, cols, row + 1, col, word, pathlength, visited) ||
//				hasPathCore(board, rows, cols, row - 1, col, word, pathlength, visited) ||
//				hasPathCore(board, rows, cols, row, col + 1, word, pathlength, visited) ||
//				hasPathCore(board, rows, cols, row, col - 1, word, pathlength, visited);
//
//			if (!hasPath) {
//				--pathlength;
//				visited[row*cols + col] = false;
//			}
//		}
//		return hasPath;
//	}
//};
bool hasPathCore(vector<vector<char>>& board, int rows, int cols, int row, int col, string word, int pathlength, bool* visited);

bool exist(vector<vector<char>>& board, string word) {
	// if(borad==nullptr || word== nullptr)
	//     return false;
	int cols = board[0].size();
	int rows = board.size();
	int pathlength = 0;
	bool* visited = new bool[rows*cols];
	memset(visited, 0, rows*cols);
	for (int row = 0; row<rows; ++row) {
		for (int col = 0; col<cols; ++col) {
			if (hasPathCore(board, rows, cols, row, col, word, pathlength, visited))
				return true;
		}
	}
	delete[] visited;
	return false;
}

bool hasPathCore(vector<vector<char>>& board, int rows, int cols, int row, int col, string word, int pathlength, bool* visited) {
	if (word[pathlength] == '\0')
		return true;
	bool hasPath = false;
	if (col>0 && col<cols && row>0 && row<rows && board[row][col] == word[pathlength] && !visited[row*cols + col]) {
		++pathlength;
		visited[row*cols + col] = true;

		hasPath = hasPathCore(board, rows, cols, row + 1, col, word, pathlength, visited) ||
			hasPathCore(board, rows, cols, row - 1, col, word, pathlength, visited) ||
			hasPathCore(board, rows, cols, row, col + 1, word, pathlength, visited) ||
			hasPathCore(board, rows, cols, row, col - 1, word, pathlength, visited);

		if (!hasPath) {
			--pathlength;
			visited[row*cols + col] = false;
		}
	}
	return hasPath;
}


int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<char>> matrix(n, vector<char>(m, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix[i][j];
		}
	}

	string str;
	cin >> str;

	//Solution A;
	//A.exist(matrix, str);
	exist(matrix, str);

	system("pause");
	return 0;
}
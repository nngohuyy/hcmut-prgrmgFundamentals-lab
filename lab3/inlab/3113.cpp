int** transposeMatrix(int** matrix, int r, int c) {
    // TODO
    if (r == 0 || c == 0) return nullptr;
    else {
        int** transpose = new int*[c];
        for (int i = 0; i < c; i++) {
            transpose[i] = new int[r];
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                transpose[j][i] = matrix[i][j];
            }
        }
        return transpose;
    }
}
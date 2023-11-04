import java.util.Arrays;

public class dfsOnGrid {
    public static void main(String[] args) {
        int [][] grid = {{4,  4,  5,   9},
                         {1,  0, -1,  2},
                         {3,  6,  8,  10}};

        int row = grid.length;
        int col = grid[0].length;
        boolean[][]vis = new boolean[row][col];

        for (int i=0; i<grid.length; i++){
            for (int j=0; j<grid[0].length; j++){
                dfsOnGrid(grid,0,0,vis);
            }
        }

        for (int i=0; i<grid.length; i++){
            for (int j=0; j<grid[0].length; j++){
                System.out.print(grid[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static int[][] dfsOnGrid(int[][]grid, int row, int col, boolean[][]vis){
        vis[row][col] = true;
        int m = grid.length; // row
        int n = grid[0].length; // column

        if(col+1<n && !vis[row][col+1]){
            dfsOnGrid(grid,row,col+1,vis);  // right
        }

        if(row+1<m && !vis[row+1][col]){
            dfsOnGrid(grid,row+1, col, vis);   // down
        }

        if(row-1>=0 && !vis[row-1][col]){
            dfsOnGrid(grid,row-1, col, vis); // up
        }

        if(col-1>=0 && !vis[row][col-1]){
            dfsOnGrid(grid,row,col-1, vis);  // left
        }

        return grid;
    }
}

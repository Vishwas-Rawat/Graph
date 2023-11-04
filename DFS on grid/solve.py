def dfsOnGrid(grid, row, col, vis):
    vis[row][col] = True
    m = len(grid)  # row
    n = len(grid[0])  # column

    if col + 1 < n and not vis[row][col + 1]:
        dfsOnGrid(grid, row, col + 1, vis)  # right

    if row + 1 < m and not vis[row + 1][col]:
        dfsOnGrid(grid, row + 1, col, vis)  # down

    if row - 1 >= 0 and not vis[row - 1][col]:
        dfsOnGrid(grid, row - 1, col, vis)  # up

    if col - 1 >= 0 and not vis[row][col - 1]:
        dfsOnGrid(grid, row, col - 1, vis)  # left

    return grid

grid = [[4, 4, 5, 9],
        [1, 0, -1, 2],
        [3, 6, 8, 10]]

row = len(grid)
col = len(grid[0])
vis = [[False] * col for _ in range(row)]

for i in range(row):
    for j in range(col):
        dfsOnGrid(grid, 0, 0, vis)

for i in range(row):
    for j in range(col):
        print(grid[i][j], end=" ")
    print()

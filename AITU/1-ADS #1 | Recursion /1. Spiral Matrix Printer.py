def print_spiral_matrix(n):
    matrix = [[0] * n for i in range(n)]
    fill_matrix(matrix, 0, 0, 1, 'right')
    for row in matrix:
        print(' '.join([str(num) for num in row]))

def fill_matrix(matrix, i, j, num, direction):
    if num > len(matrix) ** 2:
        return
    matrix[i][j] = num
    if direction == 'right':
        if j < len(matrix)-1 and matrix[i][j+1] == 0:
            fill_matrix(matrix, i, j+1, num+1, 'right')
        else:
            fill_matrix(matrix, i+1, j, num+1, 'down')
    elif direction == 'down':
        if i < len(matrix)-1 and matrix[i+1][j] == 0:
            fill_matrix(matrix, i+1, j, num+1, 'down')
        else:
            fill_matrix(matrix, i, j-1, num+1, 'left')
    elif direction == 'left':
        if j > 0 and matrix[i][j-1] == 0:
            fill_matrix(matrix, i, j-1, num+1, 'left')
        else:
            fill_matrix(matrix, i-1, j, num+1, 'up')
    elif direction == 'up':
        if i > 0 and matrix[i-1][j] == 0:
            fill_matrix(matrix, i-1, j, num+1, 'up')
        else:
            fill_matrix(matrix, i, j+1, num+1, 'right')
n = int(input("Enter NxN matrix value: "))
print_spiral_matrix(n)
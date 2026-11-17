#include <stdio.h>
#include <stdlib.h>

int **creatematrix(int rows, int cols){
    int **matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++)
    {
        /* code */
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    return matrix;
}

void freematrix(int **matrix, int rows){
    for (int i = 0; i < rows; i++)
    {
        /* code */
        free(matrix[i]);

    }
    free(matrix);
}

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
void task936(){
    printf("task 936| enter size matrix i j\n");
    int rows = 0;
    int cols = 0;
    scanf("%d %d", &rows, &cols);
    if (rows <= 0 || cols <= 0)
    {
        /* code */
        printf("uncorrect size \n");
        return;
    }
    int **matrix = creatematrix(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        /* code */
        for (int j = 0; j < cols; j++)
        {
            /* code */
            printf("enter element a %d %d\n", i, j);
            scanf("%d", &matrix[i][j]);
        }
        
    }
    printf("a)   ");
    for (int i = 0; i < rows; i++)
    {
        /* code */
        for (int j = 0; j < cols; j++)
        {
            /* code */
            if (i == j)
            {
                /* code */
                printf("%d  ", matrix[i][j]);
            }
            
        }
        
    }
    printf("\nb)   ");
    for (int i = rows - 1; i >= 0; i--)
    {
        /* code */
        for (int j = cols - 1; j >= 0; j--)
        {
            if (i == j)
            {
                /* code */
                printf("%d  ", matrix[i][j]);
            }
        }
        
    }
    printf("\n");
    freematrix(matrix, rows);
    
    
}
void task950(){
    printf("task 950| enter size\n");
    int size = 0;
    scanf("%d", &size);
    if (size <= 0){
        printf("uncorrect size\n");
        return;
    }
    int **matrix = creatematrix(size, size);
    for (int i = 0; i < size; i++)
    {
        /* code */
        for (int j = 0; j < size; j++)
        {
            /* code */
            printf("enter element a %d %d\n", i, j);
            scanf("%d", &matrix[i][j]);
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        /* code */
        for (size_t j = 0; j < size; j++)
        {
            /* code */
            if (i < j && (i + j) < (size - 1))
            {
                /* code */
                swap(&matrix[i][j], &matrix[size - 1 - i][j]);
            }
            if (i > j && i + j < size - 1) { 
            swap(&matrix[i][j], &matrix[i][size - 1 - j]);
            }
        }
        
    }
    printf("matrix after replacement\n");
    for (int i = 0; i < size; i++)
    {
        /* code */
        for (size_t j = 0; j < size; j++)
        {
            /* code */
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    freematrix(matrix, size);
}
void task976(){
    printf("task 976|\n");
    int n = 10;
    int **matrix = creatematrix(n, n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            if (i > j)
            {
                matrix[i][j] = 0;
            }
            else
            {
                matrix[i][j] = j - i + 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {   
        /* code */
        for (int j = 0; j < n; j++)
        {
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("b)\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                matrix[i][j] = 1;
            }
            else
            {
                matrix[i][j] = 0;
            }
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
    freematrix(matrix, n);
}
void task903(){
    int size = 10;
    int sum = 0;
    printf("task 903|\n");
    int **matrix = creatematrix(size, size);
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        for (size_t j = 0; j < size; j++)
        {
            /* code */
            printf("enter element a %d %d\n", i, j);
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] % 2 == 0)
            {
                /* code */
                sum += matrix[i][j];
            }
            
        }
        
    }
    printf("result: %d\n", sum);
    freematrix(matrix, size);
    
}
void task971_a(int size){
    printf("1)");
    for (size_t i = 0; i < size * 5; i++)
    {
        /* code */
        printf("=");
    }
    printf("\n");
    int **matrix_a = creatematrix(size, size);
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        int z = 1;
        for (size_t j = 0; j < size; j++)
        {
            /* code */
            if (i % 2 == 0)
            {
                /* code */
                matrix_a[i][j] = z + j;
            }
            else{
                matrix_a[i][j] = size - j;
            }
            printf("%5d", matrix_a[i][j]);
        }
        printf("\n");        
    }
    freematrix(matrix_a, size);
}

void task971_b(int size){
    printf("2)");
    for (size_t i = 0; i < size * 5; i++)
    {
        /* code */
        printf("=");
    }
    printf("\n");
    int **matrix = creatematrix(size, size);
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        for (size_t j = 0; j < size; j++)
        {
            /* code */
            if (i + j == size - 1)
            {
                /* code */
                matrix[i][j] = i + 1;
            }
            else matrix[i][j] = 0;

            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    freematrix(matrix, size);    
}
void task971_v(int size){
    printf("3)");
    for (size_t i = 0; i < size * 5; i++)
    {
        /* code */
        printf("=");
    }
    printf("\n");
    int **matrix = creatematrix(size, size);
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        for (size_t j = 0; j < size; j++)
        {
            /* code */
            if (i == j)
            {
                /* code */
                matrix[i][j] = size - i;
            }
            else matrix[i][j] = 0;

            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    freematrix(matrix, size);
}
void task971_4(int size){
    printf("4)");
    for (size_t i = 0; i < size * 5; i++)
    {
        /* code */
        printf("=");
    }
    printf("\n");
    int **matrix = creatematrix(size, size);
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        for (size_t j = 0; j < size; j++)
        {
            /* code */
            if (i == j)
            {
                /* code */
                matrix[i][j] = (i+1)*(i + 2);
            }
            else matrix[i][j] = 0;

            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    freematrix(matrix, size);

}
void task971_5(int size){
    printf("5)");
    for (size_t i = 0; i < size * 5; i++)
    {
        /* code */
        printf("=");
    }
    printf("\n");
    int **matrix = creatematrix(size, size);
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        for (size_t j = 0; j < size; j++)
        {
            /* code */
            if (i == 0 || j == 0 || j == (size - 1) || i == (size - 1))
            {
                /* code */
                matrix[i][j] = 1;
            }
            else matrix[i][j] = 0;

            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    freematrix(matrix, size);
}
void task971_6(int size){
    printf("6)");
    for (size_t i = 0; i < size * 5; i++)
    {
        /* code */
        printf("=");
    }
    printf("\n");
    int **matrix = creatematrix(size, size);
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        for (size_t j = 0; j < size; j++)
        {
            /* code */
            if (i + j > size - 1)
            {
                /* code */
                matrix[i][j] = 0;
            }
            else matrix[i][j] = i + 1;

            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    freematrix(matrix, size);
}
void task971_7(int size){
    printf("7)");
    for (size_t i = 0; i < size * 5; i++)
    {
        /* code */
        printf("=");
    }
    printf("\n");
    int **matrix = creatematrix(size, size);
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        for (size_t j = 0; j < size; j++)
        {
            /* code */
            if ((i > j && i + j < size - 1) || (i < j && i + j > size - 1))
            {
                /* code */
                matrix[i][j] = 0;
            }
            else matrix[i][j] = 1;

            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    freematrix(matrix, size);
}
void task971_8(int size){
    printf("8)");
    for (size_t i = 0; i < size * 5; i++)
    {
        /* code */
        printf("=");
    }
    printf("\n");
    int **matrix = creatematrix(size, size);
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        for (size_t j = 0; j < size; j++)
        {
            /* code */
            if ((i < j && i + j < size - 1) || (i > j && i + j > size - 1))
            {
                /* code */
                matrix[i][j] = 0;
            }
            else matrix[i][j] = 1;

            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    freematrix(matrix, size);
}

void task971(){
    printf("task 971| etner even size  \n");
    int size = 0;
    scanf("%d", &size);
    if (size <= 0 || size % 2 != 0)
    {
        /* code */
        printf("uncorrect size\n");
        return;
    }
    task971_a(size);
    task971_b(size);
    task971_v(size);
    task971_4(size);
    task971_5(size);
    task971_6(size);
    task971_7(size);
    task971_8(size);
}


int main(){
    int choise = 0;
    
    do
    {
        printf("====menu====\n");
        printf("1 - task 936\n");
        printf("2 - task 950\n");
        printf("3 - task 976\n");
        printf("4 - task 903\n");
        printf("5 - task 971\n");
        printf("0 - exit\n");
        printf("your choise: ");
        scanf("%d", &choise);
        switch(choise){
            case 1: task936(); break;
            case 2: task950(); break;
            case 3: task976(); break;
            case 4: task903(); break;
            case 5: task971(); break;
            case 0: printf("exiting..."); break;
            default: printf("unknown task\n"); break;
        }
    }while(choise != 0);
    return 0;
}
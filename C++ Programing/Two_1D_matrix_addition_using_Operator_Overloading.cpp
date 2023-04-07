#include <iostream>
using namespace std;

class Matrix
{
    private:
        int rows, cols;
        int *data;
    public:
        Matrix(int r, int c) 
        {
            rows = r;
            cols = c;
            data = new int[rows * cols];
        }

        Matrix(const Matrix& m) 
        {
            rows = m.rows;
            cols = m.cols;
            data = new int[rows * cols];
            for(int i = 0; i < rows * cols; i++)
            {
                data[i] = m.data[i];
            }
        }

        ~Matrix()
        {
            delete [] data;
        }

        // Operator overloading for matrix addition
        Matrix operator +(const Matrix& m) 
        {
            if(rows != m.rows || cols != m.cols) 
            {
                cout << "Matrix dimensions do not match for addition!" << endl;
                return *this;
            }
            Matrix result(rows, cols);
            for(int i = 0; i < rows * cols; i++) 
            {
                result.data[i] = data[i] + m.data[i];
            }
            return result;
        }

        // Function to read matrix values from user
        void readMatrix() 
        {
            cout << "Enter matrix values:" << endl;
            for(int i = 0; i < rows * cols; i++)
            {
                cin >> data[i];
            }
        }

        // Function to display matrix values
        void displayMatrix() 
        {
            cout << "Matrix values:" << endl;
            for(int i = 0; i < rows; i++)
            {
                for(int j = 0; j < cols; j++) 
                {
                    cout << data[i * cols + j] << " ";
                }
                cout << endl;
            }
        }
};

int main()
{
    int rows, cols;
    cout << "Enter matrix dimensions:" << endl;
    cin >> rows >> cols;

    Matrix matrix1(rows, cols), matrix2(rows, cols);
    matrix1.readMatrix();
    matrix2.readMatrix();

    Matrix result = matrix1 + matrix2;
    result.displayMatrix();

    return 0;
}

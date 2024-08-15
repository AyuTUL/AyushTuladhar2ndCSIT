#include <iostream>
#define M 5
#define N 5
using namespace std;

int a[M][N], b[M][N], s[M][N], p[M][N];
int m1, n1, m2, n2;

void input();
void read(int m[][N], int r, int c);
void sum(int a[][N], int b[][N]);
void prod(int a[][N], int b[][N]);
void show(int m[][N], int r, int c);

void input()
{
    cout << "Enter elements of Matrix A (=" << m1 * n1 << "):\n";
    read(a, m1, n1);
    cout << "Enter elements of Matrix B (=" << m2 * n2 << "):\n";
    read(b, m2, n2);
    cout << "Matrix A:\n";
    show(a, m1, n1);
    cout << "Matrix B:\n";
    show(b, m2, n2);
}

void read(int m[][N], int r, int c)
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> m[i][j];
}

void sum(int a[][N], int b[][N])
{
    for (int i = 0; i < m1; i++)
        for (int j = 0; j < n1; j++)
            s[i][j] = a[i][j] + b[i][j];
}

void prod(int a[][N], int b[][N])
{
    // Initialize the product matrix to zero
    for (int i = 0; i < m1; i++)
        for (int j = 0; j < n2; j++)
            p[i][j] = 0;

    // Matrix multiplication
    for (int i = 0; i < m1; i++)
        for (int j = 0; j < n2; j++)
            for (int k = 0; k < n1; k++)
                p[i][j] += a[i][k] * b[k][j];
}

void show(int m[][N], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << m[i][j] << "\t";
        cout << endl;
    }
}

int main()
{
    int ch;
    char c;
    do
    {
        cout << "Enter order of matrix A: ";
        cin >> m1 >> n1;
        cout << "Enter order of matrix B: ";
        cin >> m2 >> n2;
        cout << "1. Addition\n2. Multiplication\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
                if (m1 != m2 || n1 != n2)
                {
                    cout << "Matrix addition is undefined.\n";
                    break;
                }
                input();
                sum(a, b);
                cout << "Matrix A + Matrix B:\n";
                show(s, m1, n1);
                break;

            case 2:
                if (n1 != m2)
                {
                    cout << "Matrix multiplication is undefined.\n";
                    break;
                }
                input();
                prod(a, b);
                cout << "Matrix A x Matrix B:\n";
                show(p, m1, n2);
                break;

            default:
                cout << "Invalid choice.\n";
                break;
        }

        cout << "Do you want to continue? (Y/N): ";
        cin >> c;
    } while (c == 'y' || c == 'Y');

    return 0;
}

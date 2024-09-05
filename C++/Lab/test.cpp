#include <iostream>
#define N 5
using namespace std;

template<class T>
class Stack
{
    private:
        T stk[N];
        int top;
        bool fullFlag, emptyFlag;
    
    public:
        Stack() : top(-1), emptyFlag(true), fullFlag(false) {}
        
        void push(T item)
        {
            if (top == N - 1)
            {
                fullFlag = true;
                cout << "Stack is full. Cannot push " << item << "." << endl;
                return;
            }
            stk[++top] = item;
            cout << item << " has been pushed." << endl;
            emptyFlag = false;
            if (top == N - 1)
            {
                fullFlag = true;
            }
        }
        
        T pop()
        {
            if (top == -1)
            {
                cout << "Stack is empty. Cannot pop." << endl;
                emptyFlag = true;
                return T(); // Return default-constructed object
            }
            T temp = stk[top];
            stk[top--] = T(); // Clear the value
            if (top == -1)
            {
                emptyFlag = true;
            }
            fullFlag = false;
            return temp;
        }
        
        void print()
        {
            cout << endl << "Stack:" << endl;
            for (int i = top; i >= 0; i--)
                cout << stk[i] << endl;
        }
        
        bool pushConfirm()
        {
            if (isFull())
            {
                cout << endl << "Stack is full." << endl;
                return false;
            }
            char c;
            cout << "Do you want to push an item (Y/N)? : ";
            cin >> c;
            return (c == 'Y' || c == 'y');
        }
        
        bool popConfirm()
        {
            if (isEmpty())
            {
                cout << endl << "Stack is empty." << endl;
                return false;
            }
            char c;
            cout << "Do you want to pop an item (Y/N)? : ";
            cin >> c;
            return (c == 'Y' || c == 'y');
        }
        
        bool isFull()
        {
            return fullFlag;
        }
        
        bool isEmpty()
        {
            return emptyFlag;
        }
};

int main()
{
    int i, ch;
    cout << "1. Integer\n2. Double\n3. Character\nChoose stack type: ";
    cin >> ch;
    
    switch(ch)
    {
        case 1:
            {
                int a[N];
                Stack<int> s1;
                cout << "Enter " << N << " integers: ";
                for (i = 0; i < N; i++)
                {
                    cin >> a[i];
                }
                i = -1;
                while (s1.pushConfirm())
                {
                    s1.push(a[++i]);
                }
                s1.print();
                while (s1.popConfirm())
                {
                    cout << "Popped item = " << s1.pop() << endl;
                }
                if (!s1.isEmpty())
                    s1.print();
                break;
            }
        case 2:
            {
                double b[N];
                Stack<double> s2;
                cout << "Enter " << N << " real numbers: ";
                for (i = 0; i < N; i++)
                {
                    cin >> b[i];
                }
                i = -1;
                while (s2.pushConfirm())
                {
                    s2.push(b[++i]);
                }
                s2.print();
                while (s2.popConfirm())
                {
                    cout << "Popped item = " << s2.pop() << endl;
                }
                if (!s2.isEmpty())
                    s2.print();
                break;
            }
        case 3:
            {
                char c[N];
                Stack<char> s3;
                cout << "Enter " << N << " characters: ";
                for (i = 0; i < N; i++)
                {
                    cin >> c[i];
                }
                i = -1;
                while (s3.pushConfirm())
                {
                    s3.push(c[++i]);
                }
                s3.print();
                while (s3.popConfirm())
                {
                    cout << "Popped item = " << s3.pop() << endl;
                }
                if (!s3.isEmpty())
                    s3.print();
                break;
            }
        default:
            cout << "Invalid choice. Please choose from 1-3." << endl;
    }
    
    return 0;
}


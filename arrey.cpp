#include <iostream>
using namespace std;

class ArrayHandler 
{
protected:
	
    int *arr;
    int size;
    
public:
	
    ArrayHandler(int n) : size(n) 
	{
        arr = new int[size];
    }
    
    virtual ~ArrayHandler() 
	{
        delete[] arr;
    }
    
    virtual void read() = 0;
    virtual void display() = 0;
};

class DataProcessor : public ArrayHandler 
{
private:
	
    int dataCount;
    
public:
	
    DataProcessor(int n) : ArrayHandler(n), dataCount(0) {}

    void read() override 
	{
        cout << "\nEnter number of elements: ";
        cin >> dataCount;
        if (dataCount > size) 
		{
            cout << "\nError: Data count exceeds array size!";
            return;
        }
        
        for (int i = 0; i < dataCount; i++) 
		{
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    void display() override 
	{
        cout << "\nStored elements:\n";
        for (int i = 0; i < dataCount; i++) 
		{
            cout << arr[i] << " ";
        }
        
        cout << endl;
    }
};

int main() 
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    DataProcessor processor(n);

    char choice;
    while (true) 
	{
        cout << "\nEnter 1 to input data, 2 to display data, or anything else to exit: ";
        cin >> choice;

        if (choice == '1') 
		{
            processor.read();
        }
		 
		else if (choice == '2') 
		{
            processor.display();
        }
		 
		else 
		{
            break;
        }
    }

    return 0;
}

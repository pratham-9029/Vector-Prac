#include<iostream>
#include<vector>
using namespace std;

class Demo{
public:
    vector<int> v1;

    void addElement(int element)
    {
        v1.push_back(element);
    }
    void updateElement(int index,int element)
    {
        v1[index] = element;
    }
    void deleteElement(int index)
    {
        v1.erase(v1.begin() + index);
    }
    void clearElement()
    {
        v1.clear();
        cout<<"Vector is Cleared";
    }
    void viewElement()
    {
        cout << "Vector is: ";
        for (int i = 0; i < v1.size(); i++) {
            cout << v1.at(i) << " ";
        }
    }
};

int main()
{
    Demo d;
    int ch,size,element,index;
    
    cout<<"Enter size of Vector : ";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter v1["<<i<<"] : ";
        cin>>element;
        d.addElement(element);
    }

    do
    {
        cout<<"1. Add element."<<endl<< "2. Update Element."<<endl<<"3.view Element"<<endl<< "4. Delete element."<<endl<< "5. Clear Vector."<<endl<< "0. EXIT !"<<endl;
        cout<<"Enter Your Choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            cout<<"Enter Element : ";
            cin>>element;
            d.addElement(element);
            break;
        case 2:
            cout<<"Enter index no. : ";
            cin>>index;
            cout<<"Enter Update Element : ";
            cin>>element;
            d.updateElement(index,element);
            break;
        case 3:
            d.viewElement();
            break;
        case 4:
            cout<<"Enter Index For an Element : ";
            cin>>index;
            d.deleteElement(index);
            break;
        case 5:
            d.clearElement();
            break;
        case 0:
        
            break;
        default:
            break;
        }
    } while (ch!=0);
    
    return 0;
}
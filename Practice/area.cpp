#include <iostream>
using namespace std;
#define pi 3.14

void circle()
{
    float radius, area;
    cout<<"Enter the radius: ";
    cin>>radius;
    area = (pi)*(radius*radius);
    cout<<"The area of circle is: "<<area<<endl;
}

void square()
{
    float side, area;
    cout<<"Enter the side: ";
    cin>>side;
    area = side*side;
    cout<<"The area of square is: "<<area<<endl;
}

void rectangle()
{
    float length, breadth, area;
    cout<<"Enter length and breadth: ";
    cin>>length>>breadth;
    area = length*breadth;
    cout<<"The area of rectangle is: "<<area<<endl;
}

int main()
{
    int ch;
    while(1)
    {
        cout<<"\nEnter the choice to find area of the following: "<<endl;
        cout<<"\n1: Circle\n2: Square\n3: Rectangle\n0: EXIT"<<endl;
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            {
                circle();
                break;
            }    
            case 2:
            {
                square();
                break;  
            }
            case 3:
            {
                rectangle();
                break;
            }
            case 0:
            {
                exit(0);
                break;
            }
            default:
            {
                printf("\nInvalid Choice!\n");
            }
        }
    }
    return 0;
}
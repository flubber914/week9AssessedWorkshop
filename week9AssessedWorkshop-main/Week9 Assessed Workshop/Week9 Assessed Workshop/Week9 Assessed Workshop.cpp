// Week9 Assessed Workshop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include "Frisian.h"
#include "Sheep.h"

int main()
{
    vector<Animal*> container;
    cout << "How many animals would you like on your farm?" << endl;
    int numberOfObjects;
    try 
    {
        string answer;
        cin >> answer;
        numberOfObjects = stoi(answer);
        cout << "Creating " << numberOfObjects << " animals." << endl;
    }
    catch (exception)
    {
        cout << "That's not an integer !" << endl;
        return 0;
    }
    try
    {
        for (int i = 0; i < numberOfObjects; i++)
        {
            Animal* newAnimal;
            int random = rand() % 3;
            switch (rand() % 3)
            {
            case 0:
            {
                Sheep *sheep = new Sheep();
                newAnimal = sheep;
            }
            break;
            case 1:
            {
                Cow *cow = new Cow();
                newAnimal = cow;
            }
            break;
            case 2:
            {
                Frisian *frisian = new Frisian();
                newAnimal = frisian;
            }
            break;
            default:
                cout << "this" << endl;
                newAnimal = new Animal();
                break;
            }
            container.push_back(newAnimal);
        }
    }
    catch(exception)
    {
        cout << "animal creation loop failed" << endl;
        return 0;
    }
    try
    {
        for (int a = 0; a < container.size(); a++)
        {
            container[a]->speak();
        }
    }
    catch (exception) 
    {
        cout << "animal speak loop failed" << endl;
        return 0;
    }

}
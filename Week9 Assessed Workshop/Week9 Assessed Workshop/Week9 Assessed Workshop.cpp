// Week9 Assessed Workshop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include "FrisianClassDefinition.h"
#include "SheepClassDefinition.h"

int main()
{
    vector<Animal> container;
    cout << "How many animals would you like on your farm?" << endl;
    int numberOfObjects;
    try 
    {
        string answer;
        cin >> answer;
        numberOfObjects = stoi(answer);
        cout << "Creating " << numberOfObjects << " animals." << endl;
        for (int i = 0; i < numberOfObjects; i++)
        {
            Animal *newAnimal;
            int random = rand() % 3;
            cout << random << endl;
            switch (rand() % 3)
            {
            case 0:
            {
                Sheep sheep;
                newAnimal = &sheep;
            }
                break;
            case 1:
            {
                Cow cow;
                newAnimal = &cow;
            }
                break;
            case 2:
            {
                Frisian frisian;
                newAnimal = &frisian;
            }
                break;
            default:
                newAnimal = new Animal();
                break;
            }
            container.push_back(*newAnimal);
        }
        for (int a = 0; a < container.size(); a++)
        {
            container[a].speak();
        }
    }
    catch (exception)
    {
        cout << "That's not an integer !" << endl;
    }

}
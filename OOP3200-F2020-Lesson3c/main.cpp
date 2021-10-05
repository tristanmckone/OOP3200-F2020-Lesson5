// Tristan Mckone ICE 4
// 2021-10-05
// OOP -2


#include <iomanip>
#include <iostream>

#include "GameObject.h"
#include "Vector2D.h"
#include <vector>

static void BuildGameObjects(std::vector<GameObject*>& game_objects, const int num = 2)
{
	for (auto count = 0; count < num; ++count)
	{
		int id;
		std::cout << "Enter the gameObject's ID: ";
		std::cin >> id;
		Vector2D point;
		std::cout << "Enter the gameObject's Position (x, y): ";
		std::cin >> point;
		std::cout << "\n--------------------------------------------------------------" << std::endl;
		std::cout << "You Entered " << id << " for the gameObject's ID " << std::endl;
		std::cout << "You Entered " << point << " for the gameObject's Position" << std::endl;
		std::cout << "--------------------------------------------------------------\n" << std::endl;
		auto* gameObject = new GameObject(id, point);
		game_objects.push_back(gameObject);
	}
	
}

int main()
{
	std::vector<GameObject*> gameObjects;
	int num_of_GO;
	std::cout << "How many game objects do you want ";
	std::cin >> num_of_GO;

	BuildGameObjects(gameObjects, num_of_GO);



	

	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Magnitude of first gameobject is: " << gameObjects[0]->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Magnitude of second gameobject is: " << gameObjects[1]->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Distance between first game object and second game object is: " << Vector2D::Distance(gameObjects[0]->GetPosition(), gameObjects[1]->GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "The angle (in degrees) from the first game object to the second game object is: " << Vector2D::SignedAngle(gameObjects[0]->GetPosition(), gameObjects[1]->GetPosition()) << std::endl;

	std::cout << "First Game Object Details:" << std::endl;
	std::cout << gameObjects[0]->ToString() << std::endl;

	std::cout << "Seconds Game Object Details:" << std::endl;
	std::cout << gameObjects[1]->ToString() << std::endl;
	
}


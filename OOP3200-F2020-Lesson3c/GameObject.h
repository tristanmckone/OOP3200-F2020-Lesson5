#pragma once
#ifndef __GAME_OBJECT__
#define __GAME_OBJECT__
#include "Vector2D.h"

class GameObject
{
public:
	// Constructors
	GameObject();
	GameObject(float x, float y);
	GameObject(Vector2D position);

	// Rule of Three
	~GameObject();
	GameObject(const GameObject& other_object); // Copy constructor
	GameObject& operator=(const GameObject& other_object); // Assignment operator

	// Accessors
	Vector2D GetPosition();

	// Mutators
	void SetPosition(float x, float y);
	void SetPosition(Vector2D new_position);




private:
	Vector2D m_position;
};

#endif// defined GAME_OBJECT__

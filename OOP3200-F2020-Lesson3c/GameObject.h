#pragma once
#ifndef __GAME_OBJECT__
#define __GAME_OBJECT__
#include "Vector2D.h"

class GameObject
{
public:
	// COnstructors
	GameObject();
	GameObject(float x, float y);
	GameObject(Vector2D position);

	// Rule of Three
	~GameObject();
	GameObject(const GameObject& other_object); // Copy constructor
	GameObject& operator=(const GameObject& other_object); // Assignment operator




private:
	Vector2D m_position;
};

#endif// defined GAME_OBJECT__

#include "GameObject.h"

GameObject::GameObject(): m_position((Vector2D()))
{
}

GameObject::GameObject(const float x, const float y)
{
	SetPosition(x, y);
}

GameObject::GameObject(Vector2D position)
{
	SetPosition(position);
}

GameObject::~GameObject()
= default;


GameObject::GameObject(const GameObject& other_object)
{
	SetPosition(other_object.m_position);
}

GameObject& GameObject::operator=(const GameObject& other_object)
{
	SetPosition(other_object.m_position);
		return (*this);
}

Vector2D GameObject::GetPosition()
{
	return m_position;
}

void GameObject::SetPosition(float x, float y)
{
	m_position.Set(x, y);
}

void GameObject::SetPosition(Vector2D new_position)
{
	m_position = new_position;
}

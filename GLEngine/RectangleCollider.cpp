#include "RectangleCollider.hpp"

RectangleCollider::RectangleCollider(GameObject* gameObject)
	: Component(gameObject), m_collision(gameObject)
{

}

void RectangleCollider::Start()
{
	
}

void RectangleCollider::Update()
{
	m_size = mp_gameObject->GetSize();
	m_position = mp_gameObject->GetPosition();
}

GLboolean RectangleCollider::CollidingWith(std::shared_ptr<RectangleCollider>& other)
{
	bool xCollision = (m_position.x + m_size.x) >= other->m_position.x &&
					   (other->m_position.x + other->m_size.x) >= m_position.x;
	bool yCollision = (m_position.y + m_size.y) >= other->m_position.y &&
					   (other->m_position.y + other->m_size.y) >= m_position.y;

	return xCollision && yCollision;
}
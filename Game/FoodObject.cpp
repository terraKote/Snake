#include "FoodObject.h"

const Vectormath::Vector2 FoodObject::GetPosition()
{
	return _position;
}

void FoodObject::MoveRandomly()
{
	int cellCountHorizontal = RENDER_WIDTH / UNIT_SIZE;
	int cellCountVertical = RENDER_HEIGHT / UNIT_SIZE;

	_position = { static_cast<float>(std::rand() % cellCountHorizontal * UNIT_SIZE), static_cast<float>(std::rand() % cellCountVertical * UNIT_SIZE) };
}

void FoodObject::Update(double deltaTime)
{
}

void FoodObject::Draw(double detltaTime)
{
	_spriteManager->SetSpritePosition(&_spriteData, _position.getX(), _position.getY());
}
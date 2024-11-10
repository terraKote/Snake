#pragma once
#include <vectormath.hpp>

#include "Constants.h"
#include "ObjectManager.h"
#include "SpriteManager.h"

class FoodObject : public Object
{
private:
	SpriteManager* _spriteManager;
	SpriteData _spriteData;
	Vectormath::Vector2 _position;

public:
	FoodObject(int id, std::string name) : Object(id, name)
	{
		_spriteManager = Singleton<SpriteManager>::GetInstance();
		_spriteData = _spriteManager->GetSpriteData();
		_position = { 6 * UNIT_SIZE, 6 * UNIT_SIZE };

		_spriteManager->SetSpriteset(&_spriteData, "snake");
		_spriteManager->SetSpriteDataImage(&_spriteData, 5);
	}

	const Vectormath::Vector2 GetPosition();
	void MoveRandomly();

	void Update(double deltaTime) override;
	void Draw(double detltaTime) override;
};

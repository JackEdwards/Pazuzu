#ifndef SPRITECOMPONENT_HPP
#define SPRITECOMPONENT_HPP

#include <GL/glew.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "Component.hpp"
#include "Texture.hpp"
#include "Color.hpp"
#include "ShaderProgram.hpp"

class SpriteComponent : public Component
{
private:
	Texture* mp_texture;
	Color m_color;

public:
	SpriteComponent();
	virtual void Start() override;
	virtual void Update() override;
	void SetTexture(Texture* p_texture);
	void SetColor(const Color& color);
	const Texture* GetTexture() const;
	const Color& GetColor() const;
};

#endif
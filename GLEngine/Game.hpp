#ifndef GAME_HPP
#define GAME_HPP

#include <vector>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "ErrorLogger.hpp"
#include "SpriteRenderer.hpp"
#include "ShaderProgram.hpp"
#include "VertexShader.hpp"
#include "FragmentShader.hpp"
#include "Sprite.hpp"
#include "Resources.hpp"
#include "GameObject.hpp"
#include "Sprite.hpp"
#include "RectangleCollider.hpp"
#include "Rigidbody.hpp"
//#include "MainLevel.hpp"
#include "LevelManager.hpp"

class Game
{
public:
	GLuint m_width, m_height;
	//std::shared_ptr<GameObject> mp_background;
	//std::shared_ptr<GameObject> mp_player;
	//std::vector<std::shared_ptr<GameObject> > m_gameObjects;
	//std::vector<std::shared_ptr<Level> > m_levels;

private:
	SpriteRenderer* mp_renderer;

public:
	Game(GLuint width, GLuint height);
	void Init();
	void Update(GLfloat dt);
	void Render();
	//void CheckCollisions(std::shared_ptr<GameObject>& objectA, std::shared_ptr<GameObject>& objectB);
};

#endif
#include "Vertex.hpp"

/**
 * @brief Default constructor
 */
Vertex::Vertex()
{
    
}

/**
 * @brief Creates a vertex with the specified position, color and texture coordinates
 *
 * @param Position The vertex position
 * @param Color The vertex color
 * @param TexCoords The vertex texture coordinates
 */
Vertex::Vertex(glm::vec3 Position, Color Color, glm::vec2 TexCoords)
{
    position = Position;
    color = Color;
    texCoords = TexCoords;
}

/**
 * @brief Creates a vertex with the specified position and color
 *
 * @param Position The vertex position
 * @param Color The vertex color
 */
Vertex::Vertex(glm::vec3 Position, Color Color)
{
    position = Position;
    color = Color;
}

/**
 * @brief Creates a vertex with the specified position and texture coordinates
 *
 * @param Position The vertex position
 * @param TexCoords The vertex texture coordinates
 */
Vertex::Vertex(glm::vec3 Position, glm::vec2 TexCoords)
{
    position = Position;
    color = Color();
    texCoords = TexCoords;
}
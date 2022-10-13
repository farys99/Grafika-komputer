#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2;
	float angle = 0;
	float scale = 0;
	float stay = 0;
	float move = 0;
	float up = 0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildColoredCube();
	void BuildColoredCube1();
	void BuildColoredPlane();
	void DrawColoredCube();
	void DrawColoredCube1();
	void BuildColoredPlane1();
	void DrawColoredPlane1();
	void BuildColoredCube2();
	void DrawColoredCube2();
	void BuildColoredPlane2();
	void DrawColoredPlane2();
	void BuildColoredCube3();
	void DrawColoredCube3();
	void BuildColoredPlane3();
	void DrawColoredPlane3();
	void BuildColoredCube4();
	void DrawColoredCube4();
	void BuildColoredPlane4();
	void DrawColoredPlane4();
	void DrawColoredPlane();
};


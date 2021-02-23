#include "USpotLight.h"

USpotLight::USpotLight() :
	Position(glm::vec3(-2.0f, 5.0f, 0.0f)),
	Angle(glm::vec3(glm::radians(90.0f), 0, 0)),
	Color(glm::vec3(1.0f, 1.0f, 1.0f)),
	CosPhy(0.9f)
{
	UpdateDirection();
}

USpotLight::USpotLight(glm::vec3 _Position, glm::vec3 _Rangle, glm::vec3 _Color) :
	Position(_Position),
	Color(_Color)
{
}

USpotLight::~USpotLight()
{
}

void USpotLight::Tick(float DeltaTime)
{
}

void USpotLight::UpdateDirection()
{
	Direction = glm::vec3(0, 0, 1.0f);
	Direction = glm::rotateZ(Direction, Angle.z);
	Direction = glm::rotateX(Direction, Angle.x);
	Direction = glm::rotateY(Direction, Angle.y);
	Direction *= -1.0f;
}

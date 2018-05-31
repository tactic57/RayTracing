#include "Vector3D.h"


Vector3D::Vector3D() 
      : x(0),y(0),z(0)
{}
  
Vector3D::Vector3D(float X, float Y, float Z) 
{
    x = X;
    y = Y;
    z = Z;
}
  
Vector3D::~Vector3D(){}

Vector3D Vector3D::operator + (Vector3D Vector)
{
		return Vector3D (Vector.x + x, Vector.y + y, Vector.z + z);
}

Vector3D Vector3D::operator - (Vector3D Vector)
{
	  return Vector3D (x - Vector.x, y - Vector.y, z - Vector.z);
}
  
Vector3D Vector3D::operator ^(Vector3D Vector)
{	
		Vector3D vNormal;	

		vNormal.x = ((y * Vector.z) - (z * Vector.y));
		vNormal.y = ((z * Vector.x) - (x * Vector.z));
		vNormal.z = ((x * Vector.y) - (y * Vector.x));

		return vNormal;		
}
	
Vector3D Vector3D::operator * (float num)
{
		return Vector3D(x * num, y * num, z * num);
}

float Vector3D::operator * (Vector3D Vector)
{
		return (x * Vector.x +  y * Vector.y + z * Vector.z);
}
  
Vector3D Vector3D::operator / (float num)
{
		return Vector3D(x / num, y / num, z / num);
} 
  
void Vector3D::operator = (Vector3D Vector)
{
		x = Vector.x;
		y = Vector.y;
		z = Vector.z;
}
 
bool Vector3D::operator == (Vector3D Vector)
{
		return (x == Vector.x && y == Vector.y && z == Vector.z);
}

bool Vector3D::operator != (Vector3D Vector)
{
		return (x != Vector.x || y != Vector.y || z != Vector.z);
}
	
	
// Work out the norm of our vector
float Vector3D::Norm()
{
		// Norme = sqrt(x^2 + y^2 + z^2)
		return (float)sqrt( Vector3D(x,y,z) * Vector3D(x,y,z) );
}

	// Work out the vector normalized : Vector.norm() == 1
Vector3D Vector3D::Normalize()
{  
		return (Vector3D(x,y,z) / Norm());
}
				

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

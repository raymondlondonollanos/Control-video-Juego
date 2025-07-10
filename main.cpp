#include <iostream>
#include <string>

enum class Direccion
{
	ARRIABA,
	ABAJO,
	DERECHA,
	IZQUIERDA
};

struct Personaje
{
	struct Posicion
	{
		int m_posicion_x{};
		int m_posicion_y{};
	};

	Posicion posicion{ 0 , 0};
	std::string m_nombre{};
	Direccion m_direccion{};


};

void mover(Personaje* personaje)
{
	Personaje* p1 =	personaje;

	std::cout << "Personaje ahora en la posicion X " << p1->posicion.m_posicion_x << " Y " << p1->posicion.m_posicion_y << std::endl;

}

int main() {

	Personaje personaje1{ {0,0}, "Mario Bross",Direccion::ABAJO };

	Personaje* ptr_personaje{ &personaje1 };

	mover(ptr_personaje);

	ptr_personaje->posicion.m_posicion_x = 10;

	ptr_personaje->posicion.m_posicion_y = 11;

	mover(ptr_personaje);

	ptr_personaje->posicion.m_posicion_x = 22;
	
	ptr_personaje->posicion.m_posicion_y = 45;

	mover(ptr_personaje);

	return 0;
}

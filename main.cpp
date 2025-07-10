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

int main() {
	std::cout << "Hello, World!" << std::endl;
	return 0;
}

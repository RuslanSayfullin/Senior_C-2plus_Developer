#include <cereaal/types/vector.hpp>
#include <cereal/archives/binary.hpp>
#include <fstream>

struct MyData
{
	int x;
	float y;
	std::vector<double> z;

	template<class Archive>
	void serialize(Archive & archive)
	{
		archive(x, y, z); // serialize things by passingthem to the archive
	}
};

int main()
{
	std::ofstream os("out.cereal", std::ios::binary);
	cereal::BinaryOutputArchive archive( os );

	MyData m1 {10, 3.14, {1.1, 2.2, 3.3}};
	archive(m1);

	// Загрузка данных
	std::ifstream is("out.cereal", std::ios::binary);
	cereal::BinaryInputArchive iarchive(is);
	MyData m2;
	iarchive(m2);

	std::cout << "x: " << m2.x << ", y: " << m2.y << ", z: ";
	for(auto& v: m2.z)
		std::cout << v << " ";
	std::cout << std::endl;

	return 0;
}

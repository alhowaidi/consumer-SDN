#include "ndncatchunks.hpp"
#include "version.hpp"
#include "options.hpp"
#include "consumer.hpp"

int main(int argc, char* argv[])
{
	std::string name = argv[1];    //"/ndn/version.hpp";
	std::cout << name << std::endl;
	ndn::chunks::ndnChunks nchunks;
	nchunks.startChunk(name);
}

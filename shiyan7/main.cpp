#include "cpu.h"
#include "ram.h"
#include "computer.h"
int main() {
	const CPU cpu1;
	const RAM ram1;
	const COMPUTER computer1(cpu1,ram1,9999);
	computer1.Print();
	// computer1.SetPrice(1111);
	const COMPUTER computer2(computer1);
	computer2.Print();
	// computer2.SetPrice(2222);
	return 0;
}

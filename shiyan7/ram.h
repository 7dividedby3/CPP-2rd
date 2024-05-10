#ifndef _IOSTREAM_
#define _IOSTREAM_
#include <iostream>
using namespace std;
#endif
#ifndef _CLASS_RAM_
#define _CLASS_RAM_
enum RAM_Rank {DDR = 1, DDR2 = 2, DDR3 = 3};
class RAM {
	public:
		friend class COMPUTER;
		RAM() {
			cout << "正在默认构造对象RAM" << endl;
		}
		RAM(RAM_Rank newr, int newm, float newf, int newp): rank(newr), memory(newm), frequency(newf), price(newp) {
			cout << "正在构造对象RAM" << endl;
		}
		RAM(RAM &p) {
			rank = p.rank;
			memory = p.memory;
			frequency = p.frequency;
			price = p.price;
			cout << "正在复制构造对象RAM" << endl;
		}
		RAM(const RAM &p) {
			rank = p.rank;
			memory = p.memory;
			frequency = p.frequency;
			price = p.price;
			cout << "正在复制构造对象RAM" << endl;
		}
		~RAM() {
			cout << "正在删除对象RAM" << endl;
		}
		RAM_Rank GetRank() const {
			return rank;
		}
		float GetFrequency() const {
			return frequency;
		}
		int GetMemory() const {
			return memory;
		}
		int GetPrice() const {
			return price;
		}
		void SetRank(RAM_Rank r) {
			rank = r;
		}
		void SetFrequency(float f) {
			frequency = f;
		}
		void SetMemory(int m) {
			memory = m;
		}
		void SetPrice(int p) {
			price = p;
		}
		void Print() const {
			cout << "RAM: DDR" << rank << " Memory=" << memory << " Frequency=" << frequency << " Price=" << price << endl;
		}
		void Run() const {
			cout << "RAM开始运行!" << endl;
		}
		void Stop() const {
			cout << "RAM停止运行!" << endl;
		}
	private:
		RAM_Rank rank;
		int memory;
		float frequency;
		int price;
};
#endif

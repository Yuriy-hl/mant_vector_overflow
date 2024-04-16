#include "dif.h" 

class vector {
protected:
	dif* v; 
	int sz;
public:
	vector(int s = 99); // конструктор
	~vector(); // деструктор
	inline int size()const { return sz; }
	dif& operator [](int); //оператор индексации
	inline dif& elem(int i)const { return v[i]; }
	void operator=(const vector& a);
	vector(const vector& a);
	vector operator+(vector& a);
	char operator==(vector& a);
	void printAll();
	void error(char p);
};
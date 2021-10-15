#include <iostream>
using namespace std;
class Test{
public:
	int m_Value;

	void Checkthis()
	{
		cout << "this = " << this << endl;
		this->m_Value = 5;
	}
};
int main() {
	Test t;
	t.m_Value = 3;
	cout << "t.m_Value = " << t.m_Value << "\n";
	cout << "t address = " << &t << endl;  // 과연 this랑 같을까? 같다!
	t.Checkthis();
	cout << "t.m_Value = " << t.m_Value << "\n"; // this키워드를 통한 값 수정.
}

//https://kkkk10001.tistory.com/25

//3.7�����ϰ-1
#include <iostream>
int main() {
	using namespace std;
	int bd_height,ft,in;//ת��ǰ��ߣ�ת����Ӣ�ߣ�Ӣ�粿��
	const int ex_coefficient = 12;//ת������
	cout << "������������ߣ�Ӣ�磩" << endl;
	cin >> bd_height;				//����
	ft = bd_height / ex_coefficient ;//ת��
	in = bd_height%ex_coefficient; //ת��	
	cout << "�������Ϊ " << ft << " ��Ӣ�ߣ� " <<in << " (Ӣ�磩" << endl;//���
	return 0;
}
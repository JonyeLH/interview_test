//#include <iostream>
//using namespace std;
//
//class MyClass
//{
//public:
//
//	MyClass();
//	 ~MyClass();	//virtual
//
//	void show();
//	void show1() {
//		int c = 2;
//	}
//private:
//	//int a;
//	//��windows64λһ��ʹ��LLP64ģ�ͣ���ģ����long/unsigned longΪ4�ֽ�
//	long d;		//4
//	//unsigned long j;	//4
//
//	//static int f;	//��̬��Ա����ռջ�ڴ�
//};
//
//MyClass::MyClass()
//{
//}
//
//MyClass::~MyClass()
//{
//}
//
//void MyClass::show() {
//	int b = 3;
//}
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	//�Կ������sizeof��ֵΪ1����Ϊ0.��Ϊ��Ҫ���пռ�ʵ��������vs��ʵ��ռ��1�ֽڿռ䣬����б�����������Ḳ���˿����е�1�ڴ�
//	//���ù��캯�����鹹����ֻ��֪��������ַ���ɣ����������йأ�����������Ϊ������κ���Ϣ��������ͨ����Ҳ��һ������ʹ�����������˱�����Ҳ��ռ�ڴ�ռ�
//	//���������������Ϊ�麯��������Ҫռ��һ���Ŀռ䡣��Ϊ�鹹�����ĵ��û�����һ��ָ��ָ���������Ҳ���Ƕ�ָ�����sizeof��32λϵͳָ��ռ4λ��64λռ8λ�ֽڿռ�
//	//����о�̬���ݳ�Ա����ռ���ڴ档��Ϊ��̬��Ա���ڴ�ʵ�ھ�̬�洢�ڴ��У������еĳ�Ա�Ǵ洢��ջ�ڴ��С�
//
//	cout<< sizeof(MyClass);
//
//	system("pause");
//	return 0;
//}
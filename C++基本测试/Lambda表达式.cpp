///*
//lambda���ʽ ����һ��������������������Ҳ����û�к������ĺ���
//lambda���ʽҲ�бհ����վ��Ƿ�յ���˼�����������ط����������������Ǻ���
//
//lambda���ʽ ��ʵ����һ�������������ڲ�������һ������()���������ࡣ�������£�
//[capture](parameters) mutable ->return-type{statement}
//1.[capture]����׽�б���׽�б����ǳ�����Lambda�����Ŀ�ʼ����ʵ���ϣ�[]��Lambda�����������������ݸ��������жϽ������Ĵ����Ƿ���Lambda��������׽�б��ܹ���׽�������еı����Թ�Lambda����ʹ��;
//
//2.(parameters)�������б�����ͨ�����Ĳ����б�һ�¡��������Ҫ�������ݣ��������ͬ���š�()��һ��ʡ��;
//
//3.mutable��mutable���η���Ĭ������£�Lambda��������һ��const������mutable����ȡ���䳣���ԡ���ʹ�ø����η�ʱ�������б���ʡ�ԣ���ʹ����Ϊ�գ�;
//
//4.->return-type���������͡���׷�ٷ���������ʽ���������ķ������͡����ǿ����ڲ���Ҫ����ֵ��ʱ��Ҳ������ͬ���š�->��һ��ʡ�ԡ����⣬�ڷ���������ȷ������£�Ҳ����ʡ�Ըò��֣��ñ������Է������ͽ����Ƶ�;
//
//5.{statement}�������塣��������ͨ����һ�����������˿���ʹ�ò���֮�⣬������ʹ�����в���ı�����
//
//
//����ͨ�������������ǣ����˿���ʹ�ò������⣬Lambda����������ͨ�������б����һЩ�������е����ݡ�����أ���׽�б�����������������Щ���ݿ��Ա�Lambdaʹ�ã��Լ�ʹ�÷�ʽ����ֵ���ݵķ�ʽ�����ô��ݵķ�ʽ�����﷨�ϣ��ڡ�[]�������������ǲ�׽�б���׽�б��ɶ����׽����ɣ����Զ��ŷָ�����׽�б������¼�����ʽ��
//1.[var]��ʾֵ���ݷ�ʽ��׽����var��
//2.[=]��ʾֵ���ݷ�ʽ��׽���и�������ı���������this����
//3.[&var]��ʾ���ô��ݲ�׽����var��
//4.[&]��ʾ���ô��ݷ�ʽ��׽���и�������ı���������this����
//5.[this]��ʾֵ���ݷ�ʽ��׽��ǰ��thisָ�롣
//
//�����ᵽ��һ����������Ҳ���ǰ���Lambda���������飬˵ͨ�׵���ǰ���Lambda�ġ�{}������顣
//
//����Ĳ�׽�б����Խ�����ϣ����磺
//1.[=,&a,&b]��ʾ�����ô��ݵķ�ʽ��׽����a��b����ֵ���ݷ�ʽ��׽�������б���;
//2.[&,a,this]��ʾ��ֵ���ݵķ�ʽ��׽����a��this�����ô��ݷ�ʽ��׽�������б�����
//
//����ֵ��ע����ǣ���׽�б���������ظ����ݡ�����һЩ���Ӿ��ǵ��͵��ظ����ᵼ�±���ʱ�ڵĴ������磺
//
//3.[=,a]�����Ѿ���ֵ���ݷ�ʽ��׽�����б����������ظ���׽a�ˣ��ᱨ���;
//4.[&,&this]����&�Ѿ������ô��ݷ�ʽ��׽�����б������ٲ�׽thisҲ��һ���ظ�
//*/
//
//
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <functional>
//using namespace std;
//
//class AddressBook
//{
//public:
//	std::vector<string> findMatchingAddresses(std::function<bool(const string&)> func)
//	{
//		std::vector<string> results;
//		for (auto itr = _addresses.begin(), end = _addresses.end(); itr != end; ++itr)
//		{
//			// ���ô��ݵ�findMatchingAddresses�ĺ���������Ƿ�ƥ�����
//			if (func(*itr))
//			{
//				results.push_back(*itr);
//			}
//		}
//		return results;
//	}
//	void SetAddress(const std::vector<std::string> &address)
//	{
//		_addresses = address;
//	}
//private:
//	std::vector<string> _addresses;
//};
//
//AddressBook global_address_book;
////����ƥ�����ֵĵ�ַ
//vector<string> findAddressesFromName(const string &name)
//{
//	return global_address_book.findMatchingAddresses(
//		[&](const string& addr) { return addr.find(name) != string::npos; }
//	);
//}
////����ƥ�䳤�ȵĵ�ַ
//vector<string> findAddressesLen(const int &min_len)
//{
//	return global_address_book.findMatchingAddresses([&](const string& addr) { return addr.length() >= min_len; });
//}
//
//int main() {
//	[] {}();//��򵥵�һ��lambda���ʽ����������
//	
//	//������
//	[]() {}();
//
//	//{}�������������ӡ
//	[] { cout << "Hello, World!"<<endl; }();
//
//	//����lam��������
//	auto lam = [] { cout << "Hello, World!" << endl; };
//	lam();	//���������������
//
//
//	//����ֵ����
//	auto lam2 = []() -> int { cout << "Hello, World!" << endl; return 1; };
//	auto ret = lam2();
//	auto lam3 = []() -> string { cout << "Hello, World!" << endl; return "test"; };
//	auto ret1 = lam3();
//
//
//	//��׽����
//	int a = 1, b = 2, c = 3;
//	auto lam4 = [&, a]() { cout << a << b << c << endl; };//b��c�����ò���a��ֵ����
//	lam4();
//
//
//	//��STL��ʹ��
//	vector<string> address1{ "111","222",",333",".org","wwwtest.org" };
//	std::for_each(address1.begin(), address1.end(), [](string& str) {cout << str << endl; });
//
//	
//	//��ӡ����
//	auto lam5 = []() {cout << "hi" << endl; };
//	cout << typeid(lam5).name() << endl;//��� class <lambda_84cbc75ec05f81766286fdc5c4c4dc22>
//
//
//	//������һ������lambda�����ĺ������µ�std::function�Ǵ���lambda��������õķ�ʽ�������Ǵ��ݲ������Ƿ���ֵ��
//	vector<string> address{ "china chengdu","china hunan","taiwan taibei","american alaisjia","riben dongjing" };
//	global_address_book.SetAddress(address);
//
//	auto ret3 = findAddressesFromName("china");
//	for_each(ret3.begin(), ret3.end(), [](string &i) {cout << i << ","; }); cout << endl;
//
//	auto ret4 = findAddressesLen(15);
//	for_each(ret4.begin(), ret4.end(), [](string &i) {cout << i << ","; }); cout << endl;
//
//
//
//	/*
//	��by_val_lambda�У�j����Ϊһ��������һ����ʼ���󲻻��ٸı䣨������Ϊ֮��ֻ��һ��������������jͬ���ĳ�������
//	����by_ref_lambda�У�j��Ȼ��ʹ�ø��������е�ֵ�����ԣ���ʹ��Lambda������ʱ�������Ҫ��׽��ֵ��ΪLambda�����ĳ�����
//	����ͨ����ʹ�ð�ֵ���ݵķ�ʽ��׽���෴�ģ������Ҫ��׽��ֵ�ɳ�ΪLambda��������ʱ�ı�������Ӧ�ò��ð����÷�ʽ���в�׽��
//	*/
//	int j = 10;
//	auto by_val_lambda = [=] { return j + 1; };
//	auto by_ref_lambda = [&] { return j + 1; };
//	cout << "by_val_lambda: " << by_val_lambda() << endl;	//11
//	cout << "by_ref_lambda: " << by_ref_lambda() << endl;	//11
//
//	++j;
//	cout << "by_val_lambda: " << by_val_lambda() << endl;	//11
//	cout << "by_ref_lambda: " << by_ref_lambda() << endl;	//12
//
//
//
//	/*
//	��δ�����Ҫ���������Lambda���ʽ�е�mutable�ؼ��ֵġ�Ĭ������£�Lambda��������һ��const������
//	mutable����ȡ���䳣���ԡ����չ涨��һ��const�ĳ�Ա�����ǲ����ں��������޸ķǾ�̬��Ա������ֵ��
//
//	����const�ĳ�Ա�������޸ķǾ�̬�ĳ�Ա���������Ծͳ����ˡ�
//	���������õĴ��ݷ�ʽ��������ı����ñ�����ֻ��ı����õ�ֵ����˾Ͳ��ᱨ���ˡ�
//	*/
//	int val = 0;
//	// auto const_val_lambda = [=](){ val = 3; }; wrong!!!
//
//	auto mutable_val_lambda = [=]() mutable { val = 3; };
//	mutable_val_lambda();
//	cout << val << endl; // 0
//
//	auto const_ref_lambda = [&]() { val = 4; };
//	const_ref_lambda();
//	cout << val << endl; // 4
//
//	auto mutable_ref_lambda = [&]() mutable { val = 5; };
//	mutable_ref_lambda();
//	cout << val << endl; // 5
//
//
//	system("pause");
//	return 0;
//}
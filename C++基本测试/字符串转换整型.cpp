/*
�ַ���ת���ͣ�
����һ��
	char p[] = "123456";
	long a = atoi(p);
	cout << a << endl;

��������
	//ʹ��stringstream
	string s="17";
	stringstream ss;
	ss<<s;
	int i;
	ss>>i;
	cout<<i<<endl; //���17

��������
	//ʹ��boost���е�lexical_cast
	string s = "17";
	int i = boost::lexical_cast<int>(s);
	cout << i << endl; // 17




charתint
	//���ַ�char����ת����int���͵ķ������£�
	char str_data = '5';
	int int_data = (int)(str_data - '0');
	cout << int_data << endl;
	//ͬ���ĵ���intת�����ַ�char�������෴�ķ���
	int data_int = 9;
	char data_str = (char)(data_int + '0');
	cout << data_str << endl;
	//Ϊʲôһ����+,һ����-��
	��ʵ�ַ�����������ASCII��������,'0'��ascii��ֵΪ48,'5'��ascii��ֵΪ53





intת�ַ���
	//��int����ת��Ϊ�ַ�����
	int number = 123456;
	char str[25];
	itoa��������˵��
    //������������ʾ���ƣ�10����10����
	itoa(number, str, 10);



	//��������sprintf()������Ϊת��,��ָ�����ַ�����ʽ������
	//�ڶ�������:��ʽ���ַ���
	%% ӡ���ٷֱȷ��ţ���ת����
	%c ����ת�ɶ�Ӧ�� ASCII ��Ԫ��
	%d ����ת��ʮ��λ��
	%f ����ȷ������ת�ɸ�������
	%o ����ת�ɰ˽�λ��
	%s ����ת���ַ�����
	%x ����ת��Сдʮ����λ��
	%X ����ת�ɴ�дʮ����λ��

	int number2 = 987654;
	char str2[25];

	sprintf(str2, "%d", number2);
	cout << str2 << endl;
*/
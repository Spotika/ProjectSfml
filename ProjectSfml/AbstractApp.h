#pragma once
#include<string>


/// <summary>
/// ���������� ����������
/// </summary>
class AbstractApp {
private:
public:
	static inline std::string name;
	/// <summary>
	/// ����� ����������
	/// </summary>
	virtual void start() {};
	/// <summary>
	/// �������� ���� ����������
	/// </summary>
	virtual void loop() {};
	/// <summary>
	/// ��������� ������ ����������
	/// </summary>
	virtual void stop() {};
};


#pragma once
#include"AbstractApp.h"
#include"Singleton.h"
#include<map>
#include<vector>


class AppFactory : public Singleton<AppFactory>{
private:
	/// <summary>
	/// ������� � ���������� (���� : ��������),
	/// ��� ���� - ��� ����������, � �������� - ��������� �� �������, ��������� ������ ����������
	/// </summary>
	std::map<std::string, AbstractApp* (*)()> create_function_by_name;
public:
	/// <summary>
	/// ������� ������ ���������� �� �����
	/// </summary>
	/// <param name="name">��� ����������</param>
	/// <returns>������ �� ��������� ������</returns>
	AbstractApp* createByName(std::string name);
	/// <summary>
	/// ��������� ��������� �� ��������� �������
	/// </summary>
	/// <param name="name">��� ����������</param>
	/// <param name="function">��������� �� �������, ������� ������� ������� ����������</param>
	void addCreatingFunction(std::string name, AbstractApp* (*function)());
};

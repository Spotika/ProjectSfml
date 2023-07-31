#pragma once
#include"AppFactory.h"
#include"Singleton.h"
#include<queue>

class AppManager : public Singleton<AppManager> {
private:
	/// <summary>
	/// ������� ���������� �������
	/// </summary>
	std::queue<AbstractApp*> app_queue;
public:
	/// <summary>
	/// ��������� ���������� �� �����, �� ��������� ��������� �����������
	/// </summary>
	/// <param name="name">��� ����������</param>
	void startApp(std::string name);
	/// <summary>
	/// ��������� ���������� � ������� ��� �������
	/// </summary>
	/// <param name="name">��� ����������</param>
	void addAppToQueue(std::string name);
	/// <summary>
	/// ��������� �������� ���� ���������, �����������, ����� ��������� ��� ����������
	/// </summary>
	void startLoop();
};


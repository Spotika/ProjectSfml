#pragma once

/// <summary>
/// ������������ �������, ��������� ���������� �������, ��������� ������� ������ T2 � �������� �� � ����� �������� ���� T1
/// </summary>
/// <typeparam name="T1">����� ������� ���</typeparam>
/// <typeparam name="T2">��� ��������� ��������</typeparam>
template<class T1, class T2> class MonoFunctionFactory {
public:
	T1* (*getCreateFunction())() {
		T1* (*createFunction)() = []() {
			return (T1*)(new T2());
		};
		return createFunction;
	}
};
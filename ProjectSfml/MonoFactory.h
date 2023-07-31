#pragma once

/// <summary>
/// Прадставляет объекты, способные возвращать функцию, создающую объекты класса T2 и приводит их к более широкому типу T1
/// </summary>
/// <typeparam name="T1">Более широкий тип</typeparam>
/// <typeparam name="T2">Тип созданных объектов</typeparam>
template<class T1, class T2> class MonoFunctionFactory {
public:
	T1* (*getCreateFunction())() {
		T1* (*createFunction)() = []() {
			return (T1*)(new T2());
		};
		return createFunction;
	}
};
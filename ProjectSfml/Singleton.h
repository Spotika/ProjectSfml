#pragma once

/// <summary>
/// Базовый класс синглтон классов, объект которых существует в единственном числе
/// </summary>
/// <typeparam name="T">Дочерний класс</typeparam>
template<class T> class Singleton {
protected:
	/// <summary>
	/// Ссылка на единственный объект
	/// </summary>
	static inline T* instance = nullptr;
	Singleton() {}
public:
	Singleton(Singleton const&) = delete;
	void operator = (Singleton const&) = delete;

	/// <summary>
	/// 
	/// </summary>
	/// <returns>Ссылку на единственный объект класса</returns>
	static T* getInstance() {
		if (instance == nullptr) {
			instance = new T();
		}
		return instance;
	}
};


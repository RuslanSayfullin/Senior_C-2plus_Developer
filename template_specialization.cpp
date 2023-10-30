template <typename T>
class MyTemplate {
public:
	void DoSomething() {
		// Общая реализация
	}
};

template <>
class MyTemplate<int> {
public:
	void DoSomething() {
		// Специализированная реализация для int
	}
};

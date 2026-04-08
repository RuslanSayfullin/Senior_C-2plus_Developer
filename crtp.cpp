template <typename Derived>
class Base {
public:
    void implementation() {
        static_cast<Derived*>(this)->implementation();
    }

    // Other common functionality for all derived classes
};

class Derived1 : public Base<Derived1> {
public:
    void implementation(){
        // Custom implementation for Derived1
    }
};

class Derived2 : public Base<Derived2> {
public:
    void implementation() {
        // Custom implementation for Derived2
    }
};

#include <iostream>
class Base {
private:
    int secret;
protected:
    int protect;
public:
    int access;
    Base() : secret(10), protect(20), access(30) {}
};

class Derived_Private : private Base {
public:
    void show() {
        std::cout << "Private: " << secret << ", " << protect << ", " << access << std::endl;
    }
};

class Derived_Protected : protected Base {
public:
    void show() {
        std::cout << "Protected: " << secret << ", " << protect << ", " << access << std::endl;
    }
};

class Derived_Public : public Base {
public:
    void show() {
        std::cout << "Public: " << secret << ", " << protect << ", " << access << std::endl;
    }
};

int main() {
    Derived_Private dp;
    dp.show();  // Error: 'int Base::secret' is private
    dp.show();  // Error: 'int Base::protect' is protected
    dp.show();  // Error: 'int Base::access' is public but inaccessible due to private inheritance

    Derived_Protected dpt;
    dpt.show();  // Error: 'int Base::secret' is private
    dpt.show();  // Okay: 'int Base::protect' is protected and accessible
    dpt.show();  // Okay: 'int Base::access' is public and accessible

    Derived_Public dpu;
    dpu.show();  // Error: 'int Base::secret' is private
    dpu.show();  // Okay: 'int Base::protect' is protected and accessible
    dpu.show();  // Okay: 'int Base::access' is public and accessible

    return 0;
}


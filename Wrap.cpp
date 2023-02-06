#include <iostream>

class LegacyClass {
  public:
    int oldMethod(int a, int b) {
        return a + b;
    }
};

class WrapperClass : public LegacyClass {
  public:
    // 1) Rename the old method you want to wrap
    int oldMethodWrapped(int a, int b) {
        return oldMethod(a, b);
    }

    // 2) Create a new method with the same name and signature as the old method
    int oldMethod(int a, int b) {
        // 3) Call the old method from the new method
        int result = oldMethodWrapped(a, b);

        // 4) Put the new logic before/after the other method call
        std::cout << "Before call to wrapped method" << std::endl;
        result = oldMethodWrapped(a, b);
        std::cout << "After call to wrapped method" << std::endl;
        return result;
    }
};

int main() {
    WrapperClass obj;
    int result = obj.oldMethod(2, 3);
    std::cout << "Result: " << result << std::endl;
    return 0;
}

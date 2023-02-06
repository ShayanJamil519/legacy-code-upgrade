#include <iostream>

// 1) Create your code somewhere else
int sprout_function(int a, int b) {
    return a + b;
}

// 2) Unit test it
void test_sprout_function() {
    assert(sprout_function(2, 3) == 5);
    assert(sprout_function(-2, -3) == -5);
}

// 3) Identify where you should call that code from the existing code: the insertion point
int legacy_function(int c, int d) {
    // 4) Call your code from the Legacy Code
    int result = sprout_function(c, d);
    return result;
}

// Test the Legacy Code
void test_legacy_function() {
    assert(legacy_function(2, 3) == 5);
    assert(legacy_function(-2, -3) == -5);
}

int main() {
    test_sprout_function();
    test_legacy_function();
    return 0;
}

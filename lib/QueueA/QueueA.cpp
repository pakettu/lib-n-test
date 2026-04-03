#include <iostream>
#include <cstdint>
#include <vector>

class QueueA {
public:
    std::int32_t size;
    std::vector<std::int64_t> que;

    QueueA() {
        que = {};
        size = 0;
    }

    QueueA(std::vector<int64_t> a) {
        que = a;
        size = a.size();
    }

    void set(std::int64_t x) {
        size += 1;
        que.push_back(x);
    }

    std::int64_t get() {
        std::int64_t x;
        x = que[0];
        for (int32_t i = 0; i < size - 1; i++) {
            que[i] = que[i+1];
        }
        que.resize(size - 2); // не знаю как последний элемент удалить
        return x;
    }
    void printQue() {
        for (std::int32_t i = 0; i < size; i++) {
            std::cout << que[i] << " ";
        }
    }
};

int main()
{
    QueueA a;
    a.set(1);
    a.set(2);
    a.printQue();
    a.get();
    a.printQue();
}

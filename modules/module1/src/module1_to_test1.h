#ifndef MODULE1_TO_TEST1
#define MODULE1_TO_TEST1

#include <queue>

bool foo_to_test(void);

class Module1 {
    public:
    std::size_t size() const {
        return q_.size();
    }
    void push(const int e) {
        q_.push(e);
    }
    private:
    std::queue<int> q_;
};

class Turtle {
    public:
    virtual ~Turtle() {};
    virtual void Up() = 0;
    virtual void Down() = 0;
};

#endif
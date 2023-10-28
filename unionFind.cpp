#include <iostream>
#include <vector>

using namespace std;

struct node {
    int value;
    int parent = NULL;
    node(int val) {
        value = val;
    }

    int getParent() {
        if(this->parent != NULL)
            return this->parent;
        return this->value;
    }

    void setParent(int parent) {
        this->parent = parent;
    }
};

int main() {
    vector<int> nodes;
}

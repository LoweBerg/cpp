#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
#include <unordered_set>

using namespace std;

struct node {
    int x, y, i;
    node* parent;
    bool channel = false;

    node(int x_, int y_, int i_) {
        x = x_;
        y = y_;
        i = i_;
    }
    node(){}

    void setParent(node* n) {
        this->parent = n;
    }

    node* getParent() {
        if(this->parent == this)
            return this;
        return this->parent->getParent();
    }

    void addChannel() {
        this->channel = true;
    }
};

struct edge {
    node* n1;
    node* n2;
    double d;

    edge(node* n1_, node* n2_, double d_) {
        n1 = n1_;
        n2 = n2_;
        d = d_;
    }

    edge(){}
};

struct leastDist {
    bool operator()(edge dist1, edge dist2) {
        return dist1.d > dist2.d;
    }
};

struct mostDist {
    bool operator()(edge dist1, edge dist2) {
        return dist1.d < dist2.d;
    }
};

int main() {
    
    int c, s, p;
    cin >> c;
    for(int _ = 0; _ < c; _++) {

        cin >> s;
        cin >> p;

        vector<node*> nodes(p);

        int x;
        int y;

        for(int i = 0; i < p; i++) {
            cin >> x;
            cin >> y;
            nodes[i] = new node(x, y, i);
            nodes[i]->setParent(nodes[i]);
        }

        priority_queue<edge, vector<edge>, leastDist> q;
        vector<edge> mst;

        for(int i = 0; i < nodes.size()-1; i++) {
            for(int j = i; j < nodes.size(); j++) {
                if(i != j) {
                    q.push(edge(nodes[i],nodes[j],sqrt(pow((*nodes[i]).x-(*nodes[j]).x,2)+pow((*nodes[i]).y-(*nodes[j]).y,2))));
                }
            }
        }

        while(!q.empty()) {
            edge current = q.top();
            q.pop();

            if(current.n1->getParent() == current.n2->getParent())
                continue;
            
            current.n1->setParent(current.n2->getParent());
            mst.push_back(current);
        }

        while(s) {
            edge current = mst.front();
            if(!current.n1->channel)
                current.n1->addChannel();
            else if(!current.n2->channel)
                current.n2->addChannel();

            s--;
        }

        cout << double((int)(mst.front().d*100)) / 100;

    }
}
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>

using namespace std;

struct item {
    int id;
    int val;
    item() = default;
    item(int id, int val) : id(id), val(val) {}
};

ostream& operator<<(ostream &out, const item &i)
{
    out << i.id << ' ' << i.val;
    return out;
}

istream& operator>>(istream &in, item &i)
{
    in >> i.id >> i.val;
    return in;
}

void save(const vector<item> &database, const string &filename)
{
    ofstream out(filename);
    if(out.is_open())
        for(const auto &i : database)
        {
            out << i << '\n';
        }
    else
        cout << "error opening file" << endl;
}

void load(vector<item> &database, const string &filename)
{
    ifstream in(filename);
    string line;

    item i;
    while(getline(in, line))
    {
        istringstream iss(line);
        iss >> i;
        database.push_back(i);
    }
}


int main()
{
    string file = "save1.txt";

    vector<item> original = {item(0, 10), 
         item(1, 25)};
    save(original, file);

    vector<item> restored;
    load(restored, file);

    for (auto& i : restored)
        cout << i << endl;

    return 0;
}
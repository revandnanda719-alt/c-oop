#include <iostream>
#include <string>


using namespace std;



class denganConstructor{

    public:
    string data;

    denganConstructor(const char* data) {
        denganConstructor::data = data;
    }

    void menampilkan() {
        cout << "ini object: " << denganConstructor::data << endl;
    }

};

class tanpaConstructor{

    public:
    string data;

    void menampilkan() {
        cout << "ini object: " << tanpaConstructor::data << endl;
    }

};


int main() {

    //1. tanpa constructor

    tanpaConstructor object1;
    object1.data = "object 1";
    object1.menampilkan();

    //2.dengan constructor metode explicit

    denganConstructor object2 = denganConstructor("object 2");
    object2.menampilkan();

    //3. dengan constructor metode ixplicit 
    denganConstructor object3("object 3");
    object3.menampilkan();

    //4. dengan constructor heap memory
    denganConstructor* object4 = new denganConstructor("object 4");
    (*object4).menampilkan(); // dengan dereference
    object4->menampilkan(); // dengan arrow
    string dataObject4 = object4->data; 
    cout << "ini object: " << dataObject4 << endl;

    //5. heap memory dengan pointer
    denganConstructor* object5;
    object5 = new denganConstructor("object 5");
    object5->menampilkan();

    cin.get();
    return 0;
}
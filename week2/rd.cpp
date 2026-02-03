#include <iostream>
#include <fstream>
#include <string>
#include <thread>

int main() {
    std::thread::id id = std::this_thread::get_id(); // Get unique thread ID

    while (true) {
        std::ifstream ifs("testfifo");
        std::string myText;
        std::getline(ifs, myText);
        std::cout << "Id: " << id << " and line: " << myText << std::endl;
        ifs.close();
    }
    /* [Do forever]
    /*  [Open file 'testfifo' using std::ifstream] */
    /*  [Read line from file with std::getline] */
    /*  [Print 'id' and line using std::cout] */

    return 0;
}

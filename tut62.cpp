#include <iostream>
#include <fstream>

using namespace std;
int main() {
    string str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin a lacus vestibulum lorem cursus feugiat. Morbi semper felis nunc, vitae rhoncus libero porttitor vel. Suspendisse potenti. Donec suscipit pretium nulla, id scelerisque mi ullamcorper et. Integer maximus, ligula vitae dignissim luctus, magna mauris laoreet elit, at feugiat mi ligula porttitor tellus. Nulla vel blandit magna. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Integer posuere odio ac est convallis, sed dignissim neque malesuada. Nam justo tortor, facilisis vel accumsan blandit, tristique non ligula. Aliquam in mi luctus tellus viverra hendrerit. Etiam dapibus sem sit amet enim fringilla, vitae porttitor ante tempus. Sed neque nibh, eleifend eget condimentum id, euismod ac velit. Donec est ipsum, elementum quis gravida id, porta sed ante. Nulla iaculis a mi ut vestibulum. Nullam accumsan ex eget nibh eleifend ultrices.";

    // ofstream
    ofstream out("sample_text.txt");
    out << str;
    out.close();

    // ifstream
    ifstream in("sample_text.txt");
    string strng;
    while(!in.eof()) {
        getline(in, strng);
    }
    cout << strng;

    return 0;
}
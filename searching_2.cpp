#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    cout << " ========================================" << endl;
    cout << endl;
    cout << " || Program Searching  || " << endl;
    cout << endl;
    cout << " ========================================" << endl;
    cout << endl;

    int numArrays;
    cout << "Enter the number of arrays you want to create: ";
    cin >> numArrays;

    vector<vector<string> > arrays; // Adding a space between the two closing angle brackets

    for (int i = 0; i < numArrays; ++i) {
        cout << "Enter data for array " << i + 1 << " or 'done' to exit: ";
        vector<string> data;
        string input_data;

        while (true) {
            cin >> input_data;
            if (input_data == "done") {
                break;
            }
            data.push_back(input_data);
        }

        arrays.push_back(data);
    }

    while (true) {
        // Minta pengguna memasukkan kata kunci untuk pencarian
        cout << "Enter search keyword or 'done' to exit: ";
        string kata_kunci;
        cin >> kata_kunci;

        // Keluar jika pengguna mengetik 'done'
        if (kata_kunci == "done") {
            break;
        }

        // Pencarian Data
        vector<pair<int, int> > hasil_pencarian_index; // Adding a space between the two closing angle brackets

        for (int i = 0; i < arrays.size(); ++i) {
            for (int j = 0; j < arrays[i].size(); ++j) {
                const string& item = arrays[i][j];

                // Ubah kedua string menjadi lowercase untuk pencarian case-insensitive
                string lower_item = item;
                transform(lower_item.begin(), lower_item.end(), lower_item.begin(), (int(*)(int))tolower);
                string lower_kata_kunci = kata_kunci;
                transform(lower_kata_kunci.begin(), lower_kata_kunci.end(), lower_kata_kunci.begin(), (int(*)(int))tolower);

                // Periksa apakah kata kunci ditemukan dalam item
                if (lower_item.find(lower_kata_kunci) != string::npos) {
                    hasil_pencarian_index.push_back(make_pair(i, j)); // Adding a space between the two closing angle brackets
                }
            }
        }

        // Tampilkan hasil pencarian
        if (!hasil_pencarian_index.empty()) {
            cout << "Search Results:" << endl;
            for (int k = 0; k < hasil_pencarian_index.size(); ++k) { // Using an index-based loop
                cout << "Array " << hasil_pencarian_index[k].first + 1 << ", Data ke-" << hasil_pencarian_index[k].second + 1 << ": " << arrays[hasil_pencarian_index[k].first][hasil_pencarian_index[k].second] << endl;
            }
        } else {
            cout << "No results found for the keyword '" << kata_kunci << "'." << endl;
        }
    }

    cout << endl;
    cout << " ----            Thank You            ----" << endl;

    return 0;
}


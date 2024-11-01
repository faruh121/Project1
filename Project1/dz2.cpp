//1

//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//struct Movie {
//    std::string title;
//    std::string director;
//    std::string genre;
//    float popularityRating;
//    float price;
//
//    // Функция для отображения информации о фильме
//    void display() const {
//        std::cout << "Title: " << title << ", Director: " << director
//            << ", Genre: " << genre << ", Rating: " << popularityRating
//            << ", Price: " << price << std::endl;
//    }
//};
//
//class Cinema {
//private:
//    std::vector<Movie> movies;
//
//public:
//    void setSize(int newSize) {
//        movies.resize(newSize);
//    }
//
//    void addMovies(int count) {
//        for (int i = 0; i < count; ++i) {
//            Movie movie;
//            std::cout << "Enter movie title: ";
//            std::getline(std::cin, movie.title);
//            std::cout << "Enter director: ";
//            std::getline(std::cin, movie.director);
//            std::cout << "Enter genre: ";
//            std::getline(std::cin, movie.genre);
//            std::cout << "Enter popularity rating: ";
//            std::cin >> movie.popularityRating;
//            std::cout << "Enter price: ";
//            std::cin >> movie.price;
//            std::cin.ignore(); // Игнорируем оставшийся символ новой строки
//            movies.push_back(movie);
//        }
//    }
//
//    void searchByTitle(const std::string& title) {
//        for (const auto& movie : movies) {
//            if (movie.title == title) {
//                movie.display();
//            }
//        }
//    }
//
//    void searchByGenre(const std::string& genre) {
//        for (const auto& movie : movies) {
//            if (movie.genre == genre) {
//                movie.display();
//            }
//        }
//    }
//
//    void searchByDirector(const std::string& director) {
//        for (const auto& movie : movies) {
//            if (movie.director == director) {
//                movie.display();
//            }
//        }
//    }
//
//    void mostPopularMovieInGenre(const std::string& genre) {
//        Movie* popular = nullptr;
//        for (auto& movie : movies) {
//            if (movie.genre == genre) {
//                if (!popular || movie.popularityRating > popular->popularityRating) {
//                    popular = &movie;
//                }
//            }
//        }
//        if (popular) {
//            popular->display();
//        }
//        else {
//            std::cout << "No movies found in genre " << genre << "." << std::endl;
//        }
//    }
//
//    void displayAllRecords() {
//        for (const auto& movie : movies) {
//            movie.display();
//        }
//    }
//};
//
//int main() {
//    Cinema cinema;
//    cinema.setSize(0); // Начальный размер 0
//
//    int choice;
//    do {
//        std::cout << "1. Add movies\n2. Search by title\n3. Search by genre\n4. Search by director\n5. Most popular movie in genre\n6. Display all records\n0. Exit\nChoose an action: ";
//        std::cin >> choice;
//        std::cin.ignore(); // Игнорируем оставшийся символ новой строки
//
//        switch (choice) {
//        case 1: {
//            int count;
//            std::cout << "Enter number of movies to add: ";
//            std::cin >> count;
//            std::cin.ignore(); // Игнорируем оставшийся символ новой строки
//            cinema.addMovies(count);
//            break;
//        }
//        case 2: {
//            std::string title;
//            std::cout << "Enter movie title: ";
//            std::getline(std::cin, title);
//            cinema.searchByTitle(title);
//            break;
//        }
//        case 3: {
//            std::string genre;
//            std::cout << "Enter movie genre: ";
//            std::getline(std::cin, genre);
//            cinema.searchByGenre(genre);
//            break;
//        }
//        case 4: {
//            std::string director;
//            std::cout << "Enter director's name: ";
//            std::getline(std::cin, director);
//            cinema.searchByDirector(director);
//            break;
//        }
//        case 5: {
//            std::string genre;
//            std::cout << "Enter genre to find the most popular movie: ";
//            std::getline(std::cin, genre);
//            cinema.mostPopularMovieInGenre(genre);
//            break;
//        }
//        case 6:
//            cinema.displayAllRecords();
//            break;
//        case 0:
//            std::cout << "Exiting the program." << std::endl;
//            break;
//        default:
//            std::cout << "Invalid choice. Please try again." << std::endl;
//            break;
//        }
//    } while (choice != 0);
//
//    return 0;
//}

//2
//#include <iostream>
//#include <cstdint>
//#include <cstring>
//
//union DoubleComponents {
//    double value;
//    struct {
//        uint64_t mantissa : 52; // Биты 0..51
//        uint64_t exponent : 11;  // Биты 52..62
//        uint64_t sign : 1;       // Бит 63
//    } components;
//};
//
//int main() {
//    DoubleComponents dc;
//    dc.value = 123.456; // Пример числа
//
//    std::cout << "Number: " << dc.value << std::endl;
//    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
//    std::cout << "Size of uint64_t: " << sizeof(uint64_t) << " bytes" << std::endl;
//
//    std::cout << "Mantissa: " << dc.components.mantissa << std::endl;
//    std::cout << "Exponent: " << dc.components.exponent << std::endl;
//    std::cout << "Sign: " << dc.components.sign << std::endl;
//
//    return 0;
//}

//3
#include <iostream>
#include <iomanip>

class Time {
private:
    struct {
        uint8_t milliseconds : 10; // 0..1023
        uint8_t seconds : 6;        // 0..59
        uint8_t minutes : 6;         // 0..59
        uint8_t hours : 5;           // 0..23
    } time;

public:
    void setTime(uint8_t h, uint8_t m, uint8_t s, uint16_t ms) {
        time.hours = h;
        time.minutes = m;
        time.seconds = s;
        time.milliseconds = ms;
    }

    void getTime() const {
        std::cout << "Time: " << std::setw(2) << std::setfill('0') << (int)time.hours << ":"
            << std::setw(2) << std::setfill('0') << (int)time.minutes << ":"
            << std::setw(2) << std::setfill('0') << (int)time.seconds << "."
            << std::setw(3) << std::setfill('0') << time.milliseconds << std::endl;
    }
};

int main() {
    Time t;
    t.setTime(12, 30, 45, 123);
    t.getTime();

    return 0;
}
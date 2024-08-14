#include <ranges>
#include <filesystem>
#include <iostream>

int main()
{
    std::filesystem::path path = R"(C:\Program Files\ESTsoft)"; // Replace "your_directory_path" with the actual directory path

    auto executable_files = std::filesystem::recursive_directory_iterator(path)
        | std::views::filter([](const std::filesystem::directory_entry& entry) {
            return entry.is_regular_file() && entry.path().extension() == ".exe";
        });

    for (const auto& entry : executable_files) {
        std::cout << entry.path() << std::endl;
    }

    return 0;
}
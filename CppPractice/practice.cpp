#include <iostream>
#include <chrono>
#include <thread>

const int kSendTimeoutSeconds = 2;

int main() {

    printf("1) %s\n","narrow");
    printf("2) %s\n", L"wide");
    printf("3) %ws\n", L"wide");
    wprintf(L"4) %s\n","narrow");
    wprintf(L"5) %s\n", L"wide");
    wprintf(L"6) %ws\n", L"wide");

    //auto registeredTime = std::chrono::steady_clock::now();

    //std::this_thread::sleep_for(std::chrono::seconds(3));

    //auto currentTime = std::chrono::steady_clock::now();

    //
    //auto elapsedSeconds = std::chrono::duration_cast<std::chrono::seconds>(currentTime - registeredTime);

    //// 시간 비교 및 타임아웃 체크
    //if (elapsedSeconds > std::chrono::seconds(kSendTimeoutSeconds)) {
    //    std::cout << "타임아웃! 제한된 시간 내에 작업을 완료할 수 없습니다." << std::endl;
    //}
    //else {
    //    std::cout << "타임아웃 이전에 작업이 완료되었습니다." << std::endl;
    //}

    return 0;
}

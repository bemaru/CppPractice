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

    //// �ð� �� �� Ÿ�Ӿƿ� üũ
    //if (elapsedSeconds > std::chrono::seconds(kSendTimeoutSeconds)) {
    //    std::cout << "Ÿ�Ӿƿ�! ���ѵ� �ð� ���� �۾��� �Ϸ��� �� �����ϴ�." << std::endl;
    //}
    //else {
    //    std::cout << "Ÿ�Ӿƿ� ������ �۾��� �Ϸ�Ǿ����ϴ�." << std::endl;
    //}

    return 0;
}

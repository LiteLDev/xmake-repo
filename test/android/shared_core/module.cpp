#include "ll/api/utils/SystemUtils.h"

#include <stdexcept>
#include <string>
#include <thread>
#include <vector>

namespace {
void* constructorModule = ll::sys_utils::getCurrentModuleHandle();
void* constructorWorkerModule = [] {
    void* identity{};
    std::thread worker([&] { identity = ll::sys_utils::getCurrentModuleHandle(); });
    worker.join();
    return identity;
}();
int* closed{};
struct Receipt {
    ~Receipt() { if (closed) ++*closed; }
} receipt;
}

extern "C" {
__attribute__((visibility("default"))) void* module_identity() { return ll::sys_utils::getCurrentModuleHandle(); }
__attribute__((visibility("default"))) void* constructor_identity() { return constructorModule; }
__attribute__((visibility("default"))) void* constructor_worker_identity() { return constructorWorkerModule; }
__attribute__((visibility("default"))) void on_close(int* value) { closed = value; }
__attribute__((visibility("default"))) char const* module_name() { return P7_MODULE_NAME; }
__attribute__((visibility("default"))) void throw_from_module() { throw std::runtime_error(P7_MODULE_NAME); }
__attribute__((visibility("default"))) void append_from_module(std::vector<std::string>& data) {
    data.emplace_back(P7_MODULE_NAME);
    data.emplace_back("shared C++23 中文");
}
}

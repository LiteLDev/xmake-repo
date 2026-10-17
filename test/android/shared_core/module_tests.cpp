#include "ll/api/utils/SystemUtils.h"

#include <iostream>
#include <stdexcept>
#include <thread>
#include <vector>
#include <dlfcn.h>

namespace {
bool failNextClose{};
}
extern "C" int __real_dlclose(void*);
extern "C" int __wrap_dlclose(void* handle) {
    if (std::exchange(failNextClose, false)) {
        (void)::dlsym(RTLD_DEFAULT, "p7_fixture_injected_close_failure");
        return -1;
    }
    return __real_dlclose(handle);
}

namespace sys = ll::sys_utils;
void require(bool value, char const* message) { if (!value) throw std::runtime_error(message); }

int main(int argc, char** argv) try {
    require(argc == 3, "two fixture module paths required");
    int closedA{}, closedB{};
    sys::DynamicLibrary first, second;
    require(!first.load(argv[1]), "load A");
    require(!second.load(argv[2]), "load B");
    first.getAddress<void (*)(int*)>("on_close")(&closedA);
    second.getAddress<void (*)(int*)>("on_close")(&closedB);
    auto a = first.getAddress<void* (*)()>("module_identity")();
    auto b = second.getAddress<void* (*)()>("module_identity")();
    require(a && b && a != b && a != sys::getCurrentModuleHandle(), "distinct module identity");
    require(a == first.getAddress<void* (*)()>("constructor_identity")(), "constructor identity A");
    require(b == second.getAddress<void* (*)()>("constructor_identity")(), "constructor identity B");
    require(a == first.getAddress<void* (*)()>("constructor_worker_identity")(), "constructor worker identity A");
    require(b == second.getAddress<void* (*)()>("constructor_worker_identity")(), "constructor worker identity B");
    require(sys::getModuleHandle(first.getAddress("module_identity")) == a, "address lookup");
    require(sys::getModulePath(a)->filename() == std::filesystem::path(argv[1]).filename(), "module path");
    std::thread worker([&] {
        if (first.getAddress<void* (*)()>("module_identity")() != a) std::terminate();
    });
    worker.join();
    std::vector<std::string> values;
    first.getAddress<void (*)(std::vector<std::string>&)>("append_from_module")(values);
    second.getAddress<void (*)(std::vector<std::string>&)>("append_from_module")(values);
    require(values.size() == 4 && values[0] == "A" && values[2] == "B", "cross-SO containers");
    bool caught{};
    try { first.getAddress<void (*)()>("throw_from_module")(); }
    catch (std::runtime_error const& error) { caught = std::string_view(error.what()) == "A"; }
    require(caught, "cross-SO exception");
    require(first.load(argv[2]).has_value(), "refuse overwriting a live handle");
    auto old = first.handle();
    auto other = second.handle();
    failNextClose = true;
    bool moveFailed{};
    try { first = std::move(second); }
    catch (std::system_error const&) { moveFailed = true; }
    require(moveFailed && first.handle() == old && second.handle() == other
                && !closedA && !closedB, "failed move assignment preserves both owners");
    sys::DynamicLibrary moved(std::move(first));
    require(!first.handle() && moved.handle() == old, "move constructor transfers ownership");
    moved = std::move(second);
    require(closedA == 1 && !second.handle() && moved.handle(), "move assignment closes previous module");
    failNextClose = true;
    require(moved.free().has_value() && moved.handle() == other && !closedB, "failed close retains ownership");
    require(!moved.free() && !moved.handle() && closedB == 1, "close B once");
    require(!moved.free() && closedB == 1, "idempotent close");
    auto error = moved.load("/no/such/p7-fixture.so");
    require(error.has_value() && !moved.handle(), "failed load keeps empty ownership");
    require(std::string_view(error->what()).find("p7-fixture.so") != std::string_view::npos, "loader diagnostic");
    require(!moved.getAddress("missing"), "empty handle lookup");
    std::cout << "P7 original DynamicLibrary: module/constructor/thread identity, move/close, diagnostics, containers and exceptions passed\n";
    return 0;
} catch (std::exception const& error) {
    std::cerr << error.what() << '\n';
    return 1;
}

#include "ll/core/mod/ElfModule.h"

#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <stdexcept>

namespace {
void require(bool value, char const* message) {
    if (!value) throw std::runtime_error(message);
}

std::vector<uint8_t> read(char const* path) {
    std::ifstream stream(path, std::ios::binary);
    require(static_cast<bool>(stream), "cannot open ELF input");
    return {std::istreambuf_iterator<char>(stream), std::istreambuf_iterator<char>()};
}
} // namespace

int main(int argc, char** argv) try {
    require(argc == 3, "kernel and example ELF paths required");
    auto kernel = read(argv[1]);
    auto child = read(argv[2]);
    ll::android::ElfModule parent, example;
    char const* error{};
    require(ll::android::inspectElfModule(kernel, true, "libLeviLamina.so", {}, parent, error),
            "current constructor-based kernel rejected");
    require(ll::android::inspectElfModule(child, false, "libLeviLaminaP7Example.so", parent.prelinkNote, example, error),
            "current native example rejected");
    require(!ll::android::inspectElfModule(kernel, false, "libLeviLamina.so", {}, example, error),
            "kernel accepted as an ordinary Mod");
    require(!ll::android::inspectElfModule(child, false, "wrong.so", parent.prelinkNote, example, error),
            "wrong SONAME accepted");

    std::string wrongRuntime = parent.prelinkNote;
    constexpr std::string_view provider = "\"providerBuildId\":\"";
    auto identity = wrongRuntime.find(provider);
    require(identity != std::string::npos, "provider identity absent from note");
    auto& digit = wrongRuntime[identity + provider.size()];
    digit = digit == '0' ? '1' : '0';
    require(!ll::android::inspectElfModule(child, false, "libLeviLaminaP7Example.so", wrongRuntime, example, error),
            "different parent runtime accepted");

    constexpr std::string_view schema = "\"schemaVersion\":3";
    auto version = std::search(kernel.begin(), kernel.end(), schema.begin(), schema.end());
    require(version != kernel.end(), "schema 3 absent from producer ELF");
    version[schema.size() - 1] = '2';
    require(!ll::android::inspectElfModule(kernel, true, "libLeviLamina.so", {}, example, error),
            "obsolete schema 2 accepted");
    std::cout << "Production ELF reader contract checks passed\n";
    return 0;
} catch (std::exception const& error) {
    std::cerr << error.what() << '\n';
    return 1;
}

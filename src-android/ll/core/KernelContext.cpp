#include "ll/core/KernelContext.h"
#include <cstring>
#include <limits>
#include <new>

namespace ll::android {
bool KernelContext::initialize(pl::android::ModContext const& source) noexcept {
    std::lock_guard lock(mutex);
    if (context) return false;
    std::array values{source.id(), source.rootPath(), source.dataPath(), source.configPath(), source.resourcePath()};
    std::array<std::unique_ptr<char[]>, 5> copies;
    for (size_t i = 0; i < values.size(); ++i) {
        if (values[i].empty() || values[i].size() == std::numeric_limits<size_t>::max()) return false;
        copies[i].reset(new (std::nothrow) char[values[i].size() + 1]);
        if (!copies[i]) return false;
        std::memcpy(copies[i].get(), values[i].data(), values[i].size());
        copies[i][values[i].size()] = '\0';
    }
    for (size_t i = 0; i < values.size(); ++i) lengths[i] = values[i].size();
    text = std::move(copies);
    vm   = source.javaVm();
    context.emplace(source);
    return true;
}
void KernelContext::reset() noexcept {
    std::lock_guard lock(mutex);
    context.reset();
    for (auto& value : text) value.reset();
    lengths.fill(0);
    vm = nullptr;
}
void KernelContext::write(int32_t priority, std::string_view message, FallbackLog fallback) noexcept {
    std::lock_guard lock(mutex);
    if (context) {
        context->log(priority, message);
    } else if (fallback) {
        char terminated[4097];
        if (message.size() > sizeof(terminated) - 1) return;
        std::memcpy(terminated, message.data(), message.size());
        terminated[message.size()] = '\0';
        fallback(priority, terminated);
    }
}
KernelContext::View KernelContext::view() const noexcept {
    std::lock_guard lock(mutex);
    View            result{vm, {}};
    for (size_t i = 0; i < text.size(); ++i) {
        if (text[i]) result.identityAndPaths[i] = {text[i].get(), lengths[i]};
    }
    return result;
}
} // namespace ll::android

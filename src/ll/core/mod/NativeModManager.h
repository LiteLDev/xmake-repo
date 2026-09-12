#pragma once

#include <memory>
#include <mutex>
#include <string_view>

#include "ll/api/base/Containers.h"
#include "ll/api/mod/Manifest.h"
#include "ll/api/mod/ModManager.h"
#include "ll/api/mod/NativeMod.h"

namespace ll::mod {
class NativeModManager final : public ModManager {
public:
    using Handle = void*;

    NativeModManager();
    ~NativeModManager() override;

    std::shared_ptr<NativeMod> getModByHandle(Handle handle);

protected:
    Expected<> load(Manifest manifest) override;

    Expected<> unload(std::string_view name) override;

#if defined(LL_PLAT_A)
    Expected<> enable(std::string_view name) override;
#endif

private:
    mutable std::mutex                           mHandleMutex;
    DenseMap<Handle, std::shared_ptr<NativeMod>> handleMap;
    DenseMap<std::string, Error>                 mFailures;
};
} // namespace ll::mod

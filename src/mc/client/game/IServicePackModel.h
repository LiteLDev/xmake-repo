#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
struct PackIdVersion;
struct ServicePack;
// clang-format on

class IServicePackModel {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IServicePackModel();

    virtual void start() = 0;

    virtual float update() = 0;

    virtual void cancel(std::string const&) = 0;

    virtual bool matchingPackExists(::PackIdVersion const&) const = 0;

    virtual bool setPacks(std::vector<PackIdVersion>, bool, std::function<void()>, std::function<void()>) = 0;

    virtual void downloadPack(::PackIdVersion const&, ::Core::PathBuffer<std::string> const&) = 0;

    virtual bool isComplete() const = 0;

    virtual void onPacksReloaded(std::vector<ServicePack> const&) = 0;

    virtual std::optional<float> getDownloadTimeout() = 0;

    virtual std::optional<float> getMaxWaitTime() = 0;

    virtual ::IMinecraftEventing& getEventing() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class IServicePackModel {};
#endif // @header-generator platform

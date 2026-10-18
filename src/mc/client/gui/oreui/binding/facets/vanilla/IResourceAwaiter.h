#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class IResourcePackRepository;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace OreUI {

class IResourceAwaiter {
public:
    // IResourceAwaiter inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Status : uchar {
        NotWaiting     = 0,
        Waiting        = 1,
        NewlyCompleted = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResourceAwaiter() = default;

    virtual ::OreUI::IResourceAwaiter::Status updateStatus() = 0;

    virtual void refreshResources() = 0;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Status : uchar {
        NotWaiting     = 0,
        Waiting        = 1,
        NewlyCompleted = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResourceAwaiter() = default;

    virtual ::OreUI::IResourceAwaiter::Status updateStatus() = 0;

    virtual void refreshResources() = 0;
    // NOLINTEND
#else // @header-generator platform
    enum class Status : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI

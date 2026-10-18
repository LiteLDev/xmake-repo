#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class IScene {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScene() = default;

    virtual void onLoadFailed(char const*, char const*) = 0;

    virtual void onViewReused() = 0;

    virtual void onReusedViewReleased() = 0;

    virtual bool isInputEnabled() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IScene {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScene() = default;

    virtual void onLoadFailed(char const*, char const*) = 0;

    virtual void onViewReused() = 0;

    virtual void onReusedViewReleased() = 0;

    virtual bool isInputEnabled() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IScene {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

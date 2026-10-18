#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class IKeyboardProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void feedText(std::string const&) = 0;

    virtual ~IKeyboardProxy() = default;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IKeyboardProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void feedText(::std::string const& text) = 0;

    virtual ~IKeyboardProxy() = default;
    // NOLINTEND
};
#else // @header-generator platform
class IKeyboardProxy {};
#endif // @header-generator platform
#endif // @header-generator platform

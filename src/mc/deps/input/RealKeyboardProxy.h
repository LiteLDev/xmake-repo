#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/IKeyboardProxy.h"

class RealKeyboardProxy : public ::IKeyboardProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void feedText(std::string const&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/IKeyboardProxy.h"

class RealKeyboardProxy : public ::IKeyboardProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void feedText(::std::string const& text) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $feedText(::std::string const& text);
    // NOLINTEND
};
#else // @header-generator platform
class RealKeyboardProxy {};
#endif // @header-generator platform
#endif // @header-generator platform

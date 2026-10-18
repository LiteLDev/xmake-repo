#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct ToastIconData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>             iconId;
    ::ll::TypedStorage<8, 40, ::HashedString> iconTag;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct ToastIconData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>             iconId;
    ::ll::TypedStorage<8, 48, ::HashedString> iconTag;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ToastIconData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ToastIconData {};
#endif // @header-generator platform
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/input/InputMode.h"
#else // @header-generator platform
#endif // @header-generator platform

struct InputEntry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::InputMode>      mInputMode;
    ::ll::TypedStorage<8, 16, std::bitset<66>> mInputData;
    ::ll::TypedStorage<4, 8, ::Vec2>           mRawMoveVector;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk1256a7;
    ::ll::UntypedStorage<8, 16> mUnkbd66e3;
    ::ll::UntypedStorage<4, 8>  mUnk5ce573;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    InputEntry& operator=(InputEntry const&);
    InputEntry(InputEntry const&);
    InputEntry();
#endif // @header-generator platform
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/PackListType.h"

struct PackContentItemListPosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PackListType> mListType;
    ::ll::TypedStorage<4, 4, int>            mSubpackIndex;
    ::ll::TypedStorage<8, 8, ulong>          mPosition;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/PackListType.h"

struct PackContentItemListPosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PackListType> mListType;
    ::ll::TypedStorage<4, 4, int>            mSubpackIndex;
    ::ll::TypedStorage<8, 8, uint64>         mPosition;
    // NOLINTEND
};
#else // @header-generator platform
struct PackContentItemListPosition {};
#endif // @header-generator platform
#endif // @header-generator platform

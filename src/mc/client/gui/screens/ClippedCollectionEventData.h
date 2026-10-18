#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class UIPropertyBag;
// clang-format on

struct ClippedCollectionEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>             collectionNameHash;
    ::ll::TypedStorage<4, 4, int>              startIndex;
    ::ll::TypedStorage<4, 4, int>              endIndex;
    ::ll::TypedStorage<8, 8, ::UIPropertyBag*> propertyBag;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class UIPropertyBag;
// clang-format on

struct ClippedCollectionEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>             collectionNameHash;
    ::ll::TypedStorage<4, 4, int>              startIndex;
    ::ll::TypedStorage<4, 4, int>              endIndex;
    ::ll::TypedStorage<8, 8, ::UIPropertyBag*> propertyBag;
    // NOLINTEND
};
#else // @header-generator platform
struct ClippedCollectionEventData {};
#endif // @header-generator platform
#endif // @header-generator platform

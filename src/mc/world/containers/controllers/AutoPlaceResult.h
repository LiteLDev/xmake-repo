#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AutoPlaceResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> collectionName;
    ::ll::TypedStorage<4, 4, int>          collectionIndex;
    ::ll::TypedStorage<1, 1, bool>         slotEmpty;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk6ad71a;
    ::ll::UntypedStorage<4, 4>  mUnkcc0bf9;
    ::ll::UntypedStorage<1, 1>  mUnkec3cd5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AutoPlaceResult& operator=(AutoPlaceResult const&);
    AutoPlaceResult(AutoPlaceResult const&);
    AutoPlaceResult();
};

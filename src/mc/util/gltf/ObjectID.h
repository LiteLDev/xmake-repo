#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct ObjectID {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mValid;
    ::ll::TypedStorage<4, 4, int>  mID;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnkdbef11;
    ::ll::UntypedStorage<4, 4> mUnk34e7ea;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ObjectID& operator=(ObjectID const&);
    ObjectID(ObjectID const&);
    ObjectID();
#endif // @header-generator platform
};

} // namespace glTF

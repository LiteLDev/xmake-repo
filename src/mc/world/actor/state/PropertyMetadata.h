#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

class PropertyMetadata {
public:
    // PropertyMetadata inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ContainedType : uchar {
        None              = 255,
#else // @header-generator platform
    enum class ContainedType : schar {
        None              = -1,
#endif // @header-generator platform
        IntProperty       = 0,
        FloatProperty     = 1,
        BoolProperty      = 2,
        EnumIndexProperty = 3,
        Count             = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>                   mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>                   mName;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::PropertyMetadata::ContainedType> mType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                             mOverallIndex;
    ::ll::TypedStorage<8, 8, ulong>                             mTypeArrayIndex;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                            mOverallIndex;
    ::ll::TypedStorage<8, 8, uint64>                            mTypeArrayIndex;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                              mClientSync;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PropertyMetadata& operator=(PropertyMetadata const&);
    PropertyMetadata(PropertyMetadata const&);
    PropertyMetadata();
#else // @header-generator platform
#endif // @header-generator platform
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

class PropertyMetadata {
public:
    // PropertyMetadata inner types define
    enum class ContainedType : uchar {
        None              = 255,
        IntProperty       = 0,
        FloatProperty     = 1,
        BoolProperty      = 2,
        EnumIndexProperty = 3,
        Count             = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>                   mName;
    ::ll::TypedStorage<1, 1, ::PropertyMetadata::ContainedType> mType;
    ::ll::TypedStorage<8, 8, ulong>                             mOverallIndex;
    ::ll::TypedStorage<8, 8, ulong>                             mTypeArrayIndex;
    ::ll::TypedStorage<1, 1, bool>                              mClientSync;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyMetadata& operator=(PropertyMetadata const&);
    PropertyMetadata(PropertyMetadata const&);
    PropertyMetadata();
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/ai/village/POIType.h"

struct POIBlueprint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString> mName;
    ::ll::TypedStorage<8, 40, ::HashedString> mInitEvent;
    ::ll::TypedStorage<8, 40, ::HashedString> mEndEvent;
    ::ll::TypedStorage<4, 4, ::POIType>       mType;
    ::ll::TypedStorage<4, 4, float>           mRadius;
    ::ll::TypedStorage<8, 8, ulong>           mCapacity;
    ::ll::TypedStorage<8, 8, ulong>           mWeight;
    ::ll::TypedStorage<8, 40, ::HashedString> mSoundEvent;
    ::ll::TypedStorage<1, 1, bool>            mUseBoundingBox;
    // NOLINTEND

public:
    // prevent constructor by default
    POIBlueprint();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI POIBlueprint(std::string, ::POIType, float, bool, ulong, ulong, std::string, std::string, std::string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string, ::POIType, float, bool, ulong, ulong, std::string, std::string, std::string);
    // NOLINTEND
};

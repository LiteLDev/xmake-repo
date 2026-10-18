#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/ai/village/POIType.h"

struct POIBlueprint {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> mName;
    ::ll::TypedStorage<8, 40, ::HashedString> mInitEvent;
    ::ll::TypedStorage<8, 40, ::HashedString> mEndEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
    ::ll::TypedStorage<8, 48, ::HashedString> mInitEvent;
    ::ll::TypedStorage<8, 48, ::HashedString> mEndEvent;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::POIType>       mType;
    ::ll::TypedStorage<4, 4, float>           mRadius;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>           mCapacity;
    ::ll::TypedStorage<8, 8, ulong>           mWeight;
    ::ll::TypedStorage<8, 40, ::HashedString> mSoundEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>          mCapacity;
    ::ll::TypedStorage<8, 8, uint64>          mWeight;
    ::ll::TypedStorage<8, 48, ::HashedString> mSoundEvent;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>            mUseBoundingBox;
    // NOLINTEND

public:
    // prevent constructor by default
    POIBlueprint();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI POIBlueprint(std::string, ::POIType, float, bool, ulong, ulong, std::string, std::string, std::string);
#else // @header-generator platform
    MCAPI POIBlueprint(
        ::std::string name,
        ::POIType     type,
        float         radius,
        bool          useBoundingBox,
        uint64        capacity,
        uint64        weight,
        ::std::string soundEvent,
        ::std::string initEvent,
        ::std::string endEvent
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, ::POIType, float, bool, ulong, ulong, std::string, std::string, std::string);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string name,
        ::POIType     type,
        float         radius,
        bool          useBoundingBox,
        uint64        capacity,
        uint64        weight,
        ::std::string soundEvent,
        ::std::string initEvent,
        ::std::string endEvent
    );
#endif // @header-generator platform
    // NOLINTEND
};

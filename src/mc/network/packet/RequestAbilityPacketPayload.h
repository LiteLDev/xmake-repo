#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/AbilitiesIndex.h"

struct RequestAbilityPacketPayload {
public:
    // RequestAbilityPacketPayload inner types define
    enum class Type : uchar {
        Unset = 0,
        Bool  = 1,
        Float = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::AbilitiesIndex>                    mAbility;
    ::ll::TypedStorage<1, 1, ::RequestAbilityPacketPayload::Type> mValueType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::variant<bool, float>>           mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RequestAbilityPacketPayload(::AbilitiesIndex, bool);

    MCNAPI bool tryGetBool(bool&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AbilitiesIndex, bool);
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::variant<bool, float>>         mValue;
#endif // @header-generator platform
    // NOLINTEND
};

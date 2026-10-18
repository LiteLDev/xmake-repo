#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/packet/UpdateType.h"
#else // @header-generator platform
#endif // @header-generator platform

struct PlayerUpdateEntityOverridesPacketPayload {
public:
    // PlayerUpdateEntityOverridesPacketPayload inner types declare
    // clang-format off
    struct ClearOverride;
#if defined(LL_PLAT_A) // @header-generator platform
    struct RemoveOverride;
    struct IntOverride;
#else // @header-generator platform
#endif // @header-generator platform
    struct FloatOverride;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct IntOverride;
    struct RemoveOverride;
#endif // @header-generator platform
    // clang-format on

    // PlayerUpdateEntityOverridesPacketPayload inner types define
    struct ClearOverride {};
#if defined(LL_PLAT_A) // @header-generator platform

    struct RemoveOverride {};

    struct IntOverride {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mValue;
        // NOLINTEND
    };
#else // @header-generator platform
#endif // @header-generator platform

    struct FloatOverride {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mValue;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using Update = std::variant<
        PlayerUpdateEntityOverridesPacketPayload::ClearOverride,
        PlayerUpdateEntityOverridesPacketPayload::RemoveOverride,
        PlayerUpdateEntityOverridesPacketPayload::IntOverride,
        PlayerUpdateEntityOverridesPacketPayload::FloatOverride>;
#else // @header-generator platform
    struct IntOverride {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mValue;
        // NOLINTEND
    };

    struct RemoveOverride {};

    using Update = ::std::variant<
        ::PlayerUpdateEntityOverridesPacketPayload::ClearOverride,
        ::PlayerUpdateEntityOverridesPacketPayload::RemoveOverride,
        ::PlayerUpdateEntityOverridesPacketPayload::IntOverride,
        ::PlayerUpdateEntityOverridesPacketPayload::FloatOverride>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mId;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint> mPropertyIndex;
    ::ll::TypedStorage<4, 8, std::variant<PlayerUpdateEntityOverridesPacketPayload::ClearOverride, PlayerUpdateEntityOverridesPacketPayload::RemoveOverride, PlayerUpdateEntityOverridesPacketPayload::IntOverride, PlayerUpdateEntityOverridesPacketPayload::FloatOverride>> mUpdate;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerUpdateEntityOverridesPacketPayload(
        ::ActorUniqueID,
        uint,
        std::variant<
            PlayerUpdateEntityOverridesPacketPayload::ClearOverride,
            PlayerUpdateEntityOverridesPacketPayload::RemoveOverride,
            PlayerUpdateEntityOverridesPacketPayload::IntOverride,
            PlayerUpdateEntityOverridesPacketPayload::FloatOverride>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ActorUniqueID,
        uint,
        std::variant<
            PlayerUpdateEntityOverridesPacketPayload::ClearOverride,
            PlayerUpdateEntityOverridesPacketPayload::RemoveOverride,
            PlayerUpdateEntityOverridesPacketPayload::IntOverride,
            PlayerUpdateEntityOverridesPacketPayload::FloatOverride>
    );
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>            mPropertyIndex;
    ::ll::TypedStorage<
        4,
        8,
        ::std::variant<
            ::PlayerUpdateEntityOverridesPacketPayload::ClearOverride,
            ::PlayerUpdateEntityOverridesPacketPayload::RemoveOverride,
            ::PlayerUpdateEntityOverridesPacketPayload::IntOverride,
            ::PlayerUpdateEntityOverridesPacketPayload::FloatOverride>>
        mUpdate;
#endif // @header-generator platform
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/packet/UpdateType.h"

struct PlayerUpdateEntityOverridesPacketPayload {
public:
    // PlayerUpdateEntityOverridesPacketPayload inner types declare
    // clang-format off
    struct ClearOverride;
    struct RemoveOverride;
    struct IntOverride;
    struct FloatOverride;
    // clang-format on

    // PlayerUpdateEntityOverridesPacketPayload inner types define
    struct ClearOverride {};

    struct RemoveOverride {};

    struct IntOverride {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mValue;
        // NOLINTEND
    };

    struct FloatOverride {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mValue;
        // NOLINTEND
    };

    using Update = std::variant<
        PlayerUpdateEntityOverridesPacketPayload::ClearOverride,
        PlayerUpdateEntityOverridesPacketPayload::RemoveOverride,
        PlayerUpdateEntityOverridesPacketPayload::IntOverride,
        PlayerUpdateEntityOverridesPacketPayload::FloatOverride>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mId;
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
    // NOLINTEND
};

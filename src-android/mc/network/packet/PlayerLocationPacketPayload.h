#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"

struct PlayerLocationPacketPayload {
public:
    // PlayerLocationPacketPayload inner types declare
    // clang-format off
    struct CoordinatesLocation;
    struct HiddenLocation;
    // clang-format on

    // PlayerLocationPacketPayload inner types define
    enum class Type : uint {
        PLAYER_LOCATION_COORDINATES = 0,
        PLAYER_LOCATION_HIDE        = 1,
    };

    struct CoordinatesLocation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::PlayerLocationPacketPayload::Type> mType;
        ::ll::TypedStorage<4, 12, ::Vec3>                             mPos;
        // NOLINTEND
    };

    struct HiddenLocation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::PlayerLocationPacketPayload::Type> mType;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mId;
    ::ll::TypedStorage<4, 20, std::variant<PlayerLocationPacketPayload::CoordinatesLocation, PlayerLocationPacketPayload::HiddenLocation>> mLocation;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerLocationPacketPayload(::PlayerLocationPacketPayload::Type, ::ActorUniqueID const&, ::Vec3 const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerLocationPacketPayload::Type, ::ActorUniqueID const&, ::Vec3 const&);
    // NOLINTEND
};

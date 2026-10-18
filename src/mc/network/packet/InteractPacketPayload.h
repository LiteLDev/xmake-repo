#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"

struct InteractPacketPayload {
public:
    // InteractPacketPayload inner types define
    enum class Action : uchar {
        Invalid        = 0,
        StopRiding     = 3,
        InteractUpdate = 4,
        NpcOpen        = 5,
        OpenInventory  = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::InteractPacketPayload::Action> mAction;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                mTargetId;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, std::optional<Vec3>>            mPos;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InteractPacketPayload(::InteractPacketPayload::Action, ::ActorRuntimeID, std::optional<Vec3> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::InteractPacketPayload::Action, ::ActorRuntimeID, std::optional<Vec3> const&);
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>        mPos;
#endif // @header-generator platform
    // NOLINTEND
};

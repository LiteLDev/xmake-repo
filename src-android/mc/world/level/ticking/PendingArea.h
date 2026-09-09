#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/UUID.h"
#include "mc/util/Bounds.h"
#include "mc/world/level/ticking/TickingAreaLoadMode.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
struct DimensionType;
struct TickingAreaDescription;
// clang-format on

struct PendingArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>          mUID;
    ::ll::TypedStorage<8, 24, std::string>          mName;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>       mEntityId;
    ::ll::TypedStorage<4, 48, ::Bounds>             mBounds;
    ::ll::TypedStorage<4, 4, float>                 mMaxDistToPlayers;
    ::ll::TypedStorage<1, 1, bool>                  mIsCircle;
    ::ll::TypedStorage<1, 1, bool>                  mAlwaysActive;
    ::ll::TypedStorage<1, 1, ::TickingAreaLoadMode> mLoadMode;
    ::ll::TypedStorage<1, 1, bool>                  mCreated;
    ::ll::TypedStorage<8, 16, std::optional<ulong>> mScope;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingArea& operator=(PendingArea const&);
    PendingArea();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::TickingAreaDescription getDescription() const;
    // NOLINTEND
};

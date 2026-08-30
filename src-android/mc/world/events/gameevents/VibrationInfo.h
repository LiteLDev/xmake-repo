#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class GameEvent;
class Level;
struct GameEventContext;
// clang-format on

class VibrationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                   mDistance;
    ::ll::TypedStorage<4, 12, ::BlockPos>                             mPos;
    ::ll::TypedStorage<8, 16, std::optional<ActorUniqueID>>           mSourceID;
    ::ll::TypedStorage<8, 16, std::optional<ActorUniqueID>>           mProjectileOwnerID;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<const GameEvent>> mVibration;
    // NOLINTEND

public:
    // prevent constructor by default
    VibrationInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void load(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void save(::CompoundTag&) const;
    // NOLINTEND
};

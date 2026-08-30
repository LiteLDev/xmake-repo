#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationInfo.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompoundTag;
class DataLoadHelper;
class GameEvent;
struct GameEventContext;
// clang-format on

class VibrationSelector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Tick>                        mFirstCandidateTick;
    ::ll::TypedStorage<8, 64, std::optional<VibrationInfo>> mCandidateVibrationInfo;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addCandidate(::Tick, ::GameEvent const&, ::GameEventContext const&, ::BlockPos const&);
    // NOLINTEND
};

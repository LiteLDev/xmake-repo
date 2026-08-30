#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/actor/ActorHistory.h"

// auto generated forward declare list
// clang-format off
class ActorHistory;
class EntityContext;
class IEntitySystems;
struct RewindSimulationDebugContext;
// clang-format on

namespace RewindSimulation {

struct RewindSimulationInfo {
public:
    // RewindSimulationInfo inner types declare
    // clang-format off
    struct History;
    struct ConstHistory;
    // clang-format on

    // RewindSimulationInfo inner types define
    struct History {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>                mStartSnapshot;
        ::ll::TypedStorage<8, 8, ::ActorHistory&> mHistory;
        // NOLINTEND

    public:
        // prevent constructor by default
        History& operator=(History const&);
        History(History const&);
        History();
    };

    struct ConstHistory {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>                      mStartSnapshot;
        ::ll::TypedStorage<8, 8, ::ActorHistory const&> mHistory;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConstHistory& operator=(ConstHistory const&);
        ConstHistory(ConstHistory const&);
        ConstHistory();
    };

    using HistoryVariant = std::
        variant<RewindSimulation::RewindSimulationInfo::History, RewindSimulation::RewindSimulationInfo::ConstHistory>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<1, 32> mRewindEntity;
    ::ll::TypedStorage<8, 24, std::variant<RewindSimulation::RewindSimulationInfo::History, RewindSimulation::RewindSimulationInfo::ConstHistory>> mHistory;
    ::ll::TypedStorage<8, 8, ulong> mStartTick;
    ::ll::TypedStorage<8, 8, ulong> mEndTick;
    ::ll::TypedStorage<8, 8, ::EntityContext const&> mLiveEntity;
    ::ll::TypedStorage<8, 8, ::IEntitySystems&> mEntitySystems;
    ::ll::TypedStorage<8, 8, ::RewindSimulationDebugContext*> mRewindDebugContext;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RewindSimulationInfo& operator=(RewindSimulationInfo const&);
    RewindSimulationInfo(RewindSimulationInfo const&);
    RewindSimulationInfo();
};

} // namespace RewindSimulation

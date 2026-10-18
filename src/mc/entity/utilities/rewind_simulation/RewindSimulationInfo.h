#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform

namespace RewindSimulation {

struct RewindSimulationInfo {
public:
    // RewindSimulationInfo inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct History;
#else // @header-generator platform
#endif // @header-generator platform
    struct ConstHistory;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct History;
#endif // @header-generator platform
    // clang-format on

    // RewindSimulationInfo inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    struct ConstHistory {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 8>                      mStartSnapshot;
        ::ll::TypedStorage<8, 8, ::ActorHistory const&> mHistory;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk19b865;
        ::ll::UntypedStorage<8, 8> mUnkf356b8;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        ConstHistory& operator=(ConstHistory const&);
        ConstHistory(ConstHistory const&);
        ConstHistory();
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using HistoryVariant = std::
        variant<RewindSimulation::RewindSimulationInfo::History, RewindSimulation::RewindSimulationInfo::ConstHistory>;
#else // @header-generator platform
    struct History {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk82dc3f;
        ::ll::UntypedStorage<8, 8> mUnk310db5;
        // NOLINTEND

    public:
        // prevent constructor by default
        History& operator=(History const&);
        History(History const&);
        History();
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<1, 32> mRewindEntity;
    ::ll::TypedStorage<8, 24, std::variant<RewindSimulation::RewindSimulationInfo::History, RewindSimulation::RewindSimulationInfo::ConstHistory>> mHistory;
    ::ll::TypedStorage<8, 8, ulong> mStartTick;
    ::ll::TypedStorage<8, 8, ulong> mEndTick;
    ::ll::TypedStorage<8, 8, ::EntityContext const&> mLiveEntity;
    ::ll::TypedStorage<8, 8, ::IEntitySystems&> mEntitySystems;
    ::ll::TypedStorage<8, 8, ::RewindSimulationDebugContext*> mRewindDebugContext;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkde174f;
    ::ll::UntypedStorage<8, 24> mUnk23deea;
    ::ll::UntypedStorage<8, 8>  mUnk81c4c8;
    ::ll::UntypedStorage<8, 8>  mUnk25511a;
    ::ll::UntypedStorage<8, 8>  mUnk6132e3;
    ::ll::UntypedStorage<8, 8>  mUnk9f0057;
    ::ll::UntypedStorage<8, 8>  mUnkaa6ec9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RewindSimulationInfo& operator=(RewindSimulationInfo const&);
    RewindSimulationInfo(RewindSimulationInfo const&);
    RewindSimulationInfo();
};

} // namespace RewindSimulation

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/SimulationType.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class ILocalServerPauseCommunication;
class Option;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class PauseManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>             mPauseIntent;
    ::ll::TypedStorage<1, 1, bool>             mFeatureEnabled;
    ::ll::TypedStorage<1, 1, ::SimulationType> mSimulationType;
    ::ll::TypedStorage<8, 8, ::Option*>        mPauseFeatureOption;
    ::ll::UntypedStorage<8, 88>                mPauseStateChangeConnector;
    ::ll::UntypedStorage<1, 16>                mEntityRegistry;
    ::ll::UntypedStorage<8, 40>                mSimulationTypeChangePublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    PauseManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PauseManager(::gsl::not_null<StackRefResult<EntityRegistry>> const&);

    MCNAPI ::Bedrock::PubSub::Connector<void(bool)>& getPauseStateChangeConnector();

    MCNAPI void initializeOption(::Option*);

    MCNAPI bool requestInGamePause(::ILocalServerPauseCommunication&, bool) const;

    MCNAPI void setPauseFeatureEnabled(bool);

    MCNAPI void setPauseIntent(bool);

    MCNAPI ~PauseManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SimulationType getSimulationType(::StackRefResult<const PauseManager>);

    MCNAPI static void setSimulationType(::StackRefResult<PauseManager>, ::SimulationType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SimulationType const& DEFAULT_SIMULATION_TYPE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<StackRefResult<EntityRegistry>> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/SimulationType.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityRegistry;
#else // @header-generator platform
#endif // @header-generator platform
class ILocalServerPauseCommunication;
#if defined(LL_PLAT_A) // @header-generator platform
class Option;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PauseManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>             mPauseIntent;
    ::ll::TypedStorage<1, 1, bool>             mFeatureEnabled;
    ::ll::TypedStorage<1, 1, ::SimulationType> mSimulationType;
    ::ll::TypedStorage<8, 8, ::Option*>        mPauseFeatureOption;
    ::ll::UntypedStorage<8, 88>                mPauseStateChangeConnector;
    ::ll::UntypedStorage<1, 16>                mEntityRegistry;
    ::ll::UntypedStorage<8, 40>                mSimulationTypeChangePublisher;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>   mUnk994f71;
    ::ll::UntypedStorage<1, 1>   mUnkf88b2a;
    ::ll::UntypedStorage<1, 1>   mUnk99ce49;
    ::ll::UntypedStorage<8, 8>   mUnkd10131;
    ::ll::UntypedStorage<8, 128> mUnk2c9d89;
    ::ll::UntypedStorage<8, 16>  mUnk903eb4;
    ::ll::UntypedStorage<8, 48>  mUnk5b37dc;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PauseManager& operator=(PauseManager const&);
    PauseManager(PauseManager const&);
#endif // @header-generator platform
    PauseManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PauseManager(::gsl::not_null<StackRefResult<EntityRegistry>> const&);

    MCNAPI ::Bedrock::PubSub::Connector<void(bool)>& getPauseStateChangeConnector();

    MCNAPI void initializeOption(::Option*);

    MCNAPI bool requestInGamePause(::ILocalServerPauseCommunication&, bool) const;

    MCNAPI void setPauseFeatureEnabled(bool);

    MCNAPI void setPauseIntent(bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI bool requestInGamePause(::ILocalServerPauseCommunication& pauseCommunication, bool status) const;
#endif
#endif // @header-generator platform

    MCNAPI ~PauseManager();
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DimensionManager;
class IServerPlayerSleepManagerConnector;
class IWeatherManagerProxy;
class LevelEventCoordinator;
class LevelEventManager;
// clang-format on

class WeatherManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                      mDimensionManager;
    ::ll::UntypedStorage<8, 24>                                                      mLevelEventCoordinator;
    ::ll::UntypedStorage<8, 24>                                                      mLevelEventManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IWeatherManagerProxy>>> mWeatherManagerProxy;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mOnWakeUpAllPlayersSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    WeatherManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WeatherManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventCoordinator>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventManager>>,
        std::unique_ptr<IWeatherManagerProxy>
    );

    MCNAPI void registerWithServerPlayerSleepManager(::IServerPlayerSleepManagerConnector&);

    MCNAPI void stopWeather();

    MCNAPI void updateWeather(float, int, float, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventCoordinator>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventManager>>,
        std::unique_ptr<IWeatherManagerProxy>
    );
    // NOLINTEND
};

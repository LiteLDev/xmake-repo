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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                                      mDimensionManager;
    ::ll::UntypedStorage<8, 24>                                                      mLevelEventCoordinator;
    ::ll::UntypedStorage<8, 24>                                                      mLevelEventManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IWeatherManagerProxy>>> mWeatherManagerProxy;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mOnWakeUpAllPlayersSubscription;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> const>      mDimensionManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> const> mLevelEventCoordinator;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> const>     mLevelEventManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IWeatherManagerProxy>>>    mWeatherManagerProxy;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnWakeUpAllPlayersSubscription;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WeatherManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI WeatherManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventCoordinator>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventManager>>,
        std::unique_ptr<IWeatherManagerProxy>
#else // @header-generator platform
    MCAPI WeatherManager(
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>      dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> levelEventCoordinator,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager>     levelEventManager,
        ::std::unique_ptr<::IWeatherManagerProxy>              weatherManagerProxy
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerWithServerPlayerSleepManager(::IServerPlayerSleepManagerConnector&);
#else // @header-generator platform
    MCAPI void
    registerWithServerPlayerSleepManager(::IServerPlayerSleepManagerConnector& serverPlayerSleepManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void stopWeather();
#else // @header-generator platform
    MCAPI void stopWeather();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updateWeather(float, int, float, int);
#else // @header-generator platform
    MCAPI void updateWeather(float rainLevel, int rainTime, float lightningLevel, int lightningTime);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventCoordinator>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventManager>>,
        std::unique_ptr<IWeatherManagerProxy>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>      dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> levelEventCoordinator,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager>     levelEventManager,
        ::std::unique_ptr<::IWeatherManagerProxy>              weatherManagerProxy
#endif // @header-generator platform
    );
    // NOLINTEND
};

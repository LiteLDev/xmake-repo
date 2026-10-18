#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class ContentCatalogService;
class FeatureToggles;
class FlightingService;
class IAdvancedGraphicsOptions;
class IContentAccessibilityProvider;
class IContentManager;
class IDataDrivenUIRepository;
class IEntitlementManager;
class IGameModuleApp;
class ILayoutImageSource;
class ILevelListCache;
class IMinecraftGame;
class ISceneStackNavigator;
class ISplitScreenChangedPublisher;
class IThirdPartyServerRepository;
class LayoutServiceSystem;
class MarketplaceServicesManager;
class OptionRegistry;
class PlayerMessagingService;
class ProfanityContext;
struct IGameServerShutdown;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class LazyLayoutImageSource; }
namespace Parties { class PartySystem; }
namespace Realms { class RealmsSystem; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class SocialSystem; }
namespace World { class WorldSystem; }
namespace flighting { class TreatmentToggles; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class ContentCatalogService;
class FeatureToggles;
class FlightingService;
class IAdvancedGraphicsOptions;
class IDataDrivenUIRepository;
class IMinecraftGame;
class ISceneStackNavigator;
class LayoutServiceSystem;
namespace OreUI { class LazyLayoutImageSource; }
namespace flighting { class TreatmentToggles; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class GameDependencies {
public:
    // GameDependencies inner types define
    using GamePtr = ::gsl::not_null<Bedrock::NonOwnerPointer<IMinecraftGame>>;

    using GraphicsPtr = ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>>;

    using PlatformPtr = ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>;

    using FeaturePtr = ::gsl::not_null<Bedrock::NonOwnerPointer<FeatureToggles>>;

    using DataDrivenUIRepositoryPtr = ::gsl::not_null<Bedrock::NonOwnerPointer<IDataDrivenUIRepository>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                   mGame;
    ::ll::UntypedStorage<8, 24>                                                   mGraphicsOptions;
    ::ll::UntypedStorage<8, 24>                                                   mPlatform;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<flighting::TreatmentToggles>> mFlighting;
    ::ll::UntypedStorage<8, 24>                                                   mFeatureToggles;
    ::ll::UntypedStorage<8, 24>                                                   mDataDrivenUIRepository;
    ::ll::TypedStorage<8, 8, ::ISceneStackNavigator&>                             mSceneStackNavigator;
    ::ll::UntypedStorage<8, 24>                                                   mLayoutServiceSystem;
    ::ll::TypedStorage<8, 16, std::shared_ptr<OreUI::LazyLayoutImageSource>>      mLayoutImageSource;
    // NOLINTEND

public:
    // prevent constructor by default
    GameDependencies& operator=(GameDependencies const&);
    GameDependencies(GameDependencies const&);
    GameDependencies();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameDependencies(::OreUI::GameDependencies&&);

    MCNAPI GameDependencies(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IMinecraftGame>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>> const&,
        ::flighting::TreatmentToggles&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FeatureToggles>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IDataDrivenUIRepository>> const&,
        ::ISceneStackNavigator&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LayoutServiceSystem>> const&,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>>()>
    );

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IContentAccessibilityProvider>> getAccessibilityProvider() const;

    MCNAPI ::IContentManager& getContentManager() const;

    MCNAPI ::IDataDrivenUIRepository& getDataDrivenUIRepository() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>> getEntitlementManager() const;

    MCNAPI ::FeatureToggles& getFeatureToggles() const;

    MCNAPI ::FlightingService& getFlightingService() const;

    MCNAPI ::IGameModuleApp& getGameModule() const;

    MCNAPI ::IGameServerShutdown& getGameServerShutdown() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ILayoutImageSource>> getLayoutImageSource() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<LayoutServiceSystem>> getLayoutServiceSystem() const;

    MCNAPI ::ILevelListCache& getLevelListCache() const;

    MCNAPI ::MarketplaceServicesManager& getMarketplaceServicesManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>>
    getMultiplayerServiceManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>> getOreUIResourceAllowList() const;

    MCNAPI ::Bedrock::NonOwnerPointer<Parties::PartySystem> getPartySystem() const;

    MCNAPI ::AppPlatform& getPlatform() const;

    MCNAPI ::PlayerMessagingService& getPlayerMessagingService() const;

    MCNAPI std::shared_ptr<OptionRegistry> getPrimaryUserOptions() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>> getProfanityContext() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsSystem>> getRealmsSystem() const;

    MCNAPI ::ISceneStackNavigator& getSceneStackNavigator() const;

    MCNAPI ::Social::SocialSystem& getSocialSystem() const;

    MCNAPI ::ISplitScreenChangedPublisher& getSplitScreenPublisher() const;

    MCNAPI ::World::WorldSystem& getWorldSystem() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies&&);

    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IMinecraftGame>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>> const&,
        ::flighting::TreatmentToggles&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FeatureToggles>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IDataDrivenUIRepository>> const&,
        ::ISceneStackNavigator&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LayoutServiceSystem>> const&,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>>()>
    );
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class GameDependencies {
public:
    // GameDependencies inner types define
    using GamePtr = ::Bedrock::NotNullNonOwnerPtr<::IMinecraftGame>;

    using GraphicsPtr = ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions>;

    using PlatformPtr = ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>;

    using FeaturePtr = ::Bedrock::NotNullNonOwnerPtr<::FeatureToggles>;

    using DataDrivenUIRepositoryPtr = ::Bedrock::NotNullNonOwnerPtr<::IDataDrivenUIRepository>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IMinecraftGame>>           mGame;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions>> mGraphicsOptions;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>>              mPlatform;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::flighting::TreatmentToggles>>    mFlighting;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FeatureToggles>>           mFeatureToggles;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IDataDrivenUIRepository>>  mDataDrivenUIRepository;
    ::ll::TypedStorage<8, 8, ::ISceneStackNavigator&>                                    mSceneStackNavigator;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LayoutServiceSystem>>      mLayoutServiceSystem;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::LazyLayoutImageSource>>         mLayoutImageSource;
    // NOLINTEND

public:
    // prevent constructor by default
    GameDependencies& operator=(GameDependencies const&);
    GameDependencies(GameDependencies const&);
    GameDependencies();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameDependencies(::OreUI::GameDependencies&&);

    MCAPI GameDependencies(
        ::Bedrock::NotNullNonOwnerPtr<::IMinecraftGame> const&                    game,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const&          graphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform> const&                       platform,
        ::flighting::TreatmentToggles&                                            flighting,
        ::Bedrock::NotNullNonOwnerPtr<::FeatureToggles> const&                    features,
        ::Bedrock::NotNullNonOwnerPtr<::IDataDrivenUIRepository> const&           dataDrivenUIRepository,
        ::ISceneStackNavigator&                                                   sceneStackNavigator,
        ::Bedrock::NotNullNonOwnerPtr<::LayoutServiceSystem> const&               layoutServiceSystem,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService>()> contentCatalogServiceProvider
    );

    MCAPI ::FlightingService& getFlightingService() const;

    MCAPI ~GameDependencies();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies&&);

    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IMinecraftGame> const&                    game,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const&          graphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform> const&                       platform,
        ::flighting::TreatmentToggles&                                            flighting,
        ::Bedrock::NotNullNonOwnerPtr<::FeatureToggles> const&                    features,
        ::Bedrock::NotNullNonOwnerPtr<::IDataDrivenUIRepository> const&           dataDrivenUIRepository,
        ::ISceneStackNavigator&                                                   sceneStackNavigator,
        ::Bedrock::NotNullNonOwnerPtr<::LayoutServiceSystem> const&               layoutServiceSystem,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService>()> contentCatalogServiceProvider
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class GameDependencies {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

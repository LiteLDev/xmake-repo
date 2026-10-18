#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/oreui/LiveViewCollection.h"
#include "mc/client/gui/oreui/resources/TemporaryTextureHolder.h"
#include "mc/client/gui/oreui/routing/RouterConfiguration.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IFileAccess;
class IGamefaceTextInputProxy;
class IOptionRegistry;
class ISceneStack;
class SceneFactory;
class TaskGroup;
struct TextBoxStateChange;
namespace Core { class FileSystem; }
namespace Gameface { class ResourceHandlerBroker; }
namespace Input::Debug { class ISplitscreenRedirect; }
namespace OreUI { class FacetRegistryFactory; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class IRouteMatcher; }
namespace OreUI { class IRoutePrerequisiteHandler; }
namespace OreUI { class Library; }
namespace OreUI { class ResourceAllowList; }
namespace OreUI { class Router; }
namespace OreUI { class RouterEventing; }
namespace OreUI { class SceneProvider; }
namespace OreUI { struct DebugData; }
namespace OreUI { struct LibraryFactoryArguments; }
namespace OreUI { struct RegisterResourceHandlersArguments; }
namespace OreUI { struct ResourceHandlerFactory; }
namespace OreUI { struct ResourceHandlerFactoryArguments; }
namespace OreUI::Debug { class DevServerListener; }
namespace OreUI::Detail { class ViewContextFactory; }
namespace mce { class RenderContext; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/oreui/LiveViewCollection.h"
#include "mc/client/gui/oreui/resources/TemporaryTextureHolder.h"
#include "mc/client/gui/oreui/routing/RouterConfiguration.h"
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IFileAccess;
class IOptionRegistry;
class ISceneStack;
class SceneFactory;
namespace Core { class FileSystem; }
namespace Gameface { class ResourceHandlerBroker; }
namespace Input::Debug { class ISplitscreenRedirect; }
namespace OreUI { class FacetRegistryFactory; }
namespace OreUI { class IRoutePrerequisiteHandler; }
namespace OreUI { class Library; }
namespace OreUI { class ResourceAllowList; }
namespace OreUI { class Router; }
namespace OreUI { class RouterEventing; }
namespace OreUI { class SceneProvider; }
namespace OreUI { struct DebugData; }
namespace OreUI { struct LibraryFactoryArguments; }
namespace OreUI { struct RegisterResourceHandlersArguments; }
namespace OreUI { struct ResourceHandlerFactory; }
namespace OreUI { struct ResourceHandlerFactoryArguments; }
namespace OreUI::Debug { class DevServerListener; }
namespace OreUI::Detail { class ViewContextFactory; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace OreUI {

class OreUISystem {
public:
    // OreUISystem inner types declare
    // clang-format off
    struct OreUISystemDependencies;
    struct Impl;
    struct CallbackEntry;
    // clang-format on

    // OreUISystem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct OreUISystemDependencies {
    public:
        // OreUISystemDependencies inner types define
        using ResourceHandlerBrokerFactory = ::brstd::move_only_function<
            std::unique_ptr<Gameface::ResourceHandlerBroker>(const OreUI::RegisterResourceHandlersArguments&) const>;
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct OreUISystemDependencies {
    public:
        // OreUISystemDependencies inner types define
        using ResourceHandlerBrokerFactory = ::brstd::move_only_function<::std::unique_ptr<
            ::Gameface::ResourceHandlerBroker>(::OreUI::RegisterResourceHandlersArguments const&) const>;
#else // @header-generator platform
    struct OreUISystemDependencies {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        using LibraryFactory =
            ::brstd::move_only_function<std::unique_ptr<OreUI::Library>(OreUI::LibraryFactoryArguments&&) const>;
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        using LibraryFactory =
            ::brstd::move_only_function<::std::unique_ptr<::OreUI::Library>(::OreUI::LibraryFactoryArguments&&) const>;
#else // @header-generator platform
    struct Impl {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        using SceneProviderFactory = ::brstd::move_only_function<std::unique_ptr<OreUI::SceneProvider>(
            const gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>&,
            std::unique_ptr<OreUI::FacetRegistryFactory>,
            std::unique_ptr<OreUI::Detail::ViewContextFactory>,
            OreUI::Library&
        ) const>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64>                                         mCreateResourceHandlerBroker;
        ::ll::UntypedStorage<8, 64>                                         mCreateLibrary;
        ::ll::UntypedStorage<8, 64>                                         mSceneProviderFactory;
        ::ll::TypedStorage<8, 200, ::OreUI::RouterConfiguration>            mRouterConfiguration;
        ::ll::UntypedStorage<1, 24>                                         mPackagePath;
        ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::ResourceAllowList>> mAllowList;
        ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::DebugData>>         mDebugData;
        ::ll::UntypedStorage<8, 48>                                         mShowDebugToast;
        ::ll::TypedStorage<8, 24, ::OreUI::LiveViewCollection>              mLiveViewCollection;
        ::ll::UntypedStorage<8, 24>                                         mDebugSplitscreenInputRedirect;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~OreUISystemDependencies();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::brstd::move_only_function<std::unique_ptr<OreUI::Library>(OreUI::LibraryFactoryArguments&&)
                                                      const>
            createLibraryFactory(
                ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FileSystem>>,
                ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>
            );

        MCNAPI static ::brstd::move_only_function<
            std::unique_ptr<Gameface::ResourceHandlerBroker>(const OreUI::RegisterResourceHandlersArguments&) const>
        createResourceHandlerBrokerFactory(::OreUI::ResourceHandlerFactoryArguments const&);

        MCNAPI static ::OreUI::ResourceHandlerFactory
        createResourceHandlerFactory(::OreUI::ResourceHandlerFactoryArguments const&);

        MCNAPI static ::brstd::move_only_function<std::unique_ptr<OreUI::SceneProvider>(
            const gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>&,
            std::unique_ptr<OreUI::FacetRegistryFactory>,
            std::unique_ptr<OreUI::Detail::ViewContextFactory>,
            OreUI::Library&
        ) const>
        createSceneProviderFactory(::ui::ScreenTechStackSelector&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>                                   mResourceAllowList;
        ::ll::UntypedStorage<8, 64>                                   mCreateSceneProvider;
        ::ll::TypedStorage<8, 200, ::OreUI::RouterConfiguration>      mRouterConfiguration;
        ::ll::TypedStorage<8, 72, ::Gameface::TemporaryTextureHolder> mTemporaryTextureHolder;
        ::ll::UntypedStorage<8, 16>                                   mDebugData;
        ::ll::UntypedStorage<8, 48>                                   mShowDebugToast;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl();
    };

    struct CallbackEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> token;
        ::ll::UntypedStorage<8, 48> callback;
        // NOLINTEND

    public:
        // prevent constructor by default
        CallbackEntry& operator=(CallbackEntry const&);
        CallbackEntry(CallbackEntry const&);
        CallbackEntry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<OreUI::OreUISystem::Impl>>> mImpl;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::Library>>                            mLibrary;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::Debug::DevServerListener>>           mDevServerListener;
    ::ll::TypedStorage<1, 1, bool>                                                       mAppWillRestart;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::OreUISystem::CallbackEntry>> mRouteConfigurationChangeCallbacks;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>>     mOptionSubscriptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mFlightingTogglesTrialMode;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesFriendsDrawerOnMultipleScreens;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesAccessibilitySettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesGameSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesLanguageSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesGeneralSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesAudioSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesAccountSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesVideoSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesKeyboardAndMouseSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesMultiplayerScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesPreviewSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesStorageSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesTouchSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesCreatorSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesNewSettingsInGame;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesNewSettingsOnThirdPartyServers;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesControllerScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesCloudStorageManager;
    // NOLINTEND

public:
    // prevent constructor by default
    OreUISystem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit OreUISystem(::OreUI::OreUISystem::OreUISystemDependencies&&);

    MCNAPI bool assetsInitialized() const;

    MCNAPI void clearUnusedCachedViews(::SubClientId);

    MCNAPI std::unique_ptr<OreUI::IRouteMatcher>
    createInGameRouteMatcher(::SceneFactory&, ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&) const;

    MCNAPI std::unique_ptr<OreUI::Router> createInGameRouter(
        std::unique_ptr<OreUI::IRoutePrerequisiteHandler>,
        std::unique_ptr<OreUI::RouterEventing>,
        ::SceneFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&
    ) const;

    MCNAPI std::unique_ptr<OreUI::IRouteMatcher>
    createOutOfGameRouteMatcher(::SceneFactory&, ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&) const;

    MCNAPI std::unique_ptr<OreUI::Router> createOutOfGameRouter(
        std::unique_ptr<OreUI::IRoutePrerequisiteHandler>,
        std::unique_ptr<OreUI::RouterEventing>,
        ::SceneFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&
    ) const;

    MCNAPI std::unique_ptr<OreUI::SceneProvider> createSceneProvider(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        std::unique_ptr<OreUI::FacetRegistryFactory>,
        std::unique_ptr<OreUI::Detail::ViewContextFactory>
    ) const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>> getResourceAllowList();

    MCNAPI std::unique_ptr<IGamefaceTextInputProxy> getTextInputProxy();

    MCNAPI void initializeAssetsAsynchronously(::TaskGroup&, ::Core::Path const&);

    MCNAPI void initializeRendering(::Bedrock::NonOwnerPointer<mce::ShaderGroup> const&, ::mce::RenderContext&);

    MCNAPI void initializeViewsCoordinator();

    MCNAPI void onActiveResourcePacksChanged();

    MCNAPI void onAppPreSuspended(::mce::RenderContext&);

    MCNAPI void onAppResumed(::Bedrock::NonOwnerPointer<mce::ShaderGroup> const&);

    MCNAPI void onAppWillRestart();

    MCNAPI void onKeyboardDismissed();

    MCNAPI void onTrialModeChanged();

    MCNAPI void registerOptionObservers(::IOptionRegistry&);

    MCNAPI void registerRouteConfigurationChangeCallback(void*, std::function<void()> const&);

    MCNAPI void setTextBoxState(::TextBoxStateChange const&);

    MCNAPI void unregisterRouteConfigurationChangeCallback(void*);

    MCNAPI void update(double);

    MCNAPI ~OreUISystem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::OreUISystem::OreUISystemDependencies&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        using SceneProviderFactory = ::brstd::move_only_function<::std::unique_ptr<::OreUI::SceneProvider>(
            ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&,
            ::std::unique_ptr<::OreUI::FacetRegistryFactory>,
            ::std::unique_ptr<::OreUI::Detail::ViewContextFactory>,
            ::OreUI::Library&
        ) const>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            64,
            ::brstd::move_only_function<::std::unique_ptr<
                ::Gameface::ResourceHandlerBroker>(::OreUI::RegisterResourceHandlersArguments const&) const>>
            mCreateResourceHandlerBroker;
        ::ll::TypedStorage<
            8,
            64,
            ::brstd::move_only_function<::std::unique_ptr<::OreUI::Library>(::OreUI::LibraryFactoryArguments&&) const>>
            mCreateLibrary;
        ::ll::TypedStorage<
            8,
            64,
            ::brstd::move_only_function<::std::unique_ptr<::OreUI::SceneProvider>(
                ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&,
                ::std::unique_ptr<::OreUI::FacetRegistryFactory>,
                ::std::unique_ptr<::OreUI::Detail::ViewContextFactory>,
                ::OreUI::Library&
            ) const>>
                                                                                mSceneProviderFactory;
        ::ll::TypedStorage<8, 208, ::OreUI::RouterConfiguration>                mRouterConfiguration;
        ::ll::TypedStorage<8, 32, ::Core::Path>                                 mPackagePath;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ResourceAllowList>> mAllowList;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::DebugData>>         mDebugData;
        ::ll::TypedStorage<8, 64, ::std::function<void(::std::string_view)>>    mShowDebugToast;
        ::ll::TypedStorage<8, 24, ::OreUI::LiveViewCollection>                  mLiveViewCollection;
        ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Input::Debug::ISplitscreenRedirect>>
            mDebugSplitscreenInputRedirect;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static ::brstd::move_only_function<::std::unique_ptr<::OreUI::Library>(::OreUI::LibraryFactoryArguments&&)
                                                     const>
        createLibraryFactory(
            ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> fileSystem,
            ::Bedrock::NotNullNonOwnerPtr<::IFileAccess>      appPackageFileAccess
        );

        MCAPI static ::brstd::move_only_function<::std::unique_ptr<
            ::Gameface::ResourceHandlerBroker>(::OreUI::RegisterResourceHandlersArguments const&) const>
        createResourceHandlerBrokerFactory(::OreUI::ResourceHandlerFactoryArguments const& args);

        MCAPI static ::OreUI::ResourceHandlerFactory
        createResourceHandlerFactory(::OreUI::ResourceHandlerFactoryArguments const& args);
        // NOLINTEND
    };

    struct Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::OreUI::ResourceAllowList>>> mResourceAllowList;
        ::ll::TypedStorage<
            8,
            64,
            ::brstd::move_only_function<::std::unique_ptr<::OreUI::SceneProvider>(
                ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&,
                ::std::unique_ptr<::OreUI::FacetRegistryFactory>,
                ::std::unique_ptr<::OreUI::Detail::ViewContextFactory>,
                ::OreUI::Library&
            ) const>>
                                                                                         mCreateSceneProvider;
        ::ll::TypedStorage<8, 208, ::OreUI::RouterConfiguration>                         mRouterConfiguration;
        ::ll::TypedStorage<8, 104, ::Gameface::TemporaryTextureHolder>                   mTemporaryTextureHolder;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::OreUI::DebugData>>> mDebugData;
        ::ll::TypedStorage<8, 64, ::std::function<void(::std::string_view)>>             mShowDebugToast;
        // NOLINTEND
    };

    struct CallbackEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, void*>                    token;
        ::ll::TypedStorage<8, 64, ::std::function<void()>> callback;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::OreUI::OreUISystem::Impl>>> mImpl;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Library>>                            mLibrary;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Debug::DevServerListener>>           mDevServerListener;
    ::ll::TypedStorage<1, 1, bool>                                                           mAppWillRestart;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::OreUISystem::CallbackEntry>> mRouteConfigurationChangeCallbacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>     mOptionSubscriptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mFlightingTogglesTrialMode;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesFriendsDrawerOnMultipleScreens;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesAccessibilitySettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesGameSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesLanguageSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesGeneralSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesAudioSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesAccountSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesVideoSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesKeyboardAndMouseSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesMultiplayerScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesPreviewSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesStorageSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesTouchSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesCreatorSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesNewSettingsInGame;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesNewSettingsOnThirdPartyServers;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesControllerScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesCloudStorageManager;
    // NOLINTEND

public:
    // prevent constructor by default
    OreUISystem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit OreUISystem(::OreUI::OreUISystem::OreUISystemDependencies&& deps);

    MCAPI ::std::unique_ptr<::OreUI::Router> createInGameRouter(
        ::std::unique_ptr<::OreUI::IRoutePrerequisiteHandler> prerequisiteHandler,
        ::std::unique_ptr<::OreUI::RouterEventing>            routerEventing,
        ::SceneFactory&                                       sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&   sceneStack
    ) const;

    MCAPI ::std::unique_ptr<::OreUI::Router> createOutOfGameRouter(
        ::std::unique_ptr<::OreUI::IRoutePrerequisiteHandler> prerequisiteHandler,
        ::std::unique_ptr<::OreUI::RouterEventing>            routerEventing,
        ::SceneFactory&                                       sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&   sceneStack
    ) const;

    MCAPI ::std::unique_ptr<::OreUI::SceneProvider> createSceneProvider(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& clientInstance,
        ::std::unique_ptr<::OreUI::FacetRegistryFactory>        facetRegistryFactory,
        ::std::unique_ptr<::OreUI::Detail::ViewContextFactory>  contextFactory
    ) const;

    MCAPI void registerOptionObservers(::IOptionRegistry& options);

    MCAPI void registerRouteConfigurationChangeCallback(void* token, ::std::function<void()> const& callback);

    MCAPI void unregisterRouteConfigurationChangeCallback(void* token);

    MCAPI void update(double time);

    MCAPI ~OreUISystem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::OreUISystem::OreUISystemDependencies&& deps);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct CallbackEntry {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI

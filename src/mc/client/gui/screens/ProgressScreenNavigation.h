#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ProgressContentType.h"
#include "mc/client/gui/screens/OnlineSafetyDialogVisibility.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class ProgressHandler;
class SceneFactory;
namespace OreUI { class Router; }
namespace World { struct RealmsJoinData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/events/OnlineSafetyDialogVisibility.h"
#include "mc/client/gui/ProgressContentType.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class ProgressHandler;
class SceneFactory;
namespace OreUI { class Router; }
namespace World { struct RealmsJoinData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
class ProgressScreenNavigation : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SceneFactory&> mSceneFactory;
    ::ll::UntypedStorage<8, 48>               mGetSceneStack;
    ::ll::UntypedStorage<8, 16>               mRouter;
    // NOLINTEND

public:
    // prevent constructor by default
    ProgressScreenNavigation& operator=(ProgressScreenNavigation const&);
    ProgressScreenNavigation(ProgressScreenNavigation const&);
    ProgressScreenNavigation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProgressScreenNavigation();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProgressScreenNavigation(
        ::SceneFactory&,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>>()>,
        ::OreUI::Router&
    );

    MCNAPI void leaveProgressScreen();

    MCNAPI void
    navigateToJoinLanServerProgressScreen(std::unique_ptr<ProgressHandler>, ::OnlineSafetyDialogVisibility const);

    MCNAPI void navigateToJoinServerProgressScreen(
        std::deque<std::unique_ptr<ProgressHandler>>,
        bool const,
        ::OnlineSafetyDialogVisibility const
    );

    MCNAPI void navigateToRealmsWarningScreen(::World::RealmsJoinData&);

    MCNAPI void navigateToRealmsWorldProgressScreen(
        std::unique_ptr<ProgressHandler>,
        std::unique_ptr<ProgressHandler>,
        bool const,
        std::function<void()>
    );

    MCNAPI void navigateToTimelineRequirementScreen(std::string const&);

    MCNAPI void pushProgressScreen(std::string const&, std::string const&, ::ProgressContentType, ::GameType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::SceneFactory&, std::function<gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>>()>, ::OreUI::Router&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ProgressScreenNavigation : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SceneFactory&>                                                  mSceneFactory;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::ISceneStack>()>> mGetSceneStack;
    ::ll::TypedStorage<8, 8, ::OreUI::Router&>                                                 mRouter;
    // NOLINTEND

public:
    // prevent constructor by default
    ProgressScreenNavigation& operator=(ProgressScreenNavigation const&);
    ProgressScreenNavigation(ProgressScreenNavigation const&);
    ProgressScreenNavigation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProgressScreenNavigation() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ProgressScreenNavigation(
        ::SceneFactory&                                                 sceneFactory,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::ISceneStack>()> getSceneStackCallback,
        ::OreUI::Router&                                                router
    );

    MCAPI void leaveProgressScreen();

    MCAPI void navigateToJoinLanServerProgressScreen(
        ::std::unique_ptr<::ProgressHandler> connectHandler,
        ::OnlineSafetyDialogVisibility       onlineSafetyDialogVisibility
    );

    MCAPI void navigateToJoinServerProgressScreen(
        ::std::deque<::std::unique_ptr<::ProgressHandler>> connectHandlers,
        bool                                               allowSmallDownloads,
        ::OnlineSafetyDialogVisibility                     onlineSafetyDialogVisibility
    );

    MCAPI void navigateToRealmsWarningScreen(::World::RealmsJoinData& realmsJoinData);

    MCAPI void navigateToRealmsWorldProgressScreen(
        ::std::unique_ptr<::ProgressHandler> connectHandler,
        ::std::unique_ptr<::ProgressHandler> progressHandler,
        bool                                 isRealmsPlusExpired,
        ::std::function<void()>              onlineSafetyCancelledCallback
    );

    MCAPI void navigateToTimelineRequirementScreen(::std::string const& realmId);

    MCAPI void pushProgressScreen(
        ::std::string const&  screenTitle,
        ::std::string const&  eventName,
        ::ProgressContentType contentType,
        ::GameType            gameType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::SceneFactory&                                                 sceneFactory,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::ISceneStack>()> getSceneStackCallback,
        ::OreUI::Router&                                                router
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ProgressScreenNavigation {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ui

#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace ui {

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

} // namespace ui

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class MinecraftScreenModel;
namespace Json { class Value; }
// clang-format on

class ResourcePackApplyingScreenController : public ::MainMenuScreenController {
public:
    // ResourcePackApplyingScreenController inner types define
    using ApplyPacksCallback = std::function<void(MinecraftScreenModel&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mScreenName;
    ::ll::UntypedStorage<8, 48> mApplyPacks;
    ::ll::UntypedStorage<1, 16> mHasTicked;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackApplyingScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePackApplyingScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual ::ui::SceneType getSceneType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackApplyingScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        std::string const&,
        std::function<void(MinecraftScreenModel&)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::shared_ptr<MainMenuScreenModel>, std::string const&, std::function<void(MinecraftScreenModel&)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI ::ui::SceneType $getSceneType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

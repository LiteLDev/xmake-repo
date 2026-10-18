#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/WorldCopyProgressHandler.h"
#include "mc/client/gui/screens/SelectWorldResult.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/models/SelectWorldModel.h"
#include "mc/deps/core/utility/optional_ref.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
struct LevelSummary;
namespace Realms { struct World; }
// clang-format on

class SelectWorldScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::SelectWorldModel> mSelectWorldModel;
    ::ll::UntypedStorage<4, 16>                   mSelectedWorldIndex;
    ::ll::UntypedStorage<8, 48>                   mCallback;
    ::ll::UntypedStorage<1, 16>                   mRealmsAPICallInProgress;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectWorldScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SelectWorldScreenController();

    virtual ::ui::SceneType getSceneType() const;

    virtual void onEntered();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SelectWorldScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        std::function<void(SelectWorldResult, optional_ref<const LevelSummary>, optional_ref<const Realms::World>)>
    );

    MCNAPI void _displayCopyFailedModal(std::function<void(ModalScreenButtonId)>);

    MCNAPI void _exit(::SelectWorldResult);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        std::function<void(SelectWorldResult, optional_ref<const LevelSummary>, optional_ref<const Realms::World>)>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI void $onEntered();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/SelectWorldResult.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/models/SelectWorldModel.h"
#include "mc/deps/core/utility/optional_ref.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
struct LevelSummary;
namespace Realms { struct World; }
// clang-format on

class SelectWorldScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::SelectWorldModel> mSelectWorldModel;
    ::ll::TypedStorage<4, 4, int>                 mSelectedWorldIndex;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<
            void(::SelectWorldResult, ::optional_ref<::LevelSummary const>, ::optional_ref<::Realms::World const>)>>
                                   mCallback;
    ::ll::TypedStorage<1, 1, bool> mRealmsAPICallInProgress;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectWorldScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onEntered() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SelectWorldScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::function<
            void(::SelectWorldResult, ::optional_ref<::LevelSummary const>, ::optional_ref<::Realms::World const>)>
            callback
    );

    MCAPI void _displayCopyFailedModal(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void _exit(::SelectWorldResult result);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::function<
            void(::SelectWorldResult, ::optional_ref<::LevelSummary const>, ::optional_ref<::Realms::World const>)>
            callback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onEntered();

    MCFOLD ::ui::SceneType $getSceneType() const;
    // NOLINTEND
};
#else // @header-generator platform
class SelectWorldScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform

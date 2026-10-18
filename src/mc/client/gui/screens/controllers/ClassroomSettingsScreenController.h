#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/ClassroomSettingsScreenControllerCallbacks.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/gui/screens/controllers/SettingsScreenMode.h"
#include "mc/options/EduSharedUriResource.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class MainMenuScreenModel;
namespace Json { class Value; }
// clang-format on

class ClassroomSettingsScreenController : public ::SettingsScreenControllerBase {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/ClassroomSettingsScreenControllerCallbacks.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/options/EduSharedUriResource.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Json { class Value; }
// clang-format on

class ClassroomSettingsScreenController : public ::SettingsScreenControllerBase {
#else // @header-generator platform
class ClassroomSettingsScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // ClassroomSettingsScreenController inner types declare
    // clang-format off
    struct Capabilities;
    // clang-format on

    // ClassroomSettingsScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class UriResourceValidationStatus : int {
        Empty             = 0,
        ButtonSetUriEmpty = 1,
        Invalid           = 2,
        Valid             = 3,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class UriResourceValidationStatus : int {
        Empty             = 0,
        ButtonSetUriEmpty = 1,
        Invalid           = 2,
        Valid             = 3,
    };
#else // @header-generator platform
    enum class UriResourceValidationStatus : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct Capabilities {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mIsShareLinkEnabled;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, ::ClassroomSettingsScreenController::Capabilities> mCapabilities;
    ::ll::UntypedStorage<8, 96> mScreenCallbacks;
    ::ll::TypedStorage<4, 4, ::ClassroomSettingsScreenController::UriResourceValidationStatus> mUriResourceValidationStatus;
    ::ll::TypedStorage<8, 48, ::EduSharedUriResource> mSharedUriResource;
    ::ll::UntypedStorage<8, 56> mSharedUriResourceLastTick;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ClassroomSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClassroomSettingsScreenController();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual void addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClassroomSettingsScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        ::ClassroomSettingsScreenControllerCallbacks const&
    );

    MCNAPI void _setEduSharedResourceValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, ::ClassroomSettingsScreenControllerCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);

    MCNAPI void $addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct Capabilities {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mIsShareLinkEnabled;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ClassroomSettingsScreenController::Capabilities> mCapabilities;
    ::ll::TypedStorage<8, 128, ::ClassroomSettingsScreenControllerCallbacks>    mScreenCallbacks;
    ::ll::TypedStorage<4, 4, ::ClassroomSettingsScreenController::UriResourceValidationStatus>
                                                      mUriResourceValidationStatus;
    ::ll::TypedStorage<8, 64, ::EduSharedUriResource> mSharedUriResource;
    ::ll::TypedStorage<8, 64, ::EduSharedUriResource> mSharedUriResourceLastTick;
    // NOLINTEND

public:
    // prevent constructor by default
    ClassroomSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClassroomSettingsScreenController(
        ::std::shared_ptr<::MainMenuScreenModel>            model,
        ::ClassroomSettingsScreenControllerCallbacks const& screenCallbacks
    );

    MCAPI void _setEduSharedResourceValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>            model,
        ::ClassroomSettingsScreenControllerCallbacks const& screenCallbacks
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);
    // NOLINTEND
#else // @header-generator platform
    struct Capabilities {};
#endif // @header-generator platform
#endif // @header-generator platform
};

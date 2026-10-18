#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/PlayScreenController.h"
#include "mc/util/UploadState.h"

// auto generated forward declare list
// clang-format off
class PlayScreenModel;
namespace Json { class Value; }
namespace Realms { struct World; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

class LocalWorldUploadScreenController : public ::PlayScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mRealmID;
    ::ll::UntypedStorage<4, 16>            mSlotIndex;
    ::ll::UntypedStorage<8, 48>            mCallbackAfterUpload;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalWorldUploadScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalWorldUploadScreenController();

    virtual void onOpen();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual void _registerEventHandlers();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LocalWorldUploadScreenController(
        std::shared_ptr<PlayScreenModel>,
        std::string const&,
        int const,
        ::ui::ScreenTechStackSelector&,
        std::function<void(UploadState, Realms::World)>
    );

    MCNAPI void _upload(int const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<PlayScreenModel>,
        std::string const&,
        int const,
        ::ui::ScreenTechStackSelector&,
        std::function<void(UploadState, Realms::World)>
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
    MCNAPI void $onOpen();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI void $_registerEventHandlers();
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
#include "mc/client/gui/screens/controllers/PlayScreenController.h"
#include "mc/util/UploadState.h"

// auto generated forward declare list
// clang-format off
class PlayScreenModel;
namespace Json { class Value; }
namespace Realms { struct World; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

class LocalWorldUploadScreenController : public ::PlayScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                         mRealmID;
    ::ll::TypedStorage<4, 4, int>                                                    mSlotIndex;
    ::ll::TypedStorage<8, 64, ::std::function<void(::UploadState, ::Realms::World)>> mCallbackAfterUpload;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalWorldUploadScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalWorldUploadScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void _registerEventHandlers() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LocalWorldUploadScreenController(
        ::std::shared_ptr<::PlayScreenModel>                  model,
        ::std::string const&                                  realmID,
        int                                                   slotIndex,
        ::ui::ScreenTechStackSelector&                        techStackSelector,
        ::std::function<void(::UploadState, ::Realms::World)> callbackAfterUpload
    );

    MCAPI void _upload(int const worldIndex);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::PlayScreenModel>                  model,
        ::std::string const&                                  realmID,
        int                                                   slotIndex,
        ::ui::ScreenTechStackSelector&                        techStackSelector,
        ::std::function<void(::UploadState, ::Realms::World)> callbackAfterUpload
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $_registerEventHandlers();
    // NOLINTEND
};
#else // @header-generator platform
class LocalWorldUploadScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

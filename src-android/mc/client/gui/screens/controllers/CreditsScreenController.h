#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/CreditsType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class CreditsScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CreditsType> mContentType;
    ::ll::UntypedStorage<8, 48>             mFinishedCallback;
    ::ll::UntypedStorage<1, 16>             mScrollFaster;
    // NOLINTEND

public:
    // prevent constructor by default
    CreditsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CreditsScreenController();

    virtual void onOpen();

    virtual void onTerminate();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CreditsScreenController(std::shared_ptr<MinecraftScreenModel>, ::CreditsType, std::function<void()>);

    MCNAPI void _registerBindings();

    MCNAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, ::CreditsType, std::function<void()>);
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

    MCNAPI void $onTerminate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

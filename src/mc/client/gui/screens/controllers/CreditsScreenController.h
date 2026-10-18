#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<4, 4, ::CreditsType>            mContentType;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mFinishedCallback;
    ::ll::TypedStorage<1, 1, bool>                     mScrollFaster;
    // NOLINTEND

public:
    // prevent constructor by default
    CreditsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CreditsScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::CreditsType                             contentType,
        ::std::function<void()>                   finishedCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::CreditsType                             contentType,
        ::std::function<void()>                   finishedCallback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onOpen();

    MCAPI void $onTerminate();
    // NOLINTEND
};
#else // @header-generator platform
class CreditsScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform

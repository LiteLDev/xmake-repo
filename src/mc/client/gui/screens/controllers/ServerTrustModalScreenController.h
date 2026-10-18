#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/deps/core/threading/AsyncPromise.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class ServerTrustModalScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                            mServerAddress;
    ::ll::TypedStorage<8, 24, ::Bedrock::Threading::AsyncPromise<bool>> mResultPromise;
    ::ll::TypedStorage<1, 1, bool>                                      mHasDisplayedModal;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerTrustModalScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerTrustModalScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string                             serverAddress,
        ::Bedrock::Threading::AsyncPromise<bool>  resultPromise
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string                             serverAddress,
        ::Bedrock::Threading::AsyncPromise<bool>  resultPromise
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND
};
#else // @header-generator platform
class ServerTrustModalScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform

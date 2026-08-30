#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/gui/screens/controllers/UserManagementModalScreenData.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace Json { class Value; }
// clang-format on

class UserManagementScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 320> mScreenData;
    ::ll::UntypedStorage<8, 48>  mCallback;
    ::ll::UntypedStorage<1, 16>  mCallbackResult;
    // NOLINTEND

public:
    // prevent constructor by default
    UserManagementScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UserManagementScreenController();

    virtual void onLeave();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual std::string getAdditionalScreenInfo() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UserManagementScreenController(
        std::shared_ptr<MinecraftScreenModel>,
        ::UserManagementModalScreenData const&,
        std::function<void(bool)>
    );

    MCNAPI void _registerBindings();

    MCNAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::shared_ptr<MinecraftScreenModel>, ::UserManagementModalScreenData const&, std::function<void(bool)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLeave();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI std::string $getAdditionalScreenInfo() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

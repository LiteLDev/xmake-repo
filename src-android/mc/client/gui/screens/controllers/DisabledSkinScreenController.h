#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class DisabledSkinScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> twoButtonMode;
    ::ll::UntypedStorage<8, 48>    twoButtonCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    DisabledSkinScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DisabledSkinScreenController();

    virtual std::string getTelemetryOverride() const;

    virtual void onEntered();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DisabledSkinScreenController(std::shared_ptr<MinecraftScreenModel>, bool, std::function<void()>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, bool, std::function<void()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string $getTelemetryOverride() const;

    MCNAPI void $onEntered();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

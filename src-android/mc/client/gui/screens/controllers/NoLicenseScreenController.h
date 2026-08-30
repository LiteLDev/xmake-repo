#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class NoLicenseScreenController : public ::MinecraftScreenController {
public:
    // prevent constructor by default
    NoLicenseScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NoLicenseScreenController();

    virtual void onOpen();

    virtual ::ui::SceneType getSceneType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NoLicenseScreenController(std::shared_ptr<MinecraftScreenModel>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>);
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

    MCNAPI ::ui::SceneType $getSceneType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

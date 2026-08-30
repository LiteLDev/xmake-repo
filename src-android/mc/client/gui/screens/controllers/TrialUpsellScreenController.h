#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class TrialUpsellScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsNewWorld;
    ::ll::TypedStorage<1, 1, bool> mTimeExpired;
    // NOLINTEND

public:
    // prevent constructor by default
    TrialUpsellScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TrialUpsellScreenController();

    virtual void handleLicenseChanged();

    virtual ::ui::SceneType getSceneType() const;

    virtual std::string _getButtonADescription();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TrialUpsellScreenController(std::shared_ptr<MinecraftScreenModel>, bool, bool);

    MCNAPI void _registerBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, bool, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $handleLicenseChanged();

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI std::string $_getButtonADescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

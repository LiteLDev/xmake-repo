#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/controllers/MobEffectPane.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class MobEffectInstance;
// clang-format on

class MobEffectScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                         mRenderableEffectsCount;
    ::ll::TypedStorage<8, 24, std::vector<MobEffectPane>> mCurrentEffects;
    ::ll::TypedStorage<1, 1, bool>                        mUpdateBindsNextFrame;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEffectScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MobEffectScreenController();

    virtual ::ui::DirtyFlag tick();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MobEffectScreenController(std::shared_ptr<ClientInstanceScreenModel>);

    MCNAPI void _registerBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

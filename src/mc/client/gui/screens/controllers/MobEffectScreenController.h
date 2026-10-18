#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
struct MobEffectPane;
// clang-format on

class MobEffectScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                             mRenderableEffectsCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobEffectPane>> mCurrentEffects;
    ::ll::TypedStorage<1, 1, bool>                            mUpdateBindsNextFrame;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEffectScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MobEffectScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MobEffectScreenController(::std::shared_ptr<::ClientInstanceScreenModel> model);

    MCAPI void _registerBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
#else // @header-generator platform
class MobEffectScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform

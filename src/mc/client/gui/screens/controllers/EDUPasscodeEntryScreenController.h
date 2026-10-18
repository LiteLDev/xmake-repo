#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/social/EduDedicatedServerDetails.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class EDUPasscodeEntryScreenController : public ::MinecraftScreenController {
public:
    // EDUPasscodeEntryScreenController inner types define
    using OnConfirmPasscode = std::function<void(const Social::EduDedicatedServerDetails&, const std::string&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mPrevCaretPosition;
    ::ll::TypedStorage<8, 24, std::string>                         mPasscode;
    ::ll::TypedStorage<8, 24, std::string>                         mDisplayedPasscode;
    ::ll::TypedStorage<1, 1, bool>                                 mHidePasscode;
    ::ll::TypedStorage<1, 1, bool>                                 mShowPasscodeTooltip;
    ::ll::TypedStorage<8, 72, ::Social::EduDedicatedServerDetails> mServerDetails;
    ::ll::UntypedStorage<8, 48>                                    mOnConfirmPasscode;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUPasscodeEntryScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUPasscodeEntryScreenController();

    virtual ::ui::DirtyFlag tick();
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
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/social/EduDedicatedServerDetails.h"

class EDUPasscodeEntryScreenController : public ::MinecraftScreenController {
public:
    // EDUPasscodeEntryScreenController inner types define
    using OnConfirmPasscode = ::std::function<void(::Social::EduDedicatedServerDetails const&, ::std::string const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mPrevCaretPosition;
    ::ll::TypedStorage<8, 32, ::std::string>                       mPasscode;
    ::ll::TypedStorage<8, 32, ::std::string>                       mDisplayedPasscode;
    ::ll::TypedStorage<1, 1, bool>                                 mHidePasscode;
    ::ll::TypedStorage<1, 1, bool>                                 mShowPasscodeTooltip;
    ::ll::TypedStorage<8, 88, ::Social::EduDedicatedServerDetails> mServerDetails;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Social::EduDedicatedServerDetails const&, ::std::string const&)>>
        mOnConfirmPasscode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUPasscodeEntryScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND
};
#else // @header-generator platform
class EDUPasscodeEntryScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform

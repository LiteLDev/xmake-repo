#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/PlatformUpsellDialog.h"

// auto generated forward declare list
// clang-format off
namespace Social { class User; }
// clang-format on

class GenericPlatformUpsellDialog : public ::PlatformUpsellDialog {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GenericPlatformUpsellDialog();

    virtual void show(std::shared_ptr<Social::User> const, std::function<void(bool)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $show(std::shared_ptr<Social::User> const, std::function<void(bool)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

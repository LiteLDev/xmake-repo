#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    virtual ~GenericPlatformUpsellDialog() /*override*/ = default;

    virtual void show(::std::shared_ptr<::Social::User> const, ::std::function<void(bool)>) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $show(::std::shared_ptr<::Social::User> const, ::std::function<void(bool)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class GenericPlatformUpsellDialog {};
#endif // @header-generator platform
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Social { class User; }
// clang-format on

class PlatformUpsellDialog {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlatformUpsellDialog();

    virtual void show(std::shared_ptr<Social::User> const, std::function<void(bool)>) = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<PlatformUpsellDialog> create();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Social { class User; }
// clang-format on

class PlatformUpsellDialog {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlatformUpsellDialog() = default;

    virtual void show(::std::shared_ptr<::Social::User> const, ::std::function<void(bool)>) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class PlatformUpsellDialog {};
#endif // @header-generator platform
#endif // @header-generator platform

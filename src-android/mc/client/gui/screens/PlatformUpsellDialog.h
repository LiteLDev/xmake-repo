#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

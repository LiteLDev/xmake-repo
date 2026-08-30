#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/oreui/NewOreUIScreenOverride.h"

// auto generated forward declare list
// clang-format off
class Option;
// clang-format on

namespace ui {

class OreUIScreenConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Option*> mIsSelectedOption;
    ::ll::TypedStorage<8, 8, ::Option*> mIsForceEnabledOption;
    ::ll::UntypedStorage<8, 48>         mIsSelected;
    ::ll::UntypedStorage<8, 48>         mIsSupported;
    // NOLINTEND

public:
    // prevent constructor by default
    OreUIScreenConfiguration& operator=(OreUIScreenConfiguration const&);
    OreUIScreenConfiguration(OreUIScreenConfiguration const&);
    OreUIScreenConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~OreUIScreenConfiguration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ui

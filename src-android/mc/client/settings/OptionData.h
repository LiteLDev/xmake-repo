#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/LocStringData.h"

namespace Settings {

struct OptionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> value;
    ::ll::UntypedStorage<8, 64> label;
    ::ll::UntypedStorage<8, 80> description;
    ::ll::UntypedStorage<1, 16> disabled;
    // NOLINTEND

public:
    // prevent constructor by default
    OptionData& operator=(OptionData const&);
    OptionData(OptionData const&);
    OptionData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~OptionData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Settings

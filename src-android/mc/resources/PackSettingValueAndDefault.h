#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackSettingValueAndDefault {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::variant<float, bool, std::string>> mValue;
    ::ll::TypedStorage<8, 32, std::variant<float, bool, std::string>> mDefault;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSettingValueAndDefault& operator=(PackSettingValueAndDefault const&);
    PackSettingValueAndDefault();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackSettingValueAndDefault();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

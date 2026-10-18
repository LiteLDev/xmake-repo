#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackSettingValueAndDefault {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::variant<float, bool, std::string>> mValue;
    ::ll::TypedStorage<8, 32, std::variant<float, bool, std::string>> mDefault;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 40> mUnkccbcdf;
    ::ll::UntypedStorage<8, 40> mUnk258b5a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PackSettingValueAndDefault& operator=(PackSettingValueAndDefault const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PackSettingValueAndDefault(PackSettingValueAndDefault const&);
#endif // @header-generator platform
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

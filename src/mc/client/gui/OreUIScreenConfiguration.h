#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/options/oreui/NewOreUIScreenOverride.h"

// auto generated forward declare list
// clang-format off
class Option;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Option;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class OreUIScreenConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Option*>                mIsSelectedOption;
    ::ll::TypedStorage<8, 8, ::Option*>                mIsForceEnabledOption;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>> mIsSelected;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>> mIsSupported;
    // NOLINTEND
};
#else // @header-generator platform
class OreUIScreenConfiguration {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ui

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct NetworkWorldActivity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72>            imagePath;
    ::ll::TypedStorage<8, 24, std::string> title;
    ::ll::TypedStorage<8, 24, std::string> subtitle;
    ::ll::TypedStorage<8, 24, std::string> description;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkWorldActivity& operator=(NetworkWorldActivity const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkWorldActivity(::OreUI::NetworkWorldActivity const&);

    MCNAPI ~NetworkWorldActivity();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::NetworkWorldActivity const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct NetworkWorldActivity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath> imagePath;
    ::ll::TypedStorage<8, 32, ::std::string>          title;
    ::ll::TypedStorage<8, 32, ::std::string>          subtitle;
    ::ll::TypedStorage<8, 32, ::std::string>          description;
    // NOLINTEND
};
#else // @header-generator platform
struct NetworkWorldActivity {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

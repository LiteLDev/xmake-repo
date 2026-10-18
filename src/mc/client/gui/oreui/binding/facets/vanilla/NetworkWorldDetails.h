#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/NetworkWorldActivity.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/NetworkWorldType.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/world/WorldPingStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct NetworkWorldInfo;
namespace OreUI { class IResourceAllowList; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/NetworkWorldType.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/world/WorldPingStatus.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct NetworkWorldActivity; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct NetworkWorldDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                              id;
    ::ll::TypedStorage<8, 24, std::string>                              name;
    ::ll::TypedStorage<8, 24, std::string>                              description;
    ::ll::TypedStorage<8, 24, std::string>                              address;
    ::ll::TypedStorage<4, 4, int>                                       port;
    ::ll::TypedStorage<8, 24, std::string>                              ping;
    ::ll::UntypedStorage<8, 72>                                         imagePath;
    ::ll::TypedStorage<4, 4, ::WorldPingStatus>                         pingStatus;
    ::ll::TypedStorage<4, 4, int>                                       playerCount;
    ::ll::TypedStorage<4, 4, int>                                       capacity;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::NetworkWorldActivity>> activities;
    ::ll::TypedStorage<8, 24, std::string>                              newsTitle;
    ::ll::TypedStorage<8, 24, std::string>                              newsDescription;
    ::ll::TypedStorage<1, 1, ::OreUI::NetworkWorldType>                 type;
    ::ll::TypedStorage<1, 1, bool>                                      mIsSupportedForPartyTravel;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkWorldDetails& operator=(NetworkWorldDetails const&);
    NetworkWorldDetails(NetworkWorldDetails const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkWorldDetails();

    MCNAPI ::OreUI::NetworkWorldDetails& operator=(::OreUI::NetworkWorldDetails&&);

    MCNAPI ~NetworkWorldDetails();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct NetworkWorldDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                id;
    ::ll::TypedStorage<8, 32, ::std::string>                                name;
    ::ll::TypedStorage<8, 32, ::std::string>                                description;
    ::ll::TypedStorage<8, 32, ::std::string>                                address;
    ::ll::TypedStorage<4, 4, int>                                           port;
    ::ll::TypedStorage<8, 32, ::std::string>                                ping;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                       imagePath;
    ::ll::TypedStorage<4, 4, ::WorldPingStatus>                             pingStatus;
    ::ll::TypedStorage<4, 4, int>                                           playerCount;
    ::ll::TypedStorage<4, 4, int>                                           capacity;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::NetworkWorldActivity>> activities;
    ::ll::TypedStorage<8, 32, ::std::string>                                newsTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                                newsDescription;
    ::ll::TypedStorage<1, 1, ::OreUI::NetworkWorldType>                     type;
    ::ll::TypedStorage<1, 1, bool>                                          mIsSupportedForPartyTravel;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkWorldDetails();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
struct NetworkWorldDetails {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

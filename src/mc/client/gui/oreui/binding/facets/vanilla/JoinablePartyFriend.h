#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPlayer.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPlayer.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct JoinablePartyFriend {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> partyId;
    ::ll::UntypedStorage<8, 520>           partyFriend;
    // NOLINTEND

public:
    // prevent constructor by default
    JoinablePartyFriend& operator=(JoinablePartyFriend const&);
    JoinablePartyFriend(JoinablePartyFriend const&);
    JoinablePartyFriend();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JoinablePartyFriend();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct JoinablePartyFriend {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>          partyId;
    ::ll::TypedStorage<8, 656, ::OreUI::SocialPlayer> partyFriend;
    // NOLINTEND
};
#else // @header-generator platform
struct JoinablePartyFriend {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

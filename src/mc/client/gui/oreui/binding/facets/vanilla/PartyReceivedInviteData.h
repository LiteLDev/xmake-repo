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
struct PartyReceivedInviteData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 520>           mInviter;
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::TypedStorage<8, 24, std::string> mConnectionString;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyReceivedInviteData& operator=(PartyReceivedInviteData const&);
    PartyReceivedInviteData(PartyReceivedInviteData const&);
    PartyReceivedInviteData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PartyReceivedInviteData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PartyReceivedInviteData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 656, ::OreUI::SocialPlayer> mInviter;
    ::ll::TypedStorage<8, 32, ::std::string>          mPartyId;
    ::ll::TypedStorage<8, 32, ::std::string>          mConnectionString;
    // NOLINTEND
};
#else // @header-generator platform
struct PartyReceivedInviteData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

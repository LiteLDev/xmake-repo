#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/party/parties/PartyPrivacy.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
struct PartyPrivacyUpdatedChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>            mPartyId;
    ::ll::TypedStorage<4, 4, ::Parties::PartyPrivacy> mPrivacy;
    // NOLINTEND
};
#else // @header-generator platform
struct PartyPrivacyUpdatedChange {};
#endif // @header-generator platform

} // namespace Parties

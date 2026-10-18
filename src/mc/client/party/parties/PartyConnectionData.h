#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/party/parties/PartyData.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
struct PartyConnectionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 416> mPartyData;
    ::ll::UntypedStorage<8, 48>  mConnectCallback;
    // NOLINTEND
};
#else // @header-generator platform
struct PartyConnectionData {};
#endif // @header-generator platform

} // namespace Parties

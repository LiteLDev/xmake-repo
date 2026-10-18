#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::multiplayer::api { class IPartyApi; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
class PartyService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mPartyApi;
    // NOLINTEND
};
#else // @header-generator platform
class PartyService {};
#endif // @header-generator platform

} // namespace Parties

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmId; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
class IRealmsMembers {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IRealmsMembers() = default;

    virtual ::Bedrock::Threading::Async<Realms::GenericStatus> addMembers(::Realms::RealmId, std::string const&, std::vector<std::string> const&, bool) = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class IRealmsMembers {};
#endif // @header-generator platform

} // namespace Realms

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmId; }
// clang-format on

namespace Realms {

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

} // namespace Realms

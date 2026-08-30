#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Parties { class IPartyProvider; }
namespace Parties { class Party; }
// clang-format on

namespace OreUI {

class CurrentPartyQuery {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                mPartyProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartySubscription;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CurrentPartyQuery();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI

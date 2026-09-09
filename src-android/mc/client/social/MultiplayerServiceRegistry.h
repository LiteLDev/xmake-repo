#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Social { class MultiplayerService; }
namespace brstd { struct source_location; }
// clang-format on

namespace Social {

class MultiplayerServiceRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mServicesMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MultiplayerServiceRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social

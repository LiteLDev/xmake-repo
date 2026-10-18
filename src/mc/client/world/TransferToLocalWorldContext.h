#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/LocalTransferLevelId.h"
#include "mc/client/world/LocalTransferWorldName.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
struct LevelSummary;
// clang-format on

struct TransferToLocalWorldContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::variant<LocalTransferWorldName, LocalTransferLevelId>> mDestination;
    // NOLINTEND

public:
    // prevent constructor by default
    TransferToLocalWorldContext& operator=(TransferToLocalWorldContext const&);
    TransferToLocalWorldContext(TransferToLocalWorldContext const&);
    TransferToLocalWorldContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TransferToLocalWorldContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct TransferToLocalWorldContext {};
#endif // @header-generator platform

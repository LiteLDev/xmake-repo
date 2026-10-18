#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/legacy/facing/Name.h"
#include "mc/world/level/block/components/ConnectionID.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct BlockConnectionRuleComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 1> mConnectionsFromMask;
    ::ll::UntypedStorage<1, 1> mEnabledDirectionsMask;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool canConnectToFace(::Block const&, uchar, std::optional<ConnectionID>);
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::ConnectionID, 4>> mConnectionsFromMask;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::Facing::Name, 6>> mEnabledDirectionsMask;
#endif // @header-generator platform
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/legacy/facing/Name.h"
#include "mc/world/level/block/components/ConnectionID.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BlockConnectionRuleComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mConnectionsFromMask;
    ::ll::UntypedStorage<1, 1> mEnabledDirectionsMask;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool canConnectToFace(::Block const&, uchar, std::optional<ConnectionID>);
    // NOLINTEND
};

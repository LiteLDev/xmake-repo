#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/InsideBlockEventMap.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class InsideBlockNotifierComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<InsideBlockEventMap>> mBlockList;
    // NOLINTEND

public:
    // prevent constructor by default
    InsideBlockNotifierComponent& operator=(InsideBlockNotifierComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isTrackedBlock(::Block const&) const;

    MCNAPI void resetBlocksInsideState();

    MCNAPI void setInsideBlock(::Block const&, bool);
    // NOLINTEND
};

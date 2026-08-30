#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockDisplayNameComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mDisplayName;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDisplayNameComponent& operator=(BlockDisplayNameComponent const&);
    BlockDisplayNameComponent(BlockDisplayNameComponent const&);
    BlockDisplayNameComponent();
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AtomicEntityInitDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mIdentifier;
    // NOLINTEND

public:
    // prevent constructor by default
    AtomicEntityInitDataComponent& operator=(AtomicEntityInitDataComponent const&);
    AtomicEntityInitDataComponent();
};

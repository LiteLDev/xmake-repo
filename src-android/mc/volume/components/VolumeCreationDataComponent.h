#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VolumeCreationDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mJsonIdentifier;
    ::ll::TypedStorage<8, 24, std::string> mInstanceName;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeCreationDataComponent& operator=(VolumeCreationDataComponent const&);
};

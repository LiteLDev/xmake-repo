#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_50 {

struct InteractButtonItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mRequiresInteract;
    ::ll::TypedStorage<8, 24, std::string> mInteractText;
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50

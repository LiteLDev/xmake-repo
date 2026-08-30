#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

struct CompressedTextureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>        mIdentifier;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mValidateSize;
    // NOLINTEND

public:
    // prevent constructor by default
    CompressedTextureDescription& operator=(CompressedTextureDescription const&);
    CompressedTextureDescription();
};

} // namespace dragon

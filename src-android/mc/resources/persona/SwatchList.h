#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/resources/persona/Swatch.h"

namespace persona::color {

class SwatchList : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<persona::color::Swatch> const> mColorSwatches;
    // NOLINTEND
};

} // namespace persona::color

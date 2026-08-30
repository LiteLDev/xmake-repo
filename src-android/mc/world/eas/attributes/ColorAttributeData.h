#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/Color255RGBA.h"
#include "mc/world/eas/attributes/modifiers/ColorAttributeOperation.h"

namespace EAS {

struct ColorAttributeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGBA>   mValue;
    ::ll::TypedStorage<4, 4, ::EAS::ColorAttributeOperation> mOperation;
    // NOLINTEND
};

} // namespace EAS

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/eas/attributes/modifiers/FloatAttributeOperation.h"

namespace EAS {

struct FloatAttributeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                          mValue;
    ::ll::TypedStorage<4, 4, ::EAS::FloatAttributeOperation> mOperation;
    ::ll::TypedStorage<4, 8, std::optional<float>>           mConstraintMinValue;
    ::ll::TypedStorage<4, 8, std::optional<float>>           mConstraintMaxValue;
    // NOLINTEND
};

} // namespace EAS

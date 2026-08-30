#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseAttributeMap;
struct MutableAttributeWithContext;
struct ValidMutableAttributeWithContext;
// clang-format on

struct AttributeModificationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BaseAttributeMap*> mAttributeMap;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::AttributeModificationContext createNoUpdateContext();
    // NOLINTEND
};

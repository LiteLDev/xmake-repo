#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::TextInput {

struct Rectangle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> X;
    ::ll::TypedStorage<4, 4, float> Y;
    ::ll::TypedStorage<4, 4, float> Width;
    ::ll::TypedStorage<4, 4, float> Height;
    // NOLINTEND
};

} // namespace cohtml::TextInput

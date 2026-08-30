#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ComponentNamed; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::DataDrivenUI {

struct FormImage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue> mAttribs;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::DataDrivenUI

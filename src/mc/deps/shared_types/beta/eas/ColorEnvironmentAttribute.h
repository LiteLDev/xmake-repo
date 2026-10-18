#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/eas/ColorAttributeOperation.h"
#include "mc/deps/shared_types/shared_types/Color255RGBA.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::Beta {

struct ColorEnvironmentAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGBA>                 mValue;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Beta::ColorAttributeOperation> mOperation;
    // NOLINTEND
};

} // namespace SharedTypes::Beta

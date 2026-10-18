#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/VertexField.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class Attribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::mce::VertexField> builtInAttribute;
    ::ll::TypedStorage<4, 4, uint>               location;
    ::ll::TypedStorage<4, 4, uint>               count;
    // NOLINTEND
};
#else // @header-generator platform
class Attribute {};
#endif // @header-generator platform

} // namespace mce

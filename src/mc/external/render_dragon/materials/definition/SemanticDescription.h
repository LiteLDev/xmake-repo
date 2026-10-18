#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/materials/definition/InputSemantic.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::materials::definition {

#if defined(LL_PLAT_A) // @header-generator platform
struct SemanticDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::dragon::materials::definition::InputSemantic> mInput;
    ::ll::TypedStorage<1, 1, uchar>                                          mIndex;
    // NOLINTEND
};
#else // @header-generator platform
struct SemanticDescription {};
#endif // @header-generator platform

} // namespace dragon::materials::definition

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace dragon::materials::definition { struct StageInputMap; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::materials {

#if defined(LL_PLAT_A) // @header-generator platform
struct PassProgramHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 4, std::optional<ushort>>                                 mHandle;
    ::ll::TypedStorage<8, 8, ::dragon::materials::definition::StageInputMap const*> mInputDeclaration;
    // NOLINTEND
};
#else // @header-generator platform
struct PassProgramHandle {};
#endif // @header-generator platform

} // namespace dragon::materials

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace bgfx { struct Caps; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct InternalData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bgfx::Caps const*> caps;
    ::ll::TypedStorage<8, 8, void*>               context;
    // NOLINTEND
};
#else // @header-generator platform
struct InternalData {};
#endif // @header-generator platform

} // namespace bgfx

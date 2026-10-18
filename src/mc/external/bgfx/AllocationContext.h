#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace bgfx { struct AllocationPolicyBase; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct AllocationContext {
public:
    // AllocationContext inner types define
    using Base = ::bgfx::AllocationPolicyBase;
};
#else // @header-generator platform
struct AllocationContext {};
#endif // @header-generator platform

} // namespace bgfx

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/AllocationPolicy.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/AllocationPolicy.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct AllocationPolicyBase : public ::bgfx::AllocationPolicy {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct AllocationPolicyBase : public ::bgfx::AllocationPolicy {};
#else // @header-generator platform
struct AllocationPolicyBase {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace bgfx

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/tinystl/unordered_map.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct TinyStlAllocator; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx::gl {

#if defined(LL_PLAT_A) // @header-generator platform
class SamplerStateCache {
public:
    // SamplerStateCache inner types define
    using HashMap = ::tinystl::unordered_map<uint, uint, bgfx::TinyStlAllocator>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> m_hashMap;
    // NOLINTEND
};
#else // @header-generator platform
class SamplerStateCache {};
#endif // @header-generator platform

} // namespace bgfx::gl

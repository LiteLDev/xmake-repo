#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/UniformRegInfo.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct UniformHandle; }
namespace bx { template<int T0, typename T1> class HandleHashMapT; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
class UniformRegistry {
public:
    // UniformRegistry inner types define
    using UniformHashMap = ::bx::HandleHashMapT<1024, uint>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 6152>                            m_uniforms;
    ::ll::TypedStorage<2, 1024, ::bgfx::UniformRegInfo[512]> m_info;
    // NOLINTEND
};
#else // @header-generator platform
class UniformRegistry {};
#endif // @header-generator platform

} // namespace bgfx

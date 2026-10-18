#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace bgfx { class UniformBuffer; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace bgfx { class UniformBuffer; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
class UniformBufferView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bgfx::UniformBuffer const*> m_uniforms;
    ::ll::TypedStorage<4, 4, uint>                         m_size;
    ::ll::TypedStorage<4, 4, uint>                         m_pos;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class UniformBufferView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bgfx::UniformBuffer const*> m_uniforms;
    ::ll::TypedStorage<4, 4, uint>                         m_size;
    ::ll::TypedStorage<4, 4, uint>                         m_pos;
    // NOLINTEND
};
#else // @header-generator platform
class UniformBufferView {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace bgfx

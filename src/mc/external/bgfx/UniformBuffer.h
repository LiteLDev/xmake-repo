#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/UniformType.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct UniformHandle; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
class UniformBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                    m_size;
    ::ll::TypedStorage<4, 4, uint>                    m_pos;
    ::ll::TypedStorage<1, 268435456, char[268435456]> m_buffer;
    // NOLINTEND

public:
    // prevent constructor by default
    UniformBuffer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void writeUniformHandle(::bgfx::UniformType::Enum, ushort, ::bgfx::UniformHandle, ushort);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class UniformBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                    m_size;
    ::ll::TypedStorage<4, 4, uint>                    m_pos;
    ::ll::TypedStorage<1, 268435456, char[268435456]> m_buffer;
    // NOLINTEND
};
#else // @header-generator platform
class UniformBuffer {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace bgfx

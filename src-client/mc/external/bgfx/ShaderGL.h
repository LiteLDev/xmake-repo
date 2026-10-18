#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Memory; }
// clang-format on

namespace bgfx::gl {

struct ShaderGL {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> m_id;
    ::ll::TypedStorage<4, 4, uint> m_type;
    ::ll::TypedStorage<4, 4, uint> m_hash;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void create(::bgfx::Memory const*);
    // NOLINTEND
};

} // namespace bgfx::gl
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

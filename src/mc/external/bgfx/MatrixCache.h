#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/Matrix4.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/Matrix4.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct MatrixCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4194304, ::bgfx::Matrix4[65536]> m_cache;
    ::ll::UntypedStorage<4, 16>                            m_num;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct MatrixCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4194304, ::bgfx::Matrix4[65536]> m_cache;
    ::ll::TypedStorage<4, 16, uint>                        m_num;
    // NOLINTEND
};
#else // @header-generator platform
struct MatrixCache {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace bgfx

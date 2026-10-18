#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/OcclusionQueryHandle.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Frame; }
namespace bx { class RingBufferControl; }
// clang-format on

namespace bgfx::gl {

struct OcclusionQueryGL {
public:
    // OcclusionQueryGL inner types declare
    // clang-format off
    struct Query;
    // clang-format on

    // OcclusionQueryGL inner types define
    struct Query {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                         m_id;
        ::ll::TypedStorage<2, 2, ::bgfx::OcclusionQueryHandle> m_handle;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 2048, ::bgfx::gl::OcclusionQueryGL::Query[256]> m_query;
    ::ll::UntypedStorage<4, 16>                                           m_control;
    // NOLINTEND
};

} // namespace bgfx::gl
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

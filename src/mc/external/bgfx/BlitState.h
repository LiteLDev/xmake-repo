#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/BlitKey.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct BlitItem; }
namespace bgfx { struct Frame; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct BlitState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bgfx::Frame const*> m_frame;
    ::ll::TypedStorage<2, 4, ::bgfx::BlitKey>      m_key;
    ::ll::TypedStorage<2, 2, ushort>               m_item;
    // NOLINTEND

public:
    // prevent constructor by default
    BlitState();
};
#else // @header-generator platform
struct BlitState {};
#endif // @header-generator platform

} // namespace bgfx

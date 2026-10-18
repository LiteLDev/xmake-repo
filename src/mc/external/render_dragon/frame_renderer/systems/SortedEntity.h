#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/systems/OrderSortKey.h"
#include "mc/external/render_dragon/frame_renderer/systems/RenderTargetSortKey.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer {

#if defined(LL_PLAT_A) // @header-generator platform
struct SortedEntity {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ulong> mEntityIndex;
    ::ll::TypedStorage<8, 16, std::variant<std::monostate, dragon::framerenderer::OrderSortKey, dragon::framerenderer::RenderTargetSortKey>> mSortKey;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
struct SortedEntity {};
#endif // @header-generator platform

} // namespace dragon::framerenderer

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/systems/OrderSortKey.h"
#include "mc/external/render_dragon/frame_renderer/systems/RenderTargetSortKey.h"

namespace dragon::framerenderer {

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

} // namespace dragon::framerenderer

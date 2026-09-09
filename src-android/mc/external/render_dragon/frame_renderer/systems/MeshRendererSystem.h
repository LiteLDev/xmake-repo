#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/math/Rect.h"

// auto generated forward declare list
// clang-format off
namespace dragon::bgfximpl { struct GPUState; }
namespace dragon::framerenderer { class CommandContext; }
namespace dragon::framerenderer { class StateFlagPreparedDraws; }
namespace dragon::framerenderer { struct PreparedDraw; }
namespace dragon::materials { class MaterialUniformOverrides; }
// clang-format on

namespace dragon::framerenderer {

class MeshRendererSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void Render(
        ::dragon::framerenderer::CommandContext&,
        ::dragon::framerenderer::StateFlagPreparedDraws const&,
        ::cg::math::Rect<ushort> const&,
        ::dragon::materials::MaterialUniformOverrides const*
    );

    MCNAPI static bool RenderItem(
        ::dragon::framerenderer::PreparedDraw const&,
        ::dragon::framerenderer::CommandContext&,
        ::cg::math::Rect<ushort> const&,
        ::dragon::bgfximpl::GPUState const&,
        ::dragon::materials::MaterialUniformOverrides const*
    );
    // NOLINTEND
};

} // namespace dragon::framerenderer

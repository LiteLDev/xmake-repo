#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/SamplerBinding.h"
#include "mc/external/render_dragon/frame_renderer/UniformBinding.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace dragon::framerenderer { class CommandContext; }
// clang-format on

namespace dragon::framerenderer::drawcommands {

struct GraphicsCommandContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::framerenderer::CommandContext&>                          mCommands;
    ::ll::TypedStorage<8, 24, std::vector<dragon::framerenderer::drawcommands::UniformBinding>> mUniforms;
    ::ll::UntypedStorage<8, 48>                                                                 mSamplerBindings;
    // NOLINTEND

public:
    // prevent constructor by default
    GraphicsCommandContext& operator=(GraphicsCommandContext const&);
    GraphicsCommandContext(GraphicsCommandContext const&);
    GraphicsCommandContext();
};

} // namespace dragon::framerenderer::drawcommands

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::framerenderer { class CommandContext; }
// clang-format on

namespace dragon::framerenderer::drawcommands {

struct BlitCommandContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::framerenderer::CommandContext&> mCommands;
    // NOLINTEND

public:
    // prevent constructor by default
    BlitCommandContext& operator=(BlitCommandContext const&);
    BlitCommandContext(BlitCommandContext const&);
    BlitCommandContext();
};

} // namespace dragon::framerenderer::drawcommands

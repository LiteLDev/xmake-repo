#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce::framebuilder { struct GamefaceRenderTarget; }
// clang-format on

namespace Gameface {

struct GamefaceRenderTargetVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::framebuilder::GamefaceRenderTarget&> mTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    GamefaceRenderTargetVisitor& operator=(GamefaceRenderTargetVisitor const&);
    GamefaceRenderTargetVisitor(GamefaceRenderTargetVisitor const&);
    GamefaceRenderTargetVisitor();
};

} // namespace Gameface

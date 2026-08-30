#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

namespace mce::framebuilder::bgfxbridge {

struct UITarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mColor;
    ::ll::UntypedStorage<8, 24> mDepth;
    // NOLINTEND

public:
    // prevent constructor by default
    UITarget& operator=(UITarget const&);
};

} // namespace mce::framebuilder::bgfxbridge

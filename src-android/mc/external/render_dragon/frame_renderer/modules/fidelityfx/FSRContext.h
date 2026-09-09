#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/math/Rect.h"
#include "mc/external/render_dragon/frame_object/components/MaterialFilter.h"

namespace dragon::framerenderer::modules::fidelityfx::fsr1 {

struct FSRContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 8>                                                    mViewport;
    ::ll::TypedStorage<8, 8, std::unordered_map<std::string, std::string> const&> mMaterialFlags;
    ::ll::TypedStorage<8, 136, ::dragon::frameobject::components::MaterialFilter> mFSRMaterialFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    FSRContext& operator=(FSRContext const&);
    FSRContext(FSRContext const&);
    FSRContext();
};

} // namespace dragon::framerenderer::modules::fidelityfx::fsr1

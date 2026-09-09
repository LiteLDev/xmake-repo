#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Mesh; }
// clang-format on

namespace mce::framebuilder::bgfxbridge {

struct BVHMeshKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long const>               mMeshGroupId;
    ::ll::TypedStorage<2, 2, ushort const>             mSubSpanId;
    ::ll::TypedStorage<8, 8, ::mce::Mesh const* const> mMeshPtr;
    // NOLINTEND
};

} // namespace mce::framebuilder::bgfxbridge

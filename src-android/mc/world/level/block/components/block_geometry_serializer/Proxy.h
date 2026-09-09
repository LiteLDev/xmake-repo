#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/level/block/components/BlockRendererDescription.h"

namespace BlockGeometrySerializer {

struct Proxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>                             mGeometryName;
    ::ll::TypedStorage<8, 40, ::HashedString>                             mCullingName;
    ::ll::TypedStorage<8, 40, ::HashedString>                             mCullingShapeName;
    ::ll::TypedStorage<8, 40, ::HashedString>                             mCullingLayer;
    ::ll::TypedStorage<8, 24, std::map<std::string, ExpressionNode>>      mBoneVisibilities;
    ::ll::TypedStorage<8, 32, std::variant<bool, std::set<HashedString>>> mUVsLocked;
    ::ll::TypedStorage<4, 52, ::BlockRendererDescription>                 mRenderer;
    // NOLINTEND
};

} // namespace BlockGeometrySerializer

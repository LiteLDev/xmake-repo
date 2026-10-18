#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/molang/ExpressionNode.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/components/BlockRendererDescription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class ExpressionNode;
// clang-format on
#endif // @header-generator platform

namespace BlockGeometrySerializer {

struct Proxy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>                             mGeometryName;
    ::ll::TypedStorage<8, 40, ::HashedString>                             mCullingName;
    ::ll::TypedStorage<8, 40, ::HashedString>                             mCullingShapeName;
    ::ll::TypedStorage<8, 40, ::HashedString>                             mCullingLayer;
    ::ll::TypedStorage<8, 24, std::map<std::string, ExpressionNode>>      mBoneVisibilities;
    ::ll::TypedStorage<8, 32, std::variant<bool, std::set<HashedString>>> mUVsLocked;
    ::ll::TypedStorage<4, 52, ::BlockRendererDescription>                 mRenderer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>                                   mGeometryName;
    ::ll::TypedStorage<8, 48, ::HashedString>                                   mCullingName;
    ::ll::TypedStorage<8, 48, ::HashedString>                                   mCullingShapeName;
    ::ll::TypedStorage<8, 48, ::HashedString>                                   mCullingLayer;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::ExpressionNode>>      mBoneVisibilities;
    ::ll::TypedStorage<8, 24, ::std::variant<bool, ::std::set<::HashedString>>> mUVsLocked;
    ::ll::TypedStorage<4, 52, ::BlockRendererDescription>                       mRenderer;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace BlockGeometrySerializer

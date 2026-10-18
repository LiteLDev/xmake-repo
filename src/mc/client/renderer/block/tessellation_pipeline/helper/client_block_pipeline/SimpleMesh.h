#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/TessellatorQuadInfo.h"
#include "mc/deps/minecraft_renderer/renderer/MeshData.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/MeshData.h"

// auto generated forward declare list
// clang-format off
struct TessellatorQuadInfo;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct SimpleMesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 336, ::mce::MeshData>                 mMeshData;
    ::ll::TypedStorage<8, 24, std::vector<TessellatorQuadInfo>> mQuadInfoList;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SimpleMesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 336, ::mce::MeshData>                     mMeshData;
    ::ll::TypedStorage<8, 24, ::std::vector<::TessellatorQuadInfo>> mQuadInfoList;
    // NOLINTEND
};
#else // @header-generator platform
struct SimpleMesh {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline

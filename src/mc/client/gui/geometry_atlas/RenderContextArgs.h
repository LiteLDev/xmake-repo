#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class ItemRenderer;
namespace dragon::atlas { class IAtlasUserOperations; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class ItemRenderer;
namespace dragon::atlas { class IAtlasUserOperations; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct RenderContextArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemRenderer&>                        mItemRenderer;
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext&>              mRenderContext;
    ::ll::TypedStorage<8, 8, ::dragon::atlas::IAtlasUserOperations&> mUserOperations;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderContextArgs& operator=(RenderContextArgs const&);
    RenderContextArgs(RenderContextArgs const&);
    RenderContextArgs();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct RenderContextArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemRenderer&>                        mItemRenderer;
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext&>              mRenderContext;
    ::ll::TypedStorage<8, 8, ::dragon::atlas::IAtlasUserOperations&> mUserOperations;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderContextArgs& operator=(RenderContextArgs const&);
    RenderContextArgs(RenderContextArgs const&);
    RenderContextArgs();
};
#else // @header-generator platform
struct RenderContextArgs {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas

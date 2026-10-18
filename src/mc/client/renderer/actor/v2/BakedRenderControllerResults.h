#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/v2/BakedRenderControllerMetaData.h"
#include "mc/client/renderer/actor/v2/BakedRenderControllerPartVisibilityData.h"
#include "mc/client/renderer/actor/v2/BakedRenderControllerUniformData.h"
#include "mc/client/renderer/actor/v2/BakedResourceExtendedOffsets.h"
#include "mc/client/renderer/actor/v2/BakedResourceOffsets.h"
#include "mc/client/renderer/actor/v2/GeometryResourceSpan.h"
#include "mc/client/renderer/actor/v2/TextureResourceSpan.h"

struct BakedRenderControllerResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::BakedResourceOffsets>                   mResourceData;
    ::ll::TypedStorage<4, 8, ::BakedResourceExtendedOffsets>            mResourceExtendedData;
    ::ll::TypedStorage<4, 20, ::BakedRenderControllerUniformData>       mUniformData;
    ::ll::TypedStorage<4, 8, ::BakedRenderControllerPartVisibilityData> mPartVisibilityData;
    ::ll::TypedStorage<4, 8, ::BakedRenderControllerMetaData>           mMetaData;
    ::ll::TypedStorage<4, 8, ::TextureResourceSpan>                     mTextureResources;
    ::ll::TypedStorage<4, 8, ::GeometryResourceSpan>                    mGeometryResources;
    ::ll::TypedStorage<1, 1, bool>                                      mHasExpressions;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/v2/BakedRenderControllerMetaData.h"
#include "mc/client/renderer/actor/v2/BakedRenderControllerPartVisibilityData.h"
#include "mc/client/renderer/actor/v2/BakedRenderControllerUniformData.h"
#include "mc/client/renderer/actor/v2/BakedResourceExtendedOffsets.h"
#include "mc/client/renderer/actor/v2/BakedResourceOffsets.h"
#include "mc/client/renderer/actor/v2/GeometryResourceSpan.h"
#include "mc/client/renderer/actor/v2/TextureResourceSpan.h"

struct BakedRenderControllerResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::BakedResourceOffsets>                   mResourceData;
    ::ll::TypedStorage<4, 8, ::BakedResourceExtendedOffsets>            mResourceExtendedData;
    ::ll::TypedStorage<4, 20, ::BakedRenderControllerUniformData>       mUniformData;
    ::ll::TypedStorage<4, 8, ::BakedRenderControllerPartVisibilityData> mPartVisibilityData;
    ::ll::TypedStorage<4, 8, ::BakedRenderControllerMetaData>           mMetaData;
    ::ll::TypedStorage<4, 8, ::TextureResourceSpan>                     mTextureResources;
    ::ll::TypedStorage<4, 8, ::GeometryResourceSpan>                    mGeometryResources;
    ::ll::TypedStorage<1, 1, bool>                                      mHasExpressions;
    // NOLINTEND
};
#else // @header-generator platform
struct BakedRenderControllerResults {};
#endif // @header-generator platform
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockRandomOffsetComponent;
struct BlockBakedMaterialDataComponent;
struct BlockGeometryComponent;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockRandomOffsetComponent;
struct BlockBakedMaterialDataComponent;
struct BlockGeometryComponent;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct BlockLookupData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockBakedMaterialDataComponent const*> mMaterial;
    ::ll::TypedStorage<8, 8, ::BlockGeometryComponent const*>          mGeometry;
    ::ll::TypedStorage<8, 8, ::BlockRandomOffsetComponent const*>      mRandomOffset;
    ::ll::TypedStorage<4, 64, ::Matrix>                                mTransform;
    ::ll::TypedStorage<8, 8, ::Block const*>                           mBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockLookupData& operator=(BlockLookupData const&);
    BlockLookupData();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BlockLookupData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockBakedMaterialDataComponent const*> mMaterial;
    ::ll::TypedStorage<8, 8, ::BlockGeometryComponent const*>          mGeometry;
    ::ll::TypedStorage<8, 8, ::BlockRandomOffsetComponent const*>      mRandomOffset;
    ::ll::TypedStorage<4, 64, ::Matrix>                                mTransform;
    ::ll::TypedStorage<8, 8, ::Block const*>                           mBlock;
    // NOLINTEND
};
#else // @header-generator platform
struct BlockLookupData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline

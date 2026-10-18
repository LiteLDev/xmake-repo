#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/world/Flip.h"
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/world/Flip.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace ClientBlockPipeline {

class UvTransform {
public:
    // UvTransform inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class BoxType : uchar {
        CUSTOM_BOX_WITH_LEGACY_TOP_ROTATION = 0,
        CUSTOM_BOX_NO_LEGACY_TOP_ROTATION   = 1,
        MINECRAFT_FULL_BLOCK_V1             = 2,
        MINECRAFT_FULL_BLOCK                = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 32, std::array<Vec2, 4>> mUVs;
    // NOLINTEND

public:
    // prevent constructor by default
    UvTransform(UvTransform const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::array<Vec2, 4> _initFlipUvs(::Flip);

    MCNAPI void flipTransform(::Flip);

    MCNAPI void lockUVs(uchar, uchar, uchar, uchar, ::ClientBlockPipeline::UvTransform::BoxType);

    MCNAPI void setFromStartAndEnd(::Vec2, ::Vec2);

    MCNAPI void setFromStartAndSize(::Vec2, ::Vec2);
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class BoxType : uchar {
        CustomBoxWithLegacyTopRotation = 0,
        CustomBoxNoLegacyTopRotation   = 1,
        MinecraftFullBlockV1           = 2,
        MinecraftFullBlock             = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 32, ::std::array<::Vec2, 4>> mUVs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void flipTransform(::Flip flip);

    MCAPI void lockUVs(
        uchar                                       rotX,
        uchar                                       rotY,
        uchar                                       rotZ,
        uchar                                       face,
        ::ClientBlockPipeline::UvTransform::BoxType orientationType
    );
    // NOLINTEND
#else // @header-generator platform
    enum class BoxType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace ClientBlockPipeline

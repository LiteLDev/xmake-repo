#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/AlphaUsage.h"
#include "mc/deps/core_graphics/ImageType.h"
#include "mc/deps/core_graphics/enums/ColorSpace.h"
#include "mc/deps/core_graphics/enums/TextureFormat.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

namespace cg {

struct ImageDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                 mWidth;
    ::ll::TypedStorage<4, 4, uint>                 mHeight;
    ::ll::TypedStorage<4, 4, ::mce::TextureFormat> mTextureFormat;
    ::ll::TypedStorage<1, 1, ::cg::ColorSpace>     mColorSpace;
    ::ll::TypedStorage<1, 1, ::cg::ImageType>      mImageType;
    ::ll::TypedStorage<1, 1, ::mce::AlphaUsage>    mAlphaUsage;
    ::ll::TypedStorage<4, 4, uint>                 mArraySizeOrDepth;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ImageDescription(::mce::Image const&);

    MCNAPI ImageDescription(
        uint const,
        uint const,
        ::mce::TextureFormat const,
        ::cg::ColorSpace const,
        ::cg::ImageType,
        uint const,
        ::mce::AlphaUsage
    );

    MCNAPI uint getArraySize() const;

    MCNAPI uint getDepth() const;

    MCNAPI uint getStorageSize() const;

    MCNAPI uint getSubimageSize() const;

    MCNAPI bool operator!=(::cg::ImageDescription const&) const;

    MCNAPI bool operator==(::cg::ImageDescription const&) const;

    MCNAPI void setArraySize(uint const);

    MCNAPI void setDepth(uint const);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint getStrideFromFormat(::mce::TextureFormat const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::Image const&);

    MCNAPI void* $ctor(
        uint const,
        uint const,
        ::mce::TextureFormat const,
        ::cg::ColorSpace const,
        ::cg::ImageType,
        uint const,
        ::mce::AlphaUsage
    );
    // NOLINTEND
};

} // namespace cg

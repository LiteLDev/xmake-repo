#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/image/Image.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/AlphaUsage.h"
#include "mc/deps/core_graphics/ImageType.h"
#include "mc/deps/core_graphics/enums/ColorSpace.h"
#include "mc/deps/core_graphics/enums/TextureFormat.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace cg {

struct ImageDescription {
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    LLAPI ImageDescription();
    LLAPI ImageDescription(
        uint32             width,
        uint32             height,
        mce::TextureFormat format,
        cg::ColorSpace     colorSpace,
        cg::ImageType      imageType,
        uint32             arraySizeOrDepth
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LLAPI explicit ImageDescription(const mce::Image& image);
    ImageDescription(const ImageDescription&)            = default;
    ImageDescription& operator=(const ImageDescription&) = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getArraySize() const;
#else // @header-generator platform
    LLAPI bool operator!=(const ImageDescription& rhs) const;
    bool       operator==(const ImageDescription& rhs) const { return !(*this != rhs); }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getDepth() const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getStorageSize() const;
#else // @header-generator platform
    LLAPI void     setArraySize(uint32 size);
    LLNDAPI uint32 getArraySize() const;
    LLNDAPI uint32 getDepth() const;
    LLNDAPI uint32 getSubimageSize() const;
    LLNDAPI uint64 getStorageSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getSubimageSize() const;
#else // @header-generator platform
    LLAPI static uint32 getStrideFromFormat(mce::TextureFormat fmt);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator!=(::cg::ImageDescription const&) const;
#else // @header-generator platform
    uint32             mWidth{0};
    uint32             mHeight{0};
    mce::TextureFormat mTextureFormat;
    cg::ColorSpace     mColorSpace{cg::ColorSpace::Unknown};
    cg::ImageType      mImageType{cg::ImageType::Texture2D};
    mce::AlphaUsage    mAlphaUsage{mce::AlphaUsage::Unknown};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
private:
    uint32 mArraySizeOrDepth{1};
#endif // @header-generator platform
};

} // namespace cg

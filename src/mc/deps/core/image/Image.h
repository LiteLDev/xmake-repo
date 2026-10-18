#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/Blob.h"
#include "mc/deps/core/image/ImageFormat.h"
#include "mc/deps/core/image/ImageUsage.h"
#include "mc/deps/core/math/AlphaUsage.h"

namespace mce {

struct Image {
#if defined(LL_PLAT_A) // @header-generator platform
public:
    // Image inner types define
    using Storage = ::mce::Blob;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::mce::ImageFormat> imageFormat;
    ::ll::TypedStorage<4, 4, uint>               mWidth;
    ::ll::TypedStorage<4, 4, uint>               mHeight;
    ::ll::TypedStorage<4, 4, uint>               mDepth;
    ::ll::TypedStorage<1, 1, ::mce::ImageUsage>  mUsage;
    ::ll::TypedStorage<1, 1, ::mce::AlphaUsage>  mAlphaUsage;
    ::ll::TypedStorage<8, 24, ::mce::Blob>       mImageBytes;
    // NOLINTEND
#else // @header-generator platform
    using Storage = mce::Blob;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Image(::mce::Blob&&);
#else // @header-generator platform
    mce::ImageFormat    imageFormat;
    uint32              mWidth;
    uint32              mHeight;
    uint32              mDepth;
    mce::ImageUsage     mUsage;
    mce::AlphaUsage     mAlphaUsage;
    mce::Image::Storage mImageBytes;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Image(uint const, uint const, ::mce::ImageFormat const, ::mce::ImageUsage const);
#else // @header-generator platform
    LLNDAPI Image();
    LLNDAPI Image(uint32 w, uint32 h, mce::ImageFormat format, mce::ImageUsage usage);
    LLNDAPI Image(uint32 w, uint32 h, uint32 d, mce::ImageFormat format, mce::ImageUsage usage);
    LLNDAPI Image(const mce::Image&);
    LLNDAPI Image(mce::Image&&);
    LLNDAPI Image(mce::Image::Storage&&);
    LLAPI ~Image();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Image clone() const;

    MCNAPI bool isEmpty() const;

    MCNAPI void resizeImageBytesToFitImageDescription();

    MCNAPI void setRawImage(::mce::Blob&&);

    MCNAPI ~Image();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::Blob&&);

    MCNAPI void* $ctor(uint const, uint const, ::mce::ImageFormat const, ::mce::ImageUsage const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    LLAPI mce::Image& operator=(const mce::Image&);
    LLAPI mce::Image& operator=(mce::Image&&);
    LLAPI void        setRawImage(mce::Image::Storage&& contents);
    LLAPI void        setImageDescription(uint32 w, uint32 h, mce::ImageFormat format, mce::ImageUsage usage);
    LLAPI void        setImageDescription(uint32 w, uint32 h, uint32 d, mce::ImageFormat format, mce::ImageUsage usage);
    LLAPI void        copyRawImage(const mce::Image::Storage&);
    LLAPI mce::Image clone() const;
    LLAPI bool       isEmpty() const;
    LLAPI void       resizeImageBytesToFitImageDescription();
#endif // @header-generator platform
};

} // namespace mce

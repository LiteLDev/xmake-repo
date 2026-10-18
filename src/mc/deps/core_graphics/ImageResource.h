#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core_graphics/ImageBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core_graphics/ImageDescription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on
#endif // @header-generator platform

namespace cg {

class ImageResource {
public:
    // ImageResource inner types declare
    // clang-format off
    struct StreamedResource;
    // clang-format on

    // ImageResource inner types define
    struct StreamedResource {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<cg::ImageBuffer>> mLoadedMipData;
        ::ll::TypedStorage<8, 24, std::vector<uchar>>           mLoadedMipLevels;
        ::ll::TypedStorage<8, 8, ulong>                         mImageHash;
        ::ll::TypedStorage<4, 20, ::cg::ImageDescription>       mSourceImageDescription;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::cg::ImageBuffer>> mLoadedMipData;
        ::ll::TypedStorage<8, 24, ::std::vector<uchar>>             mLoadedMipLevels;
        ::ll::TypedStorage<8, 8, uint64>                            mImageHash;
        ::ll::TypedStorage<4, 20, ::cg::ImageDescription>           mSourceImageDescription;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        StreamedResource& operator=(StreamedResource const&);
        StreamedResource(StreamedResource const&);
        StreamedResource();
#else // @header-generator platform
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI ~StreamedResource();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI void $dtor();
#endif
        // NOLINTEND
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using ImageData = std::variant<std::vector<cg::ImageBuffer>, cg::ImageResource::StreamedResource>;
#else // @header-generator platform
    using ImageData = ::std::variant<::std::vector<::cg::ImageBuffer>, ::cg::ImageResource::StreamedResource>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ImageHash = ulong;
#else // @header-generator platform
    using ImageHash = uint64;
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImageResource() = default;

    virtual bool isEmpty() const = 0;

    virtual bool isValid() const = 0;

    virtual uint getSize() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cg::ImageBuffer const* getImage(uint) const = 0;
#else // @header-generator platform
    virtual ::cg::ImageBuffer const* getImage(uint mipLevel) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addImage(std::shared_ptr<cg::ImageResource>) = 0;
#else // @header-generator platform
    virtual void addImage(::cg::ImageBuffer imageToAdd) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addImage(::cg::ImageBuffer) = 0;
#else // @header-generator platform
    virtual void addImage(::std::shared_ptr<::cg::ImageResource> imageToAdd) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::variant<std::vector<cg::ImageBuffer>, cg::ImageResource::StreamedResource> unwrapImageData() = 0;
#else // @header-generator platform
    virtual ::std::variant<::std::vector<::cg::ImageBuffer>, ::cg::ImageResource::StreamedResource>
    unwrapImageData() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cg::ImageDescription getImageDescription(uchar) const = 0;
#else // @header-generator platform
    virtual ::cg::ImageDescription getImageDescription(uchar mipLevel) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cg

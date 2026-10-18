#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core_graphics/ImageBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core_graphics/ImageResource.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace cg { class ImageBuffer; }
#endif // @header-generator platform
namespace cg { struct ImageDescription; }
// clang-format on

namespace cg {

class MippedImageResource : public ::cg::ImageResource {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<cg::ImageBuffer>> mImageData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::cg::ImageBuffer>> mImageData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MippedImageResource();
#else // @header-generator platform
    virtual ~MippedImageResource() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isEmpty() const;
#else // @header-generator platform
    virtual bool isEmpty() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValid() const;
#else // @header-generator platform
    virtual bool isValid() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint getSize() const;
#else // @header-generator platform
    virtual uint getSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cg::ImageBuffer const* getImage(uint) const;
#else // @header-generator platform
    virtual ::cg::ImageBuffer const* getImage(uint mipLevel) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addImage(std::shared_ptr<cg::ImageResource>);
#else // @header-generator platform
    virtual void addImage(::cg::ImageBuffer imageToAdd) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addImage(::cg::ImageBuffer);
#else // @header-generator platform
    virtual void addImage(::std::shared_ptr<::cg::ImageResource> imageToAdd) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::variant<std::vector<cg::ImageBuffer>, cg::ImageResource::StreamedResource> unwrapImageData();
#else // @header-generator platform
    virtual ::std::variant<::std::vector<::cg::ImageBuffer>, ::cg::ImageResource::StreamedResource>
    unwrapImageData() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cg::ImageDescription getImageDescription(uchar) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::cg::ImageDescription getImageDescription(uchar mipLevel) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isEmpty() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD bool $isEmpty() const;

    MCFOLD bool $isValid() const;

    MCFOLD uint $getSize() const;

    MCAPI ::cg::ImageBuffer const* $getImage(uint mipLevel) const;

    MCAPI void $addImage(::cg::ImageBuffer imageToAdd);

    MCAPI void $addImage(::std::shared_ptr<::cg::ImageResource> imageToAdd);

    MCAPI ::std::variant<::std::vector<::cg::ImageBuffer>, ::cg::ImageResource::StreamedResource> $unwrapImageData();

    MCAPI ::cg::ImageDescription $getImageDescription(uchar mipLevel) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid() const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $getSize() const;

    MCNAPI ::cg::ImageBuffer const* $getImage(uint) const;

    MCNAPI void $addImage(std::shared_ptr<cg::ImageResource>);

    MCNAPI void $addImage(::cg::ImageBuffer);

    MCNAPI std::variant<std::vector<cg::ImageBuffer>, cg::ImageResource::StreamedResource> $unwrapImageData();

    MCNAPI ::cg::ImageDescription $getImageDescription(uchar) const;
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cg

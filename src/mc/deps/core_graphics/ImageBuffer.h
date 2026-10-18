#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/Blob.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/math/AlphaUsage.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core_graphics/ImageDescription.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

namespace cg {

class ImageBuffer {
public:
    // ImageBuffer inner types define
    using Storage = ::mce::Blob;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::mce::Blob>            mStorage;
    ::ll::TypedStorage<4, 20, ::cg::ImageDescription> mImageDescription;
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ImageBuffer();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ImageBuffer(::cg::ImageBuffer const&);

    MCNAPI explicit ImageBuffer(::mce::Image&&);

    MCNAPI explicit ImageBuffer(::mce::Image const&);

    MCNAPI explicit ImageBuffer(::cg::ImageDescription const&);

    MCNAPI void allocateStorage(::cg::ImageDescription const&);

    MCNAPI ::cg::ImageBuffer clone() const;

    MCNAPI uchar const* get(uint) const;

    MCNAPI uchar* get(uint);

    MCNAPI ::cg::ImageDescription const& getImageDescription() const;

    MCNAPI ::gsl::span<const uchar> getSpan() const;

    MCNAPI ::gsl::span<uchar> getSpan();

    MCNAPI ulong getStorageSize() const;

    MCNAPI bool isEmpty() const;

    MCNAPI bool isValid() const;

    MCNAPI ::cg::ImageBuffer& operator=(::cg::ImageBuffer const&);

    MCNAPI ::cg::ImageBuffer& operator=(::cg::ImageBuffer&&);

    MCNAPI ::mce::Blob releaseStorage();

    MCNAPI void setAlphaUsage(::mce::AlphaUsage);

    MCNAPI void zeroImage();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit ImageBuffer(::cg::ImageDescription const& imageDesc);

    MCAPI ImageBuffer(::cg::ImageBuffer&& other);

    MCAPI explicit ImageBuffer(::mce::Image&& rhs);

    MCAPI explicit ImageBuffer(::mce::Image const& rhs);

    MCAPI ImageBuffer(::cg::ImageBuffer const& rhs);

    MCAPI ::cg::ImageBuffer& operator=(::cg::ImageBuffer&& other);

    MCAPI ::cg::ImageBuffer& operator=(::cg::ImageBuffer const& other);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::cg::ImageBuffer const&);

    MCNAPI void* $ctor(::mce::Image&&);

    MCNAPI void* $ctor(::mce::Image const&);

    MCNAPI void* $ctor(::cg::ImageDescription const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::cg::ImageDescription const& imageDesc);

    MCAPI void* $ctor(::cg::ImageBuffer&& other);

    MCAPI void* $ctor(::mce::Image&& rhs);

    MCAPI void* $ctor(::mce::Image const& rhs);

    MCAPI void* $ctor(::cg::ImageBuffer const& rhs);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cg

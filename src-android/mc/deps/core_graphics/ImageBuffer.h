#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/Blob.h"
#include "mc/deps/core/math/AlphaUsage.h"
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

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cg::ImageBuffer const&);

    MCNAPI void* $ctor(::mce::Image&&);

    MCNAPI void* $ctor(::mce::Image const&);

    MCNAPI void* $ctor(::cg::ImageDescription const&);
    // NOLINTEND
};

} // namespace cg

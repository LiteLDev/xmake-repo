#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/Blob.h"
#include "mc/deps/core_graphics/CompressedImageDescription.h"

namespace cg {

class CompressedImageBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::mce::Blob>                      mStorage;
    ::ll::TypedStorage<4, 16, ::cg::CompressedImageDescription> mImageDescription;
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    CompressedImageBuffer& operator=(CompressedImageBuffer const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CompressedImageBuffer& operator=(CompressedImageBuffer const&);
    CompressedImageBuffer();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CompressedImageBuffer(::cg::CompressedImageBuffer const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI CompressedImageBuffer(::cg::CompressedImageBuffer const& imageBuffer);

    MCAPI CompressedImageBuffer(uchar const* data, uint64 size, ::cg::CompressedImageDescription const& desc);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::cg::CompressedImageBuffer const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::cg::CompressedImageBuffer const& imageBuffer);

    MCAPI void* $ctor(uchar const* data, uint64 size, ::cg::CompressedImageDescription const& desc);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cg

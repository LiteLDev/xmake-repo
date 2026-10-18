#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageDescription.h"

namespace cg {

struct TextureDescription : public ::cg::ImageDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mMipCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit TextureDescription(::cg::ImageDescription const&);

    MCNAPI bool operator!=(::cg::TextureDescription const&) const;

    MCNAPI bool operator==(::cg::TextureDescription const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cg::ImageDescription const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool operator!=(::cg::TextureDescription const& rhs) const;
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cg

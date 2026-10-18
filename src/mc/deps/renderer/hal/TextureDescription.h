#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core_graphics/TextureDescription.h"
#include "mc/deps/renderer/hal/SampleDescription.h"
#include "mc/deps/renderer/hal/enums/BindFlagsBit.h"

// auto generated forward declare list
// clang-format off
namespace cg { struct ImageDescription; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core_graphics/TextureDescription.h"
#include "mc/deps/renderer/hal/SampleDescription.h"
#include "mc/deps/renderer/hal/enums/BindFlagsBit.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct TextureDescription : public ::cg::TextureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::SampleDescription> mSampleDescription;
    ::ll::TypedStorage<4, 16, ::mce::Color>             mClearColor;
    ::ll::TypedStorage<4, 4, float>                     mOptimizedClearDepth;
    ::ll::TypedStorage<1, 1, uchar>                     mOptimizedClearStencil;
    ::ll::TypedStorage<8, 8, ::mce::BindFlagsBit>       mBindFlags;
    ::ll::TypedStorage<1, 1, bool>                      mIsStaging;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint getMipHeight(uint const) const;

    MCNAPI uint getMipWidth(uint const) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::mce::TextureDescription getDefaultTextureDescription(int const, int const);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TextureDescription : public ::cg::TextureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::mce::SampleDescription> mSampleDescription;
    ::ll::TypedStorage<4, 16, ::mce::Color>            mClearColor;
    ::ll::TypedStorage<4, 4, float>                    mOptimizedClearDepth;
    ::ll::TypedStorage<1, 1, uchar>                    mOptimizedClearStencil;
    ::ll::TypedStorage<4, 4, ::mce::BindFlagsBit>      mBindFlags;
    ::ll::TypedStorage<1, 1, bool>                     mIsStaging;
    // NOLINTEND
};
#else // @header-generator platform
struct TextureDescription {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce

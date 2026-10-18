#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/AsepriteFrameInformation.h"
#include "mc/client/gui/SliceSize.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace Json { class Value; }
// clang-format on

class UITextureInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::ui::SliceSize>                        mNineslice;
    ::ll::TypedStorage<1, 1, bool>                                    mHasNineslice;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mBaseUVSize;
    ::ll::TypedStorage<8, 24, std::vector<AsepriteFrameInformation>>  mAsepriteFrames;
    ::ll::TypedStorage<4, 4, int>                                     mTotalDurationInMilliseconds;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> const& getBaseUVSize() const;

    MCNAPI void getPositionAfterMilliseconds(int, int&, int&) const;

    MCNAPI bool hasNineslice() const;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/SliceSize.h"

// auto generated forward declare list
// clang-format off
struct AsepriteFrameInformation;
// clang-format on

class UITextureInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::ui::SliceSize>                           mNineslice;
    ::ll::TypedStorage<1, 1, bool>                                       mHasNineslice;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                mBaseUVSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::AsepriteFrameInformation>> mAsepriteFrames;
    ::ll::TypedStorage<4, 4, int>                                        mTotalDurationInMilliseconds;
    // NOLINTEND
};
#else // @header-generator platform
class UITextureInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class BackwardsCompatTextureInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                    mUse;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mUVSize;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mUV;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mBaseSize;
    ::ll::UntypedStorage<8, 24>                                       mBackCompatTexture;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnk96efec;
    ::ll::UntypedStorage<4, 8>  mUnk2ac2dd;
    ::ll::UntypedStorage<4, 8>  mUnkacd42c;
    ::ll::UntypedStorage<4, 8>  mUnke0f3bc;
    ::ll::UntypedStorage<8, 32> mUnka19104;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI bool canUse() const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> const& getBaseUVSize() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getTexturePath() const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> const& getUV() const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> const& getUVSize() const;

    MCNAPI ~BackwardsCompatTextureInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    BackwardsCompatTextureInfo& operator=(BackwardsCompatTextureInfo const&);
    BackwardsCompatTextureInfo(BackwardsCompatTextureInfo const&);
    BackwardsCompatTextureInfo();
#endif // @header-generator platform
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BackwardsCompatTextureInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mUse;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mUVSize;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mUV;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mBaseSize;
    ::ll::UntypedStorage<8, 24>                                       mBackCompatTexture;
    // NOLINTEND

public:
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
};

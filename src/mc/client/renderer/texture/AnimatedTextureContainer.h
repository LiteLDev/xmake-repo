#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/persona/AnimatedTextureDefinition.h"
#include "mc/client/renderer/texture/AnimatedTextureTintCollection.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/actor/player/persona/AnimatedTextureType.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace cg { class ImageBuffer; }
namespace mce { class TextureContainer; }
// clang-format on

class AnimatedTextureContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::AnimatedTextureDefinition>                mTextureDefinition;
    ::ll::TypedStorage<4, 4, uint>                                        mMaxWidth;
    ::ll::TypedStorage<4, 4, uint>                                        mMaxHeight;
    ::ll::TypedStorage<8, 24, std::vector<AnimatedTextureTintCollection>> mTextureContainerCollection;
    ::ll::UntypedStorage<8, 24>                                           mUniqueTextureSets;
    ::ll::TypedStorage<8, 8, std::unique_ptr<cg::ImageBuffer>>            mAnimatedImageBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimatedTextureContainer& operator=(AnimatedTextureContainer const&);
    AnimatedTextureContainer(AnimatedTextureContainer const&);
    AnimatedTextureContainer();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/persona/character/AnimatedTextureDefinition.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"

// auto generated forward declare list
// clang-format off
class AnimatedTextureTintCollection;
namespace cg { class ImageBuffer; }
namespace mce { class TextureContainer; }
// clang-format on

class AnimatedTextureContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::AnimatedTextureDefinition>                    mTextureDefinition;
    ::ll::TypedStorage<4, 4, uint>                                            mMaxWidth;
    ::ll::TypedStorage<4, 4, uint>                                            mMaxHeight;
    ::ll::TypedStorage<8, 24, ::std::vector<::AnimatedTextureTintCollection>> mTextureContainerCollection;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::vector<::std::pair<
            ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>,
            ::std::unique_ptr<::mce::TextureContainer>>>>>
                                                                   mUniqueTextureSets;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cg::ImageBuffer>> mAnimatedImageBuffer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AnimatedTextureContainer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class AnimatedTextureContainer {};
#endif // @header-generator platform
#endif // @header-generator platform

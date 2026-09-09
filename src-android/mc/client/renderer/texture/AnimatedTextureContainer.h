#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

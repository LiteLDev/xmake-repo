#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace mce { class TextureContainer; }
namespace persona { struct TextureTint; }
namespace persona { struct TextureTintCollection; }
// clang-format on

class AnimatedTextureTintCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::persona::TextureTintCollection&> mTextureTintCollection;
    ::ll::TypedStorage<4, 4, uint>                              mUniqueTextureSetIdx;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimatedTextureTintCollection& operator=(AnimatedTextureTintCollection const&);
    AnimatedTextureTintCollection(AnimatedTextureTintCollection const&);
    AnimatedTextureTintCollection();
};

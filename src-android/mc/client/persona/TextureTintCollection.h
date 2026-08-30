#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/TextureTint.h"
#include "mc/client/renderer/texture/TextureUVCoordinateSet.h"
#include "mc/world/actor/player/persona/AnimatedTextureType.h"

// auto generated forward declare list
// clang-format off
class Pack;
// clang-format on

namespace persona {

struct TextureTintCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                       mKey;
    ::ll::TypedStorage<1, 1, bool>                               mIsAnimated;
    ::ll::TypedStorage<8, 24, std::vector<persona::TextureTint>> mTextures;
    ::ll::TypedStorage<8, 24, std::string>                       mClothingMapPath;
    ::ll::TypedStorage<8, 16, std::weak_ptr<const Pack>>         mClothingSourcePack;
    ::ll::TypedStorage<8, 88, ::TextureUVCoordinateSet>          mUv;
    ::ll::TypedStorage<4, 4, ::persona::AnimatedTextureType>     mAnimationType;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureTintCollection& operator=(TextureTintCollection const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureTintCollection(::persona::TextureTintCollection const&);

    MCNAPI TextureTintCollection(std::shared_ptr<const Pack>, std::string const&, std::string const&);

    MCNAPI TextureTintCollection(std::string const&, bool, std::vector<persona::TextureTint>&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::persona::TextureTintCollection const&);

    MCNAPI void* $ctor(std::shared_ptr<const Pack>, std::string const&, std::string const&);

    MCNAPI void* $ctor(std::string const&, bool, std::vector<persona::TextureTint>&&);
    // NOLINTEND
};

} // namespace persona

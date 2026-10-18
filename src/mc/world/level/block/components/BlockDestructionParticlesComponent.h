#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BlockDestructionParticlesComponent {
public:
    // BlockDestructionParticlesComponent inner types declare
    // clang-format off
    struct TextureInfo;
    // clang-format on

    // BlockDestructionParticlesComponent inner types define
    struct TextureInfo {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::string const&> mTexture;
        ::ll::TypedStorage<2, 2, ushort const>       mPreFlatteningAux;
        ::ll::TypedStorage<1, 1, ::TintMethod const> mTintMethod;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::std::string const&> mTexture;
        ::ll::TypedStorage<2, 2, ushort const>         mPreFlatteningAux;
        ::ll::TypedStorage<1, 1, ::TintMethod const>   mTintMethod;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        TextureInfo& operator=(TextureInfo const&);
        TextureInfo(TextureInfo const&);
        TextureInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mTexture;
    ::ll::TypedStorage<2, 2, ushort>       mPreFlatteningAux;
    ::ll::TypedStorage<1, 1, ::TintMethod> mTintMethod;
    ::ll::TypedStorage<1, 1, uchar>        mParticleCount;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mTexture;
    ::ll::TypedStorage<2, 2, ushort>         mPreFlatteningAux;
    ::ll::TypedStorage<1, 1, ::TintMethod>   mTintMethod;
    ::ll::TypedStorage<1, 1, uchar>          mParticleCount;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockDestructionParticlesComponent& operator=(BlockDestructionParticlesComponent const&);
    BlockDestructionParticlesComponent(BlockDestructionParticlesComponent const&);
    BlockDestructionParticlesComponent();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static uchar getDestructionParticleNumber(::Block const&);

    MCNAPI static ::BlockDestructionParticlesComponent::TextureInfo getTextureInfo(::Block const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static uchar getDestructionParticleNumber(::Block const& block);

    MCAPI static ::BlockDestructionParticlesComponent::TextureInfo getTextureInfo(::Block const& block);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

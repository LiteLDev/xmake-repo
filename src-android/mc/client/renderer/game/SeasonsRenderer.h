#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/block/BlockTintResolver.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
class Block;
class BlockPos;
class BlockSource;
class FrameUpdateContext;
class MinecraftGameplayGraphicsResources;
namespace mce { class Color; }
namespace mce { struct ClientTexture; }
namespace mce { struct Image; }
// clang-format on

class SeasonsRenderer : public ::Bedrock::EnableNonOwnerReferences {
public:
    // SeasonsRenderer inner types declare
    // clang-format off
    class TintResolver;
    // clang-format on

    // SeasonsRenderer inner types define
    class TintResolver : public ::BlockTintResolver {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::SeasonsRenderer const&> mSeasonRenderer;
        // NOLINTEND

    public:
        // prevent constructor by default
        TintResolver& operator=(TintResolver const&);
        TintResolver(TintResolver const&);
        TintResolver();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::mce::Color resolve(::BlockSource&, ::BlockPos const&, ::Block const&, ::mce::Color const&) const;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit TintResolver(::SeasonsRenderer const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::SeasonsRenderer const&);
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::mce::Color $resolve(::BlockSource&, ::BlockPos const&, ::Block const&, ::mce::Color const&) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                 mTick;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Image>>         mSeasonsImage;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::ClientTexture>> mSeasonsTexture;
    ::ll::TypedStorage<1, 1, bool>                                 mSeasonsTextureDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    SeasonsRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SeasonsRenderer();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SeasonsRenderer(::MinecraftGameplayGraphicsResources&);

    MCNAPI void _updateImage(::BiomeRegistry const&);

    MCNAPI void frameUpdate(::FrameUpdateContext&);

    MCNAPI void tickSeasons(::BiomeRegistry const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftGameplayGraphicsResources&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

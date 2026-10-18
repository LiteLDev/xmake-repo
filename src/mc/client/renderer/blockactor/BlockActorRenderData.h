#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/dragon/RenderMetadata.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class IVanillaRenderBlockActorComponent;
class Vec3;
namespace mce { class MaterialPtr; }
// clang-format on

struct BlockActorRenderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource&>                       renderSource;
    ::ll::TypedStorage<8, 8, ::IVanillaRenderBlockActorComponent&> entity;
    ::ll::TypedStorage<8, 8, ::Block const&>                       block;
    ::ll::TypedStorage<8, 8, ::Vec3 const&>                        renderPosition;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                    worldPosition;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const&>            forcedMat;
    ::ll::UntypedStorage<1, 24>                                    forcedTex;
    ::ll::TypedStorage<4, 4, int>                                  breakingAmount;
    ::ll::TypedStorage<8, 64, ::dragon::RenderMetadata const>      actorRenderMetadata;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockActorRenderData& operator=(BlockActorRenderData const&);
    BlockActorRenderData(BlockActorRenderData const&);
    BlockActorRenderData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockActorRenderData(
        ::BlockSource&,
        ::IVanillaRenderBlockActorComponent&,
        ::Block const&,
        ::Vec3 const&,
        ::BlockPos const&,
        ::mce::MaterialPtr const&,
        ::mce::ClientTexture const,
        int,
        ::dragon::RenderMetadata const
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::BlockSource&,
        ::IVanillaRenderBlockActorComponent&,
        ::Block const&,
        ::Vec3 const&,
        ::BlockPos const&,
        ::mce::MaterialPtr const&,
        ::mce::ClientTexture const,
        int,
        ::dragon::RenderMetadata const
    );
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/dragon/RenderMetadata.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class IVanillaRenderBlockActorComponent;
class Vec3;
namespace mce { class MaterialPtr; }
// clang-format on

struct BlockActorRenderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource&>                       renderSource;
    ::ll::TypedStorage<8, 8, ::IVanillaRenderBlockActorComponent&> entity;
    ::ll::TypedStorage<8, 8, ::Block const&>                       block;
    ::ll::TypedStorage<8, 8, ::Vec3 const&>                        renderPosition;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                    worldPosition;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const&>            forcedMat;
    ::ll::TypedStorage<8, 24, ::mce::ClientTexture const>          forcedTex;
    ::ll::TypedStorage<4, 4, int>                                  breakingAmount;
    ::ll::TypedStorage<8, 64, ::dragon::RenderMetadata const>      actorRenderMetadata;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockActorRenderData& operator=(BlockActorRenderData const&);
    BlockActorRenderData(BlockActorRenderData const&);
    BlockActorRenderData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockActorRenderData(
        ::BlockSource&                       _renderSource,
        ::IVanillaRenderBlockActorComponent& _renderComponent,
        ::Block const&                       _block,
        ::Vec3 const&                        _renderPosition,
        ::BlockPos const&                    _worldPosition,
        ::mce::MaterialPtr const&            _forcedMat,
        ::mce::ClientTexture                 _forcedTex,
        int                                  _breakingAmount,
        ::dragon::RenderMetadata             _actorRenderMetadata
    );

    MCAPI ~BlockActorRenderData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BlockSource&                       _renderSource,
        ::IVanillaRenderBlockActorComponent& _renderComponent,
        ::Block const&                       _block,
        ::Vec3 const&                        _renderPosition,
        ::BlockPos const&                    _worldPosition,
        ::mce::MaterialPtr const&            _forcedMat,
        ::mce::ClientTexture                 _forcedTex,
        int                                  _breakingAmount,
        ::dragon::RenderMetadata             _actorRenderMetadata
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct BlockActorRenderData {};
#endif // @header-generator platform
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

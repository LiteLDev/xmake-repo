#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkBlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class IVanillaRenderBlockActorComponent;
class IVanillaTickBlockActorComponent;
// clang-format on

class LevelChunkBlockActorStorage {
public:
    // LevelChunkBlockActorStorage inner types declare
    // clang-format off
    struct VanillaTickBlockActorComponent;
    // clang-format on

    // LevelChunkBlockActorStorage inner types define
    enum TrackingMode : uint {
        None                = 0,
        PermanentlyRendered = 1,
    };

    struct VanillaTickBlockActorComponent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 4, ::ChunkBlockPos>                    mChunkBlockPos;
        ::ll::TypedStorage<8, 8, ::IVanillaTickBlockActorComponent*> mComponent;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool const> mTrackPermanentlyRendered;
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkBlockPos, std::shared_ptr<BlockActor>>> mMap;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<IVanillaRenderBlockActorComponent*>>> mVanillaRenderBlockActorComponents;
    ::ll::TypedStorage<8, 40, std::unordered_set<BlockPos>> mPermanentRenderingLocations;
    ::ll::TypedStorage<8, 24, std::vector<LevelChunkBlockActorStorage::VanillaTickBlockActorComponent>> mVanillaTickBlockActorComponents;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkBlockActorStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addVanillaRenderBlockActorComponent(::BlockActor&);

    MCNAPI void _addVanillaTickBlockActorComponent(::ChunkBlockPos const&, ::BlockActor&);

    MCNAPI void _removeVanillaRenderBlockActorComponent(::BlockActor&);

    MCNAPI void _removeVanillaTickBlockActorComponent(::ChunkBlockPos const&, ::BlockActor&);

    MCNAPI std::__hash_map_const_iterator<std::__hash_const_iterator<
        std::__hash_node<std::__hash_value_type<ChunkBlockPos, std::shared_ptr<BlockActor>>, void*>*>>
           begin() const;

    MCNAPI std::__hash_map_const_iterator<std::__hash_const_iterator<
        std::__hash_node<std::__hash_value_type<ChunkBlockPos, std::shared_ptr<BlockActor>>, void*>*>>
           end() const;

    MCNAPI std::__hash_map_const_iterator<std::__hash_const_iterator<
        std::__hash_node<std::__hash_value_type<ChunkBlockPos, std::shared_ptr<BlockActor>>, void*>*>>
           erase(
            std::__hash_map_const_iterator<std::__hash_const_iterator<
                   std::__hash_node<std::__hash_value_type<ChunkBlockPos, std::shared_ptr<BlockActor>>, void*>*>>
        );

    MCNAPI std::vector<gsl::not_null<IVanillaRenderBlockActorComponent*>> const&
           getVanillaRenderBlockActorComponents() const;

    MCNAPI ::LevelChunkBlockActorStorage& operator=(::LevelChunkBlockActorStorage&&);

    MCNAPI std::unordered_set<BlockPos> const& permanentRenderingLocations() const;
    // NOLINTEND
};

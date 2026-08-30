#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class ChunkPos;
class DespawnDefinition;
class IRandom;
class Player;
class Vec3;
// clang-format on

class DespawnComponent {
public:
    // DespawnComponent inner types declare
    // clang-format off
    class IWorldAccessor;
    class WorldAccessor;
    // clang-format on

    // DespawnComponent inner types define
    class IWorldAccessor {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~IWorldAccessor();

        virtual ::Player* fetchAnyInteractablePlayer(::Vec3 const&, float) const = 0;

        virtual uint getChunkTickRange() const = 0;

        virtual bool areChunksFullyLoaded(::BlockPos const&, int) const = 0;

        virtual bool hasUntickedNeighborChunk(::ChunkPos const&, int) const = 0;

        virtual ::IRandom& getChanceRandom() = 0;

        virtual std::optional<int> getActorNoActionTime(::Actor const&) const = 0;

        virtual void resetActorNoActionTime(::Actor&) = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class WorldAccessor : public ::DespawnComponent::IWorldAccessor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Actor&> mActor;
        // NOLINTEND

    public:
        // prevent constructor by default
        WorldAccessor& operator=(WorldAccessor const&);
        WorldAccessor(WorldAccessor const&);
        WorldAccessor();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~WorldAccessor();

        virtual ::Player* fetchAnyInteractablePlayer(::Vec3 const&, float) const;

        virtual uint getChunkTickRange() const;

        virtual bool areChunksFullyLoaded(::BlockPos const&, int) const;

        virtual bool hasUntickedNeighborChunk(::ChunkPos const&, int) const;

        virtual ::IRandom& getChanceRandom();

        virtual std::optional<int> getActorNoActionTime(::Actor const&) const;

        virtual void resetActorNoActionTime(::Actor&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::Player* $fetchAnyInteractablePlayer(::Vec3 const&, float) const;

        MCNAPI uint $getChunkTickRange() const;

        MCNAPI bool $areChunksFullyLoaded(::BlockPos const&, int) const;

        MCNAPI bool $hasUntickedNeighborChunk(::ChunkPos const&, int) const;

        MCNAPI ::IRandom& $getChanceRandom();

        MCNAPI std::optional<int> $getActorNoActionTime(::Actor const&) const;

        MCNAPI void $resetActorNoActionTime(::Actor&);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _canDespawn(::Actor&, ::DespawnComponent::IWorldAccessor&, ::DespawnDefinition const&) const;

    MCNAPI bool _instantRulesPrescribeDespawn(
        ::Actor&,
        ::DespawnDefinition const&,
        ::DespawnComponent::IWorldAccessor const&
    ) const;

    MCNAPI bool
    _softRulesPrescribeDespawn(::Actor&, ::DespawnDefinition const&, ::DespawnComponent::IWorldAccessor&) const;

    MCNAPI void onDespawn(::Actor&);

    MCNAPI void tick(::Actor&);
    // NOLINTEND
};

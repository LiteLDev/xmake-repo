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
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~IWorldAccessor();
#else // @header-generator platform
        virtual ~IWorldAccessor() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::Player* fetchAnyInteractablePlayer(::Vec3 const&, float) const = 0;
#else // @header-generator platform
        virtual ::Player* fetchAnyInteractablePlayer(::Vec3 const& searchPos, float maxDist) const = 0;
#endif // @header-generator platform

        virtual uint getChunkTickRange() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool areChunksFullyLoaded(::BlockPos const&, int) const = 0;
#else // @header-generator platform
        virtual bool areChunksFullyLoaded(::BlockPos const& min, int r) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool hasUntickedNeighborChunk(::ChunkPos const&, int) const = 0;
#else // @header-generator platform
        virtual bool hasUntickedNeighborChunk(::ChunkPos const& pos, int chunkRadius) const = 0;
#endif // @header-generator platform

        virtual ::IRandom& getChanceRandom() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::optional<int> getActorNoActionTime(::Actor const&) const = 0;
#else // @header-generator platform
        virtual ::std::optional<int> getActorNoActionTime(::Actor const& actor) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual void resetActorNoActionTime(::Actor&) = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual void resetActorNoActionTime(::Actor& actor) = 0;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~WorldAccessor();
#else // @header-generator platform
        virtual ::Player* fetchAnyInteractablePlayer(::Vec3 const& searchPos, float maxDist) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::Player* fetchAnyInteractablePlayer(::Vec3 const&, float) const;
#else // @header-generator platform
        virtual uint getChunkTickRange() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual uint getChunkTickRange() const;
#else // @header-generator platform
        virtual bool areChunksFullyLoaded(::BlockPos const& min, int r) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool areChunksFullyLoaded(::BlockPos const&, int) const;
#else // @header-generator platform
        virtual bool hasUntickedNeighborChunk(::ChunkPos const& pos, int chunkRadius) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool hasUntickedNeighborChunk(::ChunkPos const&, int) const;
#else // @header-generator platform
        virtual ::IRandom& getChanceRandom() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::IRandom& getChanceRandom();
#else // @header-generator platform
        virtual ::std::optional<int> getActorNoActionTime(::Actor const& actor) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::optional<int> getActorNoActionTime(::Actor const&) const;

        virtual void resetActorNoActionTime(::Actor&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual void resetActorNoActionTime(::Actor& actor) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::Player* $fetchAnyInteractablePlayer(::Vec3 const&, float) const;
#else // @header-generator platform
        MCAPI ::Player* $fetchAnyInteractablePlayer(::Vec3 const& searchPos, float maxDist) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI uint $getChunkTickRange() const;
#else // @header-generator platform
        MCAPI uint $getChunkTickRange() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool $areChunksFullyLoaded(::BlockPos const&, int) const;
#else // @header-generator platform
        MCAPI bool $areChunksFullyLoaded(::BlockPos const& min, int r) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool $hasUntickedNeighborChunk(::ChunkPos const&, int) const;
#else // @header-generator platform
        MCAPI bool $hasUntickedNeighborChunk(::ChunkPos const& pos, int chunkRadius) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::IRandom& $getChanceRandom();
#else // @header-generator platform
        MCAPI ::IRandom& $getChanceRandom();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::optional<int> $getActorNoActionTime(::Actor const&) const;
#else // @header-generator platform
        MCAPI ::std::optional<int> $getActorNoActionTime(::Actor const& actor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $resetActorNoActionTime(::Actor&);
#else // @header-generator platform
        MCAPI void $resetActorNoActionTime(::Actor& actor);


#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _canDespawn(::Actor&, ::DespawnComponent::IWorldAccessor&, ::DespawnDefinition const&) const;

    MCNAPI bool _instantRulesPrescribeDespawn(
        ::Actor&,
        ::DespawnDefinition const&,
        ::DespawnComponent::IWorldAccessor const&
#else // @header-generator platform
    MCAPI bool _canDespawn(
        ::Actor&                            actor,
        ::DespawnComponent::IWorldAccessor& worldAccessor,
        ::DespawnDefinition const&          definition
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    _softRulesPrescribeDespawn(::Actor&, ::DespawnDefinition const&, ::DespawnComponent::IWorldAccessor&) const;
#else // @header-generator platform
    MCAPI bool _instantRulesPrescribeDespawn(
        ::Actor&                                  actor,
        ::DespawnDefinition const&                definition,
        ::DespawnComponent::IWorldAccessor const& worldAccessor
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onDespawn(::Actor&);
#else // @header-generator platform
    MCAPI bool _softRulesPrescribeDespawn(
        ::Actor&                            actor,
        ::DespawnDefinition const&          definition,
        ::DespawnComponent::IWorldAccessor& worldAccessor
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tick(::Actor&);
#else // @header-generator platform
    MCAPI void onDespawn(::Actor& actor);

    MCAPI void tick(::Actor& actor);
#endif // @header-generator platform
    // NOLINTEND
};

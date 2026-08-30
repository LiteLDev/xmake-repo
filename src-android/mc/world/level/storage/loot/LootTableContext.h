#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/storage/loot/ActorTarget.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BlockActor;
class ILevel;
class ItemStack;
class Level;
class LootTable;
class Player;
// clang-format on

class LootTableContext {
public:
    // LootTableContext inner types declare
    // clang-format off
    class Builder;
    // clang-format on

    // LootTableContext inner types define
    class Builder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ILevel*>                  mLevel;
        ::ll::TypedStorage<4, 4, float>                      mLuck;
        ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mThisEntityID;
        ::ll::TypedStorage<8, 8, ::Player*>                  mKillerPlayer;
        ::ll::TypedStorage<8, 8, ::Actor*>                   mKilledActor;
        ::ll::TypedStorage<8, 8, ::ActorDamageSource const*> mDeathSource;
        ::ll::TypedStorage<4, 4, float>                      mExplosionRadius;
        ::ll::TypedStorage<8, 24, std::string>               mOriginalItemName;
        ::ll::TypedStorage<8, 8, ::ItemStack const*>         mTool;
        ::ll::TypedStorage<4, 4, ::DimensionType>            mDimensionId;
        ::ll::TypedStorage<8, 8, ::BlockActor const*>        mSourceBlockActor;
        // NOLINTEND

    public:
        // prevent constructor by default
        Builder& operator=(Builder const&);
        Builder();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::LootTableContext create() const;

        MCNAPI ::LootTableContext::Builder& withDeathSource(::ActorDamageSource const*);

        MCNAPI ::LootTableContext::Builder& withExplosionRadius(float);

        MCNAPI ::LootTableContext::Builder& withKilledActor(::Actor*);

        MCNAPI ::LootTableContext::Builder& withKillerPlayer(::Player*);

        MCNAPI ::LootTableContext::Builder& withLuck(float);

        MCNAPI ::LootTableContext::Builder& withSourceBlockActor(::BlockActor const*);

        MCNAPI ::LootTableContext::Builder& withThisEntity(::Actor*);

        MCNAPI ::LootTableContext::Builder& withTool(::ItemStack const*);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                 mLuck;
    ::ll::TypedStorage<8, 8, ::ILevel*>                             mLevel;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                       mThisEntityID;
    ::ll::TypedStorage<8, 8, ::Player*>                             mKillerPlayer;
    ::ll::TypedStorage<8, 8, ::Actor*>                              mKilledActor;
    ::ll::TypedStorage<8, 8, ::ActorDamageSource const*>            mDeathSource;
    ::ll::TypedStorage<8, 40, std::unordered_set<const LootTable*>> mVisitedTables;
    ::ll::TypedStorage<4, 4, float>                                 mExplosionRadius;
    ::ll::TypedStorage<8, 24, std::string>                          mOriginalItemName;
    ::ll::TypedStorage<8, 8, ::ItemStack const*>                    mTool;
    ::ll::TypedStorage<4, 4, ::DimensionType>                       mDimensionId;
    ::ll::TypedStorage<8, 8, ::BlockActor const*>                   mSourceBlockActor;
    // NOLINTEND

public:
    // prevent constructor by default
    LootTableContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Actor* getDamagingEntity() const;

    MCNAPI ::DimensionType getDimensionId() const;

    MCNAPI ::Actor* getEntity(::ActorTarget, bool) const;

    MCNAPI ::Actor* getKilledEntity() const;

    MCNAPI ::Actor* getKillerEntity() const;

    MCNAPI ::Actor* getKillerPet() const;

    MCNAPI ::Actor* getKillerPlayer() const;

    MCNAPI ::Level* getLevel() const;

    MCNAPI std::string getOriginalItemName() const;

    MCNAPI ::Actor* getThisEntity(bool) const;

    MCNAPI ::Actor* getThisVehicleEntity() const;

    MCNAPI ::ItemStack const* getTool() const;

    MCNAPI void setOriginalItemName(std::string const&);

    MCNAPI ~LootTableContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/dimension/DimensionType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/storage/loot/ActorTarget.h"
#else // @header-generator platform
#include "mc/world/level/storage/loot/LootTable.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BlockActor;
class ILevel;
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
class LootTable;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>               mOriginalItemName;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>             mOriginalItemName;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 8, ::ItemStack const*>         mTool;
        ::ll::TypedStorage<4, 4, ::DimensionType>            mDimensionId;
        ::ll::TypedStorage<8, 8, ::BlockActor const*>        mSourceBlockActor;
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        Builder& operator=(Builder const&);
        Builder();

    public:
#else // @header-generator platform
#endif // @header-generator platform
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::LootTableContext create() const;
#else // @header-generator platform
        MCAPI ~Builder();
        // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::LootTableContext::Builder& withDeathSource(::ActorDamageSource const*);

        MCNAPI ::LootTableContext::Builder& withExplosionRadius(float);

        MCNAPI ::LootTableContext::Builder& withKilledActor(::Actor*);

        MCNAPI ::LootTableContext::Builder& withKillerPlayer(::Player*);

        MCNAPI ::LootTableContext::Builder& withLuck(float);

        MCNAPI ::LootTableContext::Builder& withSourceBlockActor(::BlockActor const*);

        MCNAPI ::LootTableContext::Builder& withThisEntity(::Actor*);

        MCNAPI ::LootTableContext::Builder& withTool(::ItemStack const*);
#else // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                     mLuck;
    ::ll::TypedStorage<8, 8, ::ILevel*>                                 mLevel;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                           mThisEntityID;
    ::ll::TypedStorage<8, 8, ::Player*>                                 mKillerPlayer;
    ::ll::TypedStorage<8, 8, ::Actor*>                                  mKilledActor;
    ::ll::TypedStorage<8, 8, ::ActorDamageSource const*>                mDeathSource;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::LootTable const*>> mVisitedTables;
    ::ll::TypedStorage<4, 4, float>                                     mExplosionRadius;
    ::ll::TypedStorage<8, 32, ::std::string>                            mOriginalItemName;
    ::ll::TypedStorage<8, 8, ::ItemStack const*>                        mTool;
    ::ll::TypedStorage<4, 4, ::DimensionType>                           mDimensionId;
    ::ll::TypedStorage<8, 8, ::BlockActor const*>                       mSourceBlockActor;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LootTableContext();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* getDamagingEntity() const;
#else // @header-generator platform
    MCAPI ::std::string getOriginalItemName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~LootTableContext();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

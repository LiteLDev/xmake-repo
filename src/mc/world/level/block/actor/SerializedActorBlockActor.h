#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class ActorFactory;
#else // @header-generator platform
#endif // @header-generator platform
class Block;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockType;
#else // @header-generator platform
#endif // @header-generator platform
class DataLoadHelper;
class ILevel;
class ItemStackBase;
class SaveContext;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec2;
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class SerializedActorBlockActor : public ::VanillaBlockActor {
public:
    // SerializedActorBlockActor inner types declare
    // clang-format off
    struct SerializedActor;
    // clang-format on

    // SerializedActorBlockActor inner types define
    struct SerializedActor {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mActorIdentifier;
        ::ll::TypedStorage<8, 32, ::CompoundTag>                mSaveData;
        // NOLINTEND

    public:
        // prevent constructor by default
        SerializedActor();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~SerializedActor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mActorIdentifier;
        ::ll::TypedStorage<8, 24, ::CompoundTag>                mSaveData;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 168, ::SerializedActorBlockActor::SerializedActor> mSerializedActor;
#else // @header-generator platform
    ::ll::TypedStorage<8, 200, ::SerializedActorBlockActor::SerializedActor> mSerializedActor;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                            mPose;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializedActorBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SerializedActorBlockActor();
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual void onChanged(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void getDebugText(std::vector<std::string>&, ::BlockPos const&, ::BlockSource const*) const;
#else // @header-generator platform
    virtual void getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void onChanged(::BlockSource&);
#else // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    SerializedActorBlockActor(::BlockPos const&, ::BlockActorType, ::BlockActorRendererId, ::ActorDefinitionIdentifier);
#else // @header-generator platform
    MCAPI SerializedActorBlockActor(
        ::BlockPos const&           pos,
        ::BlockActorType            type,
        ::BlockActorRendererId      rendererId,
        ::ActorDefinitionIdentifier defaultActorIdentifier
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* _createNewActor(::BlockSource&, ::ActorFactory&, ::Vec3 const&, ::Vec2 const&) const;
#else // @header-generator platform
    MCAPI void
    executeEvent(::BlockSource&, ::BlockPos const& pos, ::Block const&, ::std::string const& eventName, ::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* _loadSerializedActor(::BlockSource&, ::ActorFactory&, ::Vec3 const&, ::Vec2 const&) const;
#else // @header-generator platform
    MCAPI void saveUserData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void executeEvent(::BlockSource&, ::BlockPos const&, ::Block const&, std::string const&, ::Actor&);

    MCNAPI int getPose() const;

    MCNAPI int getSignalStrength() const;

    MCNAPI void saveUserData(::CompoundTag&) const;

    MCNAPI void setPose(int);

    MCNAPI ::Actor* spawnActor(::BlockSource&, ::Direction::Type);

    MCNAPI bool trySerializeActor(::Actor const&);
#else // @header-generator platform
    MCAPI ::Actor* spawnActor(::BlockSource& region, ::Direction::Type direction);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int getPoseFromTag(::CompoundTag const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static bool isItemSerializedActorBlock(::ItemStackBase const& item);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isItemSerializedActorBlock(::ItemStackBase const&);

    MCNAPI static void savePoseToItemForInventoryRendering(::ItemStackBase&, int);
#else // @header-generator platform
    MCAPI static void savePoseToItemForInventoryRendering(::ItemStackBase& item, int pose);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& ACTOR_IDENTIFIER_TAG_NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& ACTOR_IDENTIFIER_TAG_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& ACTOR_TAG_NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& ACTOR_TAG_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& POSE_TAG_NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& POSE_TAG_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& SAVE_DATA_TAG_NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& SAVE_DATA_TAG_NAME();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockPos const&, ::BlockActorType, ::BlockActorRendererId, ::ActorDefinitionIdentifier);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::BlockPos const&           pos,
        ::BlockActorType            type,
        ::BlockActorRendererId      rendererId,
        ::ActorDefinitionIdentifier defaultActorIdentifier
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $getDebugText(std::vector<std::string>&, ::BlockPos const&, ::BlockSource const*) const;
#else // @header-generator platform
    MCAPI void $onChanged(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    MCAPI void $getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onChanged(::BlockSource&);
#else // @header-generator platform
    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();
#endif // @header-generator platform
    // NOLINTEND
};

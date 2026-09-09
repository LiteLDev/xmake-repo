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
class ActorFactory;
class Block;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class BlockType;
class DataLoadHelper;
class ILevel;
class ItemStackBase;
class SaveContext;
class Vec2;
class Vec3;
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
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::SerializedActorBlockActor::SerializedActor> mSerializedActor;
    ::ll::TypedStorage<4, 4, int>                                            mPose;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializedActorBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SerializedActorBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void getDebugText(std::vector<std::string>&, ::BlockPos const&, ::BlockSource const*) const;

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void onChanged(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    SerializedActorBlockActor(::BlockPos const&, ::BlockActorType, ::BlockActorRendererId, ::ActorDefinitionIdentifier);

    MCNAPI ::Actor* _createNewActor(::BlockSource&, ::ActorFactory&, ::Vec3 const&, ::Vec2 const&) const;

    MCNAPI ::Actor* _loadSerializedActor(::BlockSource&, ::ActorFactory&, ::Vec3 const&, ::Vec2 const&) const;

    MCNAPI void executeEvent(::BlockSource&, ::BlockPos const&, ::Block const&, std::string const&, ::Actor&);

    MCNAPI int getPose() const;

    MCNAPI int getSignalStrength() const;

    MCNAPI void saveUserData(::CompoundTag&) const;

    MCNAPI void setPose(int);

    MCNAPI ::Actor* spawnActor(::BlockSource&, ::Direction::Type);

    MCNAPI bool trySerializeActor(::Actor const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int getPoseFromTag(::CompoundTag const&);

    MCNAPI static bool isItemSerializedActorBlock(::ItemStackBase const&);

    MCNAPI static void savePoseToItemForInventoryRendering(::ItemStackBase&, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& ACTOR_IDENTIFIER_TAG_NAME();

    MCNAPI static std::string_view const& ACTOR_TAG_NAME();

    MCNAPI static std::string_view const& POSE_TAG_NAME();

    MCNAPI static std::string_view const& SAVE_DATA_TAG_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&, ::BlockActorType, ::BlockActorRendererId, ::ActorDefinitionIdentifier);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;

    MCNAPI void $getDebugText(std::vector<std::string>&, ::BlockPos const&, ::BlockSource const*) const;

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI void $onChanged(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

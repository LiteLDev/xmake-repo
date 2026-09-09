#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CommandBlockMode.h"
#include "mc/world/level/block/actor/BaseCommandBlock.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CommandBlock;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class Player;
class SaveContext;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class CommandBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 160, ::BaseCommandBlock> mBaseCB;
    ::ll::TypedStorage<1, 1, bool>                 mPowered;
    ::ll::TypedStorage<1, 1, bool>                 mConditionMet;
    ::ll::TypedStorage<1, 1, bool>                 mRedstoneMode;
    ::ll::TypedStorage<1, 1, bool>                 mLastPerformedConditionalMode;
    ::ll::TypedStorage<1, 1, bool>                 mLastPerformedRedstoneMode;
    ::ll::TypedStorage<1, 1, bool>                 mExecuteFirstTickOnPlace;
    ::ll::TypedStorage<2, 2, ::CommandBlockMode>   mLastPerformedCBMode;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void saveBlockData(::CompoundTag&, ::BlockSource&) const;

    virtual void loadBlockData(::CompoundTag const&, ::BlockSource&, ::DataLoadHelper&);

    virtual void onCustomTagLoadDone(::BlockSource&);

    virtual void onPlace(::BlockSource&);

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual bool _playerCanUpdate(::Player const&) const;

    virtual ::Bedrock::Safety::RedactableString const& getCustomName() const;

    virtual void setCustomName(::Bedrock::Safety::RedactableString const&);

    virtual void onChanged(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandBlockActor(::BlockPos const&, ::CommandBlockMode);

    MCNAPI void _setAutomatic(::BlockSource&, bool, ::CommandBlockMode);

    MCNAPI ::BaseCommandBlock& getBaseCommandBlock();

    MCNAPI std::string const& getCommand() const;

    MCNAPI ::CommandBlock const* getCommandBlock(::BlockSource&) const;

    MCNAPI bool getConditionalMode(::BlockSource&) const;

    MCNAPI int getDelayOnActivation() const;

    MCNAPI std::string getLastOutput() const;

    MCNAPI ::CommandBlockMode getLastPerformedCBMode() const;

    MCNAPI bool getLastPerformedConditionalMode() const;

    MCNAPI bool getLastPerformedRedstoneMode() const;

    MCNAPI ::CommandBlockMode getMode(::BlockSource&) const;

    MCNAPI bool getPowered() const;

    MCNAPI int getSuccessCount() const;

    MCNAPI int getTickDelay() const;

    MCNAPI bool getTrackOutput() const;

    MCNAPI bool isAutomatic() const;

    MCNAPI bool isRedstoneMode() const;

    MCNAPI bool markConditionMet(::BlockSource&);

    MCNAPI void markForSaving(::BlockSource&);

    MCNAPI void markForSaving(::BlockSource&, int, bool);

    MCNAPI bool performCommand(::BlockSource&);

    MCNAPI void setPowered(bool);

    MCNAPI void setSuccessCount(int);

    MCNAPI bool shouldExecuteOnFirstTick() const;

    MCNAPI void updateBlock(
        ::BlockSource&,
        std::string const&,
        ::Bedrock::Safety::RedactableString const&,
        ::CommandBlockMode,
        bool,
        bool,
        bool,
        int,
        bool
    );

    MCNAPI bool wasConditionMet();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&, ::CommandBlockMode);
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

    MCNAPI void $saveBlockData(::CompoundTag&, ::BlockSource&) const;

    MCNAPI void $loadBlockData(::CompoundTag const&, ::BlockSource&, ::DataLoadHelper&);

    MCNAPI void $onCustomTagLoadDone(::BlockSource&);

    MCNAPI void $onPlace(::BlockSource&);

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI bool $_playerCanUpdate(::Player const&) const;

    MCNAPI ::Bedrock::Safety::RedactableString const& $getCustomName() const;

    MCNAPI void $setCustomName(::Bedrock::Safety::RedactableString const&);

    MCNAPI void $onChanged(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

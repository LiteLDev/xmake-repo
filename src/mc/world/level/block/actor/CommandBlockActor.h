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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 160, ::BaseCommandBlock> mBaseCB;
#else // @header-generator platform
    ::ll::TypedStorage<8, 192, ::BaseCommandBlock> mBaseCB;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CommandBlockActor();
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void saveBlockData(::CompoundTag& tag, ::BlockSource& region) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void saveBlockData(::CompoundTag&, ::BlockSource&) const;
#else // @header-generator platform
    virtual void
    loadBlockData(::CompoundTag const& tag, ::BlockSource& region, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadBlockData(::CompoundTag const&, ::BlockSource&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void onCustomTagLoadDone(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onCustomTagLoadDone(::BlockSource&);
#else // @header-generator platform
    virtual void onChanged(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlace(::BlockSource&);
#else // @header-generator platform
    virtual void onPlace(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString const& getCustomName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    virtual void setCustomName(::Bedrock::Safety::RedactableString const& str) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _playerCanUpdate(::Player const&) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString const& getCustomName() const;
#else // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const& tag, ::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCustomName(::Bedrock::Safety::RedactableString const&);

    virtual void onChanged(::BlockSource&);
#else // @header-generator platform
    virtual bool _playerCanUpdate(::Player const& player) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CommandBlockActor(::BlockPos const&, ::CommandBlockMode);
#else // @header-generator platform
    MCAPI CommandBlockActor(::BlockPos const& pos, ::CommandBlockMode mode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setAutomatic(::BlockSource&, bool, ::CommandBlockMode);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void _setAutomatic(::BlockSource& region, bool alwaysActive, ::CommandBlockMode currentMode);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BaseCommandBlock& getBaseCommandBlock();
#else // @header-generator platform
    MCAPI ::CommandBlock const* getCommandBlock(::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getCommand() const;
#else // @header-generator platform
    MCAPI bool getConditionalMode(::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandBlock const* getCommandBlock(::BlockSource&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string getLastOutput() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getConditionalMode(::BlockSource&) const;
#else // @header-generator platform
    MCAPI bool markConditionMet(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getDelayOnActivation() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool performCommand(::BlockSource& region);

    MCAPI void setAutomatic(::BlockSource& region, bool automatic, ::CommandBlockMode oldMode);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void updateBlock(
        ::BlockSource&                             region,
        ::std::string const&                       cmd,
        ::Bedrock::Safety::RedactableString const& name,
        ::CommandBlockMode                         newMode,
        bool                                       isConditional,
        bool                                       redstoneMode,
        bool                                       trackOutput,
        int                                        tickDelay,
        bool                                       executeFirstTick
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI bool wasConditionMet();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockPos const&, ::CommandBlockMode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::BlockPos const& pos, ::CommandBlockMode mode);
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
    MCAPI void $saveBlockData(::CompoundTag& tag, ::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $saveBlockData(::CompoundTag&, ::BlockSource&) const;
#else // @header-generator platform
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadBlockData(::CompoundTag const&, ::BlockSource&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void $loadBlockData(::CompoundTag const& tag, ::BlockSource& region, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onCustomTagLoadDone(::BlockSource&);
#else // @header-generator platform
    MCAPI void $onCustomTagLoadDone(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlace(::BlockSource&);
#else // @header-generator platform
    MCFOLD void $onChanged(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    MCAPI void $onPlace(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    MCAPI ::Bedrock::Safety::RedactableString const& $getCustomName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_playerCanUpdate(::Player const&) const;
#else // @header-generator platform
    MCAPI void $setCustomName(::Bedrock::Safety::RedactableString const& str);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Safety::RedactableString const& $getCustomName() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setCustomName(::Bedrock::Safety::RedactableString const&);
#else // @header-generator platform
    MCAPI void $_onUpdatePacket(::CompoundTag const& tag, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onChanged(::BlockSource&);
#else // @header-generator platform
    MCAPI bool $_playerCanUpdate(::Player const& player) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();
#endif // @header-generator platform
    // NOLINTEND
};

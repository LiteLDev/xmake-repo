#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/safety/RedactableString.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/CommandBlockMode.h"

// auto generated forward declare list
// clang-format off
class BaseCommandBlock;
class CommandOrigin;
class MinecartCommandBlock;
class Player;
// clang-format on

class MinecartCommandBlockManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                            mPlayer;
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mBlockPos;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mActorUniqueId;
    ::ll::TypedStorage<8, 24, std::string>                         mCommand;
    ::ll::TypedStorage<8, 24, std::string>                         mLastOutput;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mHoverName;
    ::ll::TypedStorage<4, 4, uint>                                 mTickDelay;
    ::ll::TypedStorage<1, 1, bool>                                 mExecuteOnFirstTick;
    ::ll::TypedStorage<1, 1, bool>                                 mTrackOutput;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecartCommandBlockManager& operator=(MinecartCommandBlockManager const&);
    MinecartCommandBlockManager(MinecartCommandBlockManager const&);
    MinecartCommandBlockManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecartCommandBlockManager();

    virtual void init();

    virtual bool setCommand(std::string const&);

    virtual bool setHoverName(::Bedrock::Safety::RedactableString const&);

    virtual bool setTickDelay(uint);

    virtual bool setShouldExecuteOnFirstTick(bool);

    virtual bool setLastOutput(std::string const&);

    virtual bool setTrackOutput(bool);

    virtual bool setBlockTypeMode(::CommandBlockMode);

    virtual bool setConditional(bool);

    virtual bool setRedstone(bool);

    virtual void saveAndExit();

    virtual std::string const& getCommand() const;

    virtual std::string const& getOutput() const;

    virtual bool getTrackOutput() const;

    virtual bool isConditionalMode() const;

    virtual bool isRedstoneMode() const;

    virtual bool isMinecartCommandBlock() const;

    virtual ::CommandBlockMode getCommandBlockTypeMode() const;

    virtual bool getLastPerformedConditionalMode();

    virtual bool getLastPerformedRedstoneMode();

    virtual ::CommandBlockMode getLastPerformedCBMode();

    virtual ::Bedrock::Safety::RedactableString const& getHoverName() const;

    virtual uint getTickDelay() const;

    virtual bool shouldExecuteOnFirstTick() const;

    virtual ::BaseCommandBlock* getBaseCommandBlock();

    virtual std::unique_ptr<CommandOrigin> getCommandOrigin() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _loadFromBaseCommandBlock();

    MCNAPI void _saveToBaseCommandBlock(::BaseCommandBlock&);

    MCNAPI std::string getLastPerformedCommandBlockConditionalModeString();

    MCNAPI std::string getLastPerformedCommandBlockRedstoneModeString();

    MCNAPI std::string getLastPerformedCommandBlockTypeModeString();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init();

    MCNAPI bool $setCommand(std::string const&);

    MCNAPI bool $setHoverName(::Bedrock::Safety::RedactableString const&);

    MCNAPI bool $setTickDelay(uint);

    MCNAPI bool $setShouldExecuteOnFirstTick(bool);

    MCNAPI bool $setLastOutput(std::string const&);

    MCNAPI bool $setTrackOutput(bool);

    MCNAPI bool $setBlockTypeMode(::CommandBlockMode);

    MCNAPI bool $setConditional(bool);

    MCNAPI bool $setRedstone(bool);

    MCNAPI void $saveAndExit();

    MCNAPI std::string const& $getCommand() const;

    MCNAPI std::string const& $getOutput() const;

    MCNAPI bool $getTrackOutput() const;

    MCNAPI bool $isConditionalMode() const;

    MCNAPI bool $isRedstoneMode() const;

    MCNAPI bool $isMinecartCommandBlock() const;

    MCNAPI ::CommandBlockMode $getCommandBlockTypeMode() const;

    MCNAPI bool $getLastPerformedConditionalMode();

    MCNAPI bool $getLastPerformedRedstoneMode();

    MCNAPI ::CommandBlockMode $getLastPerformedCBMode();

    MCNAPI ::Bedrock::Safety::RedactableString const& $getHoverName() const;

    MCNAPI uint $getTickDelay() const;

    MCNAPI bool $shouldExecuteOnFirstTick() const;

    MCNAPI ::BaseCommandBlock* $getBaseCommandBlock();

    MCNAPI std::unique_ptr<CommandOrigin> $getCommandOrigin() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

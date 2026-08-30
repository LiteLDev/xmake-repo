#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/managers/MinecartCommandBlockManager.h"
#include "mc/world/level/block/CommandBlockMode.h"

// auto generated forward declare list
// clang-format off
class BaseCommandBlock;
class BlockPos;
class CommandBlockActor;
class CommandOrigin;
class Player;
struct ActorUniqueID;
// clang-format on

class CommandBlockManager : public ::MinecartCommandBlockManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::CommandBlockMode> mCBMode;
    ::ll::TypedStorage<1, 1, bool>               mIsConditionalMode;
    ::ll::TypedStorage<1, 1, bool>               mIsRedstoneMode;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandBlockManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandBlockManager();

    virtual void init();

    virtual bool setBlockTypeMode(::CommandBlockMode);

    virtual bool setConditional(bool);

    virtual bool setRedstone(bool);

    virtual void saveAndExit();

    virtual bool isConditionalMode() const;

    virtual bool isRedstoneMode() const;

    virtual bool isMinecartCommandBlock() const;

    virtual ::CommandBlockMode getCommandBlockTypeMode() const;

    virtual bool getLastPerformedConditionalMode();

    virtual bool getLastPerformedRedstoneMode();

    virtual ::CommandBlockMode getLastPerformedCBMode();

    virtual ::BaseCommandBlock* getBaseCommandBlock();

    virtual std::unique_ptr<CommandOrigin> getCommandOrigin() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandBlockManager(::Player&, ::BlockPos, ::ActorUniqueID);

    MCNAPI void _loadFromEntity();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player&, ::BlockPos, ::ActorUniqueID);
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

    MCNAPI bool $setBlockTypeMode(::CommandBlockMode);

    MCNAPI bool $setConditional(bool);

    MCNAPI bool $setRedstone(bool);

    MCNAPI void $saveAndExit();

    MCNAPI bool $isConditionalMode() const;

    MCNAPI bool $isRedstoneMode() const;

    MCNAPI bool $isMinecartCommandBlock() const;

    MCNAPI ::CommandBlockMode $getCommandBlockTypeMode() const;

    MCNAPI bool $getLastPerformedConditionalMode();

    MCNAPI bool $getLastPerformedRedstoneMode();

    MCNAPI ::CommandBlockMode $getLastPerformedCBMode();

    MCNAPI ::BaseCommandBlock* $getBaseCommandBlock();

    MCNAPI std::unique_ptr<CommandOrigin> $getCommandOrigin() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

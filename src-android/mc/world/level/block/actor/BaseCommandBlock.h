#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Command;
class CommandOrigin;
class CompoundTag;
class DataLoadHelper;
class Level;
struct ActorUniqueID;
// clang-format on

class BaseCommandBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                         mLastOutputId;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>            mLastOutputParams;
    ::ll::TypedStorage<8, 24, std::string>                         mCommand;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mName;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Command>>             mCompiledCommand;
    ::ll::TypedStorage<8, 8, ulong>                                mLastExecution;
    ::ll::TypedStorage<4, 4, int>                                  mVersion;
    ::ll::TypedStorage<4, 4, int>                                  mSuccessCount;
    ::ll::TypedStorage<4, 4, int>                                  mTickDelay;
    ::ll::TypedStorage<1, 1, bool>                                 mExecuteOnFirstTick;
    ::ll::TypedStorage<1, 1, bool>                                 mTrackOutput;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseCommandBlock& operator=(BaseCommandBlock const&);
    BaseCommandBlock(BaseCommandBlock const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseCommandBlock();

    MCNAPI bool _performCommand(::BlockSource&, ::CommandOrigin const&, bool&);

    MCNAPI void _setCommand(::BlockSource&, ::CommandOrigin const&, std::string const&);

    MCNAPI void compile(::CommandOrigin const&, ::Level&);

    MCNAPI std::string const& getCommand() const;

    MCNAPI std::string getLastOutput() const;

    MCNAPI ::Bedrock::Safety::RedactableString const& getName() const;

    MCNAPI ::Bedrock::Safety::RedactableString const& getRawName() const;

    MCNAPI int getSuccessCount() const;

    MCNAPI int getTickDelay() const;

    MCNAPI bool getTrackOutput() const;

    MCNAPI void load(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI ::BaseCommandBlock& operator=(::BaseCommandBlock&&);

    MCNAPI bool performCommand(::BlockSource&, ::ActorUniqueID const&);

    MCNAPI bool performCommand(::BlockSource&, ::BlockPos const&, bool&);

    MCNAPI bool save(::CompoundTag&) const;

    MCNAPI void setCommand(::BlockSource&, ::BlockPos const&, std::string const&);

    MCNAPI void setCommand(::BlockSource&, ::ActorUniqueID const&, std::string const&);

    MCNAPI void setLastOutput(std::string const&, std::vector<std::string> const&);

    MCNAPI void setName(::Bedrock::Safety::RedactableString const&);

    MCNAPI void setShouldExecuteOnFirstTick(bool);

    MCNAPI void setSuccessCount(int);

    MCNAPI void setTickDelay(int);

    MCNAPI void setTrackOutput(bool);

    MCNAPI bool shouldExecuteOnFirstTick() const;

    MCNAPI ~BaseCommandBlock();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Safety::RedactableString const& DefaultCommandBlockName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

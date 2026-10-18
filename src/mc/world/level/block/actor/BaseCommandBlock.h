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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                         mLastOutputId;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>            mLastOutputParams;
    ::ll::TypedStorage<8, 24, std::string>                         mCommand;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mName;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Command>>             mCompiledCommand;
    ::ll::TypedStorage<8, 8, ulong>                                mLastExecution;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                       mLastOutputId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        mLastOutputParams;
    ::ll::TypedStorage<8, 32, ::std::string>                       mCommand;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mName;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Command>>         mCompiledCommand;
    ::ll::TypedStorage<8, 8, uint64>                               mLastExecution;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BaseCommandBlock();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BaseCommandBlock();
#else // @header-generator platform
    MCAPI bool _performCommand(::BlockSource& region, ::CommandOrigin const& origin, bool& markForSaving);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _performCommand(::BlockSource&, ::CommandOrigin const&, bool&);
#else // @header-generator platform
    MCAPI void _setCommand(::BlockSource& region, ::CommandOrigin const& origin, ::std::string const& command);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setCommand(::BlockSource&, ::CommandOrigin const&, std::string const&);
#else // @header-generator platform
    MCAPI void compile(::CommandOrigin const& origin, ::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void compile(::CommandOrigin const&, ::Level&);
#else // @header-generator platform
    MCAPI ::std::string getLastOutput() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getCommand() const;
#else // @header-generator platform
    MCAPI void load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getLastOutput() const;
#else // @header-generator platform
    MCAPI ::BaseCommandBlock& operator=(::BaseCommandBlock&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Safety::RedactableString const& getName() const;
#else // @header-generator platform
    MCAPI bool performCommand(::BlockSource& region, ::ActorUniqueID const& minecartId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Safety::RedactableString const& getRawName() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI bool performCommand(::BlockSource& region, ::BlockPos const& pos, bool& markForSaving);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getSuccessCount() const;
#else // @header-generator platform
    MCAPI bool save(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getTickDelay() const;
#else // @header-generator platform
    MCAPI void setCommand(::BlockSource& region, ::ActorUniqueID const& entityId, ::std::string const& command);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getTrackOutput() const;
#else // @header-generator platform
    MCAPI void setCommand(::BlockSource& region, ::BlockPos const& pos, ::std::string const& command);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void load(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void setLastOutput(::std::string const& lastOutput, ::std::vector<::std::string> const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BaseCommandBlock& operator=(::BaseCommandBlock&&);
#else // @header-generator platform
    MCAPI void setTrackOutput(bool trackOutput);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~BaseCommandBlock();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Safety::RedactableString const& DefaultCommandBlockName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static ::Bedrock::Safety::RedactableString const& DefaultCommandBlockName();
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

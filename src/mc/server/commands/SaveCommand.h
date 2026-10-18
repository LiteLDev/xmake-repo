#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
class SaveCommand {
#else // @header-generator platform
// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class FileArchiver;
class Level;
struct SnapshotFilenameAndLength;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class SaveCommand : public ::ServerCommand {
#endif // @header-generator platform
public:
    // SaveCommand inner types define
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Mode : int {};
#else // @header-generator platform
    enum class Mode : int {
        Hold   = 0,
        Resume = 1,
        Query  = 2,
    };
#endif // @header-generator platform

#if defined(LL_PLAT_C) // @header-generator platform
    enum class State : int {};
#else // @header-generator platform
    enum class State : int {
        Idle     = 0,
        Saving   = 1,
        Complete = 2,
        Failed   = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SaveCommand::Mode> mMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput& output) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool saveHold(::Level& level, ::FileArchiver* fileArchiver);

    MCAPI static bool saveResume(::Level& level);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string& mGeneratedVanillaLevelDataPath();

    MCAPI static ::std::vector<::SnapshotFilenameAndLength>& mSaveAllFileList();

    MCAPI static ::Bedrock::Threading::Mutex& mSaveAllMutex();

    MCAPI static ::SaveCommand::State& mState();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const&, ::CommandOutput& output) const;
    // NOLINTEND
#endif // @header-generator platform
};
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/util/GridArea.h"
#include "mc/world/actor/player/LoadingState.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class LevelChunk;
class LevelStorage;
class MinecraftScreenModel;
class TaskGroup;
struct LevelSummary;
// clang-format on

class MakeInfiniteProgressHandler : public ::ProgressHandler {
public:
    // MakeInfiniteProgressHandler inner types define
    enum class State : int {
        Backup  = 0,
        Loading = 1,
        Saving  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::MakeInfiniteProgressHandler::State> mState;
    ::ll::TypedStorage<8, 8, ::LevelSummary const&>                mEditedLevel;
    ::ll::TypedStorage<4, 4, ::StorageVersion>                     mStorageVersion;
    ::ll::TypedStorage<8, 40, std::unordered_set<ChunkPos>>        mUnloaded;
    ::ll::UntypedStorage<8, 400>                                   mView;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkSource>>         mLegacySource;
    ::ll::UntypedStorage<8, 16>                                    mLevelStorage;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>           mIOTaskGroup;
    ::ll::UntypedStorage<1, 16>                                    mDone;
    ::ll::UntypedStorage<8, 48>                                    mCallback;
    ::ll::TypedStorage<4, 4, float>                                mProgress;
    ::ll::TypedStorage<8, 72, std::string[3]>                      mMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    MakeInfiniteProgressHandler& operator=(MakeInfiniteProgressHandler const&);
    MakeInfiniteProgressHandler(MakeInfiniteProgressHandler const&);
    MakeInfiniteProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MakeInfiniteProgressHandler();

    virtual void onStart(::MinecraftScreenModel&);

    virtual void tick(::MinecraftScreenModel&);

    virtual void onCancel(::MinecraftScreenModel&);

    virtual void onExit(::MinecraftScreenModel&);

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const;

    virtual float getLoadingProgress(::MinecraftScreenModel&) const;

    virtual std::string getProgressMessage(::MinecraftScreenModel&) const;

    virtual std::string getName() const;

    virtual std::string getTTSProgressMessage() const;

    virtual std::string getTitleText() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MakeInfiniteProgressHandler(::LevelSummary const&, ::StorageVersion, std::function<void()>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LevelSummary const&, ::StorageVersion, std::function<void()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onStart(::MinecraftScreenModel&);

    MCNAPI void $tick(::MinecraftScreenModel&);

    MCNAPI void $onCancel(::MinecraftScreenModel&);

    MCNAPI void $onExit(::MinecraftScreenModel&);

    MCNAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCNAPI float $getLoadingProgress(::MinecraftScreenModel&) const;

    MCNAPI std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCNAPI std::string $getName() const;

    MCNAPI std::string $getTTSProgressMessage() const;

    MCNAPI std::string $getTitleText() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

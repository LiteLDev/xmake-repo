#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
#else // @header-generator platform
class MakeInfiniteProgressHandler {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // MakeInfiniteProgressHandler inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class State : int {
        Backup  = 0,
        Loading = 1,
        Saving  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::MakeInfiniteProgressHandler::State>           mState;
    ::ll::TypedStorage<8, 8, ::LevelSummary const&>                          mEditedLevel;
    ::ll::TypedStorage<4, 4, ::StorageVersion>                               mStorageVersion;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ChunkPos>>              mUnloaded;
    ::ll::TypedStorage<8, 304, ::GridArea<::std::shared_ptr<::LevelChunk>>>  mView;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkSource>>               mLegacySource;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::LevelStorage>> mLevelStorage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                 mIOTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                                           mDone;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                       mCallback;
    ::ll::TypedStorage<4, 4, float>                                          mProgress;
    ::ll::TypedStorage<8, 96, ::std::string[3]>                              mMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    MakeInfiniteProgressHandler& operator=(MakeInfiniteProgressHandler const&);
    MakeInfiniteProgressHandler(MakeInfiniteProgressHandler const&);
    MakeInfiniteProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MakeInfiniteProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onExit(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual float getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTTSProgressMessage() const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MakeInfiniteProgressHandler(
        ::LevelSummary const&   editedLevel,
        ::StorageVersion        storageVersion,
        ::std::function<void()> callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::LevelSummary const& editedLevel, ::StorageVersion storageVersion, ::std::function<void()> callback);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI float $getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getTTSProgressMessage() const;

    MCFOLD ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND
#else // @header-generator platform
    enum class State : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

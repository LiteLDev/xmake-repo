#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/WorldID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/util/GridArea.h"
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class IContentKeyProvider;
class ILevelListCache;
class LevelChunk;
class LevelDbEnv;
class LevelStorage;
class TaskGroup;
// clang-format on

namespace World {

class InfiniteWorldConverter {
public:
    // InfiniteWorldConverter inner types define
    enum class State : int {
        Idle    = 0,
        Loading = 1,
        Done    = 2,
    };

    enum class Result : int {
        Ok           = 0,
        InvalidLevel = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>             mTaskGroup;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                     mLevelListCache;
    ::ll::UntypedStorage<8, 24>                                      mKeyProvider;
    ::ll::UntypedStorage<8, 24>                                      mLevelDbEnv;
    ::ll::UntypedStorage<8, 16>                                      mLevelStorage;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkSource>>           mLegacySource;
    ::ll::TypedStorage<4, 4, ::World::InfiniteWorldConverter::State> mState;
    ::ll::UntypedStorage<8, 400>                                     mView;
    ::ll::TypedStorage<8, 40, std::unordered_set<ChunkPos>>          mUnloaded;
    ::ll::UntypedStorage<4, 4>                                       mProgress;
    ::ll::UntypedStorage<8, 32>                                      mWorldId;
    ::ll::UntypedStorage<8, 48>                                      mOnCompleteCallback;
    ::ll::UntypedStorage<8, 48>                                      mOnErrorCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    InfiniteWorldConverter& operator=(InfiniteWorldConverter const&);
    InfiniteWorldConverter(InfiniteWorldConverter const&);
    InfiniteWorldConverter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InfiniteWorldConverter(
        ::ILevelListCache&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>
    );

    MCNAPI void _tick();

    MCNAPI void makeWorldInfinite(
        ::World::WorldID const&,
        std::function<void()>,
        std::function<void(World::InfiniteWorldConverter::Result)>
    );

    MCNAPI void update(double);

    MCNAPI ~InfiniteWorldConverter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ILevelListCache&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace World

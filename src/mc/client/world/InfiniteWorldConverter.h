#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace World {

class InfiniteWorldConverter {
public:
    // InfiniteWorldConverter inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class State : int {
        Idle    = 0,
        Loading = 1,
        Done    = 2,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class State : int {
        Idle    = 0,
        Loading = 1,
        Done    = 2,
    };
#else // @header-generator platform
    enum class State : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Result : int {
        Ok           = 0,
        InvalidLevel = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                                  mTaskGroup;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                              mLevelListCache;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>>     mKeyProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>>                    mLevelDbEnv;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::LevelStorage>>                  mLevelStorage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkSource>>                                mLegacySource;
    ::ll::TypedStorage<4, 4, ::World::InfiniteWorldConverter::State>                          mState;
    ::ll::TypedStorage<8, 304, ::GridArea<::std::shared_ptr<::LevelChunk>>>                   mView;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ChunkPos>>                               mUnloaded;
    ::ll::TypedStorage<4, 4, float>                                                           mProgress;
    ::ll::TypedStorage<8, 32, ::World::WorldID>                                               mWorldId;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                        mOnCompleteCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::World::InfiniteWorldConverter::Result)>> mOnErrorCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    InfiniteWorldConverter& operator=(InfiniteWorldConverter const&);
    InfiniteWorldConverter(InfiniteWorldConverter const&);
    InfiniteWorldConverter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InfiniteWorldConverter(
        ::ILevelListCache&                                                levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv
    );

    MCAPI void _tick();

    MCAPI void makeWorldInfinite(
        ::World::WorldID const&                                        id,
        ::std::function<void()>                                        onCompleteCallback,
        ::std::function<void(::World::InfiniteWorldConverter::Result)> onErrorCallback
    );

    MCAPI ~InfiniteWorldConverter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ILevelListCache&                                                levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    enum class Result : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace World

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on

class DeleteStorageAreaContentProgressHandler : public ::ProgressHandler {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class DeleteStorageAreaContentProgressHandler : public ::ProgressHandler {
#else // @header-generator platform
class DeleteStorageAreaContentProgressHandler {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // DeleteStorageAreaContentProgressHandler inner types declare
    // clang-format off
    struct CancelTimeInfo;
    // clang-format on

    // DeleteStorageAreaContentProgressHandler inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class StateBitField : uint {
        // bitfield representation
        InProgress    = 1u << 0,
        UserCanCancel = 1u << 1,
        TakingTooLong = 1u << 2,
        Complete      = 1u << 3,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class StateBitField : uint {
        // bitfield representation
        InProgress    = 1u << 0,
        UserCanCancel = 1u << 1,
        TakingTooLong = 1u << 2,
        Complete      = 1u << 3,
    };
#else // @header-generator platform
    enum class StateBitField : uint {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct CancelTimeInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>> const> mSecondsBeforeUserCanCancel;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>> const>
            mSecondsBeforeClientShouldCancel;
        // NOLINTEND
    };

    using DirectoryList = std::vector<Core::PathBuffer<std::string>>;

    using OnCompleteCallback = std::function<void()> const;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mDirectoryList;
    ::ll::UntypedStorage<8, 24> mCancelTimeInfo;
    ::ll::UntypedStorage<8, 48> mOnCompleteCallback;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartTimestamp;
    ::ll::TypedStorage<4, 4, ::DeleteStorageAreaContentProgressHandler::StateBitField> mStates;
    ::ll::UntypedStorage<8, 32> mDeleteStorageAreaContentTitle;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DeleteStorageAreaContentProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeleteStorageAreaContentProgressHandler();

    virtual void onStart(::MinecraftScreenModel&);

    virtual void tick(::MinecraftScreenModel&);

    virtual void onCancel(::MinecraftScreenModel&);

    virtual void onExit(::MinecraftScreenModel&);

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const;

    virtual std::string getProgressMessage(::MinecraftScreenModel&) const;

    virtual std::string getName() const;

    virtual std::string getTitleText() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeleteStorageAreaContentProgressHandler(
        ::DeleteStorageAreaContentProgressHandler::CancelTimeInfo&&,
        std::function<void()> const&&
    );

    MCNAPI void
    deleteDirectoryContentsRecursively(::Core::PathBuffer<Core::BasicStackString<char, 1024>>&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DeleteStorageAreaContentProgressHandler::CancelTimeInfo&&, std::function<void()> const&&);
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

    MCNAPI std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCNAPI std::string $getName() const;

    MCNAPI std::string $getTitleText() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct CancelTimeInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::chrono::seconds const> mSecondsBeforeUserCanCancel;
        ::ll::TypedStorage<8, 8, ::std::chrono::seconds const> mSecondsBeforeClientShouldCancel;
        // NOLINTEND
    };

    using OnCompleteCallback = ::std::function<void()> const;

    using DirectoryList = ::std::vector<::Core::PathBuffer<::std::string>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::PathBuffer<::std::string>>>          mDirectoryList;
    ::ll::TypedStorage<8, 16, ::DeleteStorageAreaContentProgressHandler::CancelTimeInfo> mCancelTimeInfo;
    ::ll::TypedStorage<8, 64, ::std::function<void()> const>                             mOnCompleteCallback;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                    mStartTimestamp;
    ::ll::TypedStorage<4, 4, ::DeleteStorageAreaContentProgressHandler::StateBitField>   mStates;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mDeleteStorageAreaContentTitle;
    // NOLINTEND

public:
    // prevent constructor by default
    DeleteStorageAreaContentProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeleteStorageAreaContentProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel&) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onExit(::MinecraftScreenModel&) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DeleteStorageAreaContentProgressHandler(
        ::DeleteStorageAreaContentProgressHandler::CancelTimeInfo&& cancelTimeInfo,
        ::std::function<void()> const&&                             onCompleteCallback
    );

    MCAPI void deleteDirectoryContentsRecursively(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& rootPath,
        ::std::string const&                                      dirToDelete
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::DeleteStorageAreaContentProgressHandler::CancelTimeInfo&& cancelTimeInfo,
        ::std::function<void()> const&&                             onCompleteCallback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onStart(::MinecraftScreenModel&);

    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onExit(::MinecraftScreenModel&);

    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct CancelTimeInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
};

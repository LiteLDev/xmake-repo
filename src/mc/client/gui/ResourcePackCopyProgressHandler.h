#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class IResourcePackRepository;
class MinecraftScreenModel;
class TaskGroup;
// clang-format on

class ResourcePackCopyProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mLevelID;
    ::ll::UntypedStorage<8, 24>            mFuture;
    ::ll::UntypedStorage<8, 48>            mCallback;
    ::ll::UntypedStorage<8, 16>            mIOTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackCopyProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePackCopyProgressHandler();

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
    MCNAPI ResourcePackCopyProgressHandler(std::string const&, std::function<void()>);

    MCNAPI ::Bedrock::Threading::Async<void> start(
        ::Core::PathBuffer<std::string> const&,
        ::IResourcePackRepository&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, std::function<void()>);
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
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class IResourcePackRepository;
class MinecraftScreenModel;
class TaskGroup;
// clang-format on

class ResourcePackCopyProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                     mLevelID;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>> mFuture;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>           mCallback;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>     mIOTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackCopyProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePackCopyProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onExit(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourcePackCopyProgressHandler(::std::string const& levelID, ::std::function<void()> callback);

    MCAPI ::Bedrock::Threading::Async<void> start(
        ::Core::PathBuffer<::std::string> const&             worldPath,
        ::IResourcePackRepository&                           resourcePackRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& levelID, ::std::function<void()> callback);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCFOLD ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND
};
#else // @header-generator platform
class ResourcePackCopyProgressHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

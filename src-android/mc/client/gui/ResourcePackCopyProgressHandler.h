#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

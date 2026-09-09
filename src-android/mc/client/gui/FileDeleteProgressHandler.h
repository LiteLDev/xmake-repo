#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class IContentManager;
class MinecraftScreenModel;
class TaskGroup;
struct ContentItem;
// clang-format on

class FileDeleteProgressHandler : public ::ProgressHandler {
public:
    // FileDeleteProgressHandler inner types define
    using DeleteContentItemVector = std::vector<std::shared_ptr<const ContentItem>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentManager&>                               mContentManager;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const ContentItem>>> mToDelete;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                       mIOTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                                             mDeleteComplete;
    // NOLINTEND

public:
    // prevent constructor by default
    FileDeleteProgressHandler& operator=(FileDeleteProgressHandler const&);
    FileDeleteProgressHandler(FileDeleteProgressHandler const&);
    FileDeleteProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileDeleteProgressHandler();

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
    MCNAPI FileDeleteProgressHandler(::IContentManager&, std::vector<std::shared_ptr<const ContentItem>>&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IContentManager&, std::vector<std::shared_ptr<const ContentItem>>&&);
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

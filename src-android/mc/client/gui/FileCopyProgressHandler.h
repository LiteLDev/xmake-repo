#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class TaskGroup;
namespace Core { class Path; }
// clang-format on

class FileCopyProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>               mTitle;
    ::ll::UntypedStorage<8, 24>                          mDestPath;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>     mExistenceTracker;
    ::ll::UntypedStorage<8, 48>                          mCallback;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mIOTaskGroup;
    ::ll::TypedStorage<8, 48, ::ResourceLocation>        mSrcLocation;
    ::ll::TypedStorage<1, 1, bool>                       mSrcZip;
    ::ll::TypedStorage<1, 1, bool>                       mDestZip;
    ::ll::TypedStorage<1, 1, bool>                       mCopyComplete;
    ::ll::TypedStorage<1, 1, bool>                       mCopySuccess;
    ::ll::UntypedStorage<8, 32>                          mExcludeDirs;
    // NOLINTEND

public:
    // prevent constructor by default
    FileCopyProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileCopyProgressHandler();

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
    MCNAPI FileCopyProgressHandler(
        std::string const&,
        ::ResourceLocation const&,
        bool,
        ::Core::Path const&,
        bool,
        std::vector<std::string> const&,
        std::function<void(bool)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::string const&,
        ::ResourceLocation const&,
        bool,
        ::Core::Path const&,
        bool,
        std::vector<std::string> const&,
        std::function<void(bool)>
    );
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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class TaskGroup;
// clang-format on

class ContentLogFileDeleteProgressHandler : public ::ProgressHandler {
public:
    // ContentLogFileDeleteProgressHandler inner types define
    enum class FileDeleteTarget : int {
        ContentLogs                    = 0,
        DiagnosticsAndProfilerCaptures = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ContentLogFileDeleteProgressHandler::FileDeleteTarget> mTarget;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                              mIOTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentLogFileDeleteProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentLogFileDeleteProgressHandler();

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
    MCNAPI explicit ContentLogFileDeleteProgressHandler(::ContentLogFileDeleteProgressHandler::FileDeleteTarget);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContentLogFileDeleteProgressHandler::FileDeleteTarget);
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

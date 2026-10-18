#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class GenericProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>            mOnStart;
    ::ll::UntypedStorage<8, 64>            mOnTick;
    ::ll::UntypedStorage<8, 64>            mOnCancel;
    ::ll::TypedStorage<1, 1, bool>         mIsCancellable;
    ::ll::TypedStorage<8, 24, std::string> mTitleText;
    ::ll::UntypedStorage<8, 32>            mMessageText;
    // NOLINTEND

public:
    // prevent constructor by default
    GenericProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GenericProgressHandler();

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
    MCNAPI GenericProgressHandler(
        std::string,
        std::string,
        ::brstd::move_only_function<void()>,
        ::brstd::move_only_function<void()>,
        ::brstd::move_only_function<void()>,
        bool
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::string,
        std::string,
        ::brstd::move_only_function<void()>,
        ::brstd::move_only_function<void()>,
        ::brstd::move_only_function<void()>,
        bool
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class GenericProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void()>> mOnStart;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void()>> mOnTick;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void()>> mOnCancel;
    ::ll::TypedStorage<1, 1, bool>                                 mIsCancellable;
    ::ll::TypedStorage<8, 32, ::std::string>                       mTitleText;
    ::ll::TypedStorage<8, 32, ::std::string>                       mMessageText;
    // NOLINTEND

public:
    // prevent constructor by default
    GenericProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GenericProgressHandler() /*override*/ = default;

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
    MCAPI GenericProgressHandler(
        ::std::string                       title,
        ::std::string                       message,
        ::brstd::move_only_function<void()> startCallback,
        ::brstd::move_only_function<void()> tickCallback,
        ::brstd::move_only_function<void()> cancelCallback,
        bool                                isCancellable
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string                       title,
        ::std::string                       message,
        ::brstd::move_only_function<void()> startCallback,
        ::brstd::move_only_function<void()> tickCallback,
        ::brstd::move_only_function<void()> cancelCallback,
        bool                                isCancellable
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCFOLD ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND
};
#else // @header-generator platform
class GenericProgressHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

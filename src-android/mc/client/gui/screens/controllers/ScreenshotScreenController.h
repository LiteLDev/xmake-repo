#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class TaskGroup;
namespace Json { class Value; }
// clang-format on

class ScreenshotScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mScreenshotPath;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag> mNextTickDirtyFlag;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mCloseScreenAt;
    ::ll::UntypedStorage<8, 16> mAsyncTaskGroup;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenshotScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenshotScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScreenshotScreenController(std::shared_ptr<ClientInstanceScreenModel>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

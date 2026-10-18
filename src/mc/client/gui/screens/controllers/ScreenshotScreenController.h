#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>      mScreenshotPath;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                         mNextTickDirtyFlag;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mCloseScreenAt;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>          mAsyncTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenshotScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenshotScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScreenshotScreenController(::std::shared_ptr<::ClientInstanceScreenModel> model);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND
};
#else // @header-generator platform
class ScreenshotScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform

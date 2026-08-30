#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/file/PathView.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystem; }
// clang-format on

namespace Bedrock {

struct DeviceIdEnvironment {
public:
    // DeviceIdEnvironment inner types declare
    // clang-format off
    struct RecordPathInfo;
    // clang-format on

    // DeviceIdEnvironment inner types define
    struct RecordPathInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 24> mRecordPath;
        ::ll::UntypedStorage<1, 8>  mShouldReportError;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Core::PathView> mHomePath;
    ::ll::TypedStorage<8, 16, ::Core::PathView> mSettingsPath;
    ::ll::UntypedStorage<8, 32>                 mFileSystem;
    ::ll::UntypedStorage<8, 64>                 mGetRecordPathInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceIdEnvironment& operator=(DeviceIdEnvironment const&);
    DeviceIdEnvironment(DeviceIdEnvironment const&);
    DeviceIdEnvironment();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DeviceIdEnvironment();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock

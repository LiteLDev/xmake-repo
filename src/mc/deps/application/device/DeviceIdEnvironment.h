#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/file/PathView.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystem; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<1, 24> mRecordPath;
        ::ll::UntypedStorage<1, 8>  mShouldReportError;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk50ea9a;
        ::ll::UntypedStorage<1, 1>  mUnka4ffc5;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        RecordPathInfo& operator=(RecordPathInfo const&);
        RecordPathInfo(RecordPathInfo const&);
        RecordPathInfo();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Core::PathView> mHomePath;
    ::ll::TypedStorage<8, 16, ::Core::PathView> mSettingsPath;
    ::ll::UntypedStorage<8, 32>                 mFileSystem;
    ::ll::UntypedStorage<8, 64>                 mGetRecordPathInfo;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk6dcaae;
    ::ll::UntypedStorage<8, 16> mUnk8f1c11;
    ::ll::UntypedStorage<8, 24> mUnkce2b57;
    ::ll::UntypedStorage<8, 64> mUnk69ab47;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceIdEnvironment& operator=(DeviceIdEnvironment const&);
    DeviceIdEnvironment(DeviceIdEnvironment const&);
    DeviceIdEnvironment();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Bedrock

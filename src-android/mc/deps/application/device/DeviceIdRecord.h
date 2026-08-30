#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DeviceIdErrorType { struct CacheOpenFailed; }
namespace Bedrock::DeviceIdErrorType { struct FileWriteError; }
namespace Bedrock::DeviceIdErrorType { struct NoCacheFound; }
namespace Bedrock::DeviceIdErrorType { struct ValidationFail; }
namespace Core { class FileSystem; }
namespace Core { class Path; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on

namespace Bedrock {

class DeviceIdRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mDeviceId;
    ::ll::TypedStorage<1, 1, bool>         mIsMigrated;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceIdRecord& operator=(DeviceIdRecord const&);
    DeviceIdRecord(DeviceIdRecord const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeviceIdRecord();

    MCNAPI ::Bedrock::DeviceIdRecord& operator=(::Bedrock::DeviceIdRecord&&);

    MCNAPI ::Bedrock::Result<
        void,
        std::variant<
            Bedrock::DeviceIdErrorType::FileWriteError,
            Bedrock::DeviceIdErrorType::NoCacheFound,
            Bedrock::DeviceIdErrorType::CacheOpenFailed,
            Bedrock::DeviceIdErrorType::ValidationFail>>
    writeToCacheFile(::Core::Path const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<
        void,
        std::variant<
            Bedrock::DeviceIdErrorType::FileWriteError,
            Bedrock::DeviceIdErrorType::NoCacheFound,
            Bedrock::DeviceIdErrorType::CacheOpenFailed,
            Bedrock::DeviceIdErrorType::ValidationFail>>
    readFromCacheFile(::Core::FileSystem&, ::Core::Path const&, ::Bedrock::DeviceIdRecord&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& _cacheRecordFileName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace Bedrock

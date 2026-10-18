#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DeviceIdErrorType { struct CacheOpenFailed; }
namespace Bedrock::DeviceIdErrorType { struct FileWriteError; }
namespace Bedrock::DeviceIdErrorType { struct NoCacheFound; }
namespace Bedrock::DeviceIdErrorType { struct ValidationFail; }
namespace Core { class FileSystem; }
namespace Core { class Path; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { template<typename T0, int T1> class BasicStackString; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Bedrock {

class DeviceIdRecord {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mDeviceId;
    ::ll::TypedStorage<1, 1, bool>         mIsMigrated;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnked1b8f;
    ::ll::UntypedStorage<1, 1>  mUnk6df0be;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceIdRecord& operator=(DeviceIdRecord const&);
    DeviceIdRecord(DeviceIdRecord const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DeviceIdRecord();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Result<
        void,
        ::std::variant<
            ::Bedrock::DeviceIdErrorType::FileWriteError,
            ::Bedrock::DeviceIdErrorType::NoCacheFound,
            ::Bedrock::DeviceIdErrorType::CacheOpenFailed,
            ::Bedrock::DeviceIdErrorType::ValidationFail>> writeToCacheFolder(::Core::Path const& pathToCacheFolder);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<
        void,
        std::variant<
            Bedrock::DeviceIdErrorType::FileWriteError,
            Bedrock::DeviceIdErrorType::NoCacheFound,
            Bedrock::DeviceIdErrorType::CacheOpenFailed,
            Bedrock::DeviceIdErrorType::ValidationFail>>
    readFromCacheFile(::Core::FileSystem&, ::Core::Path const&, ::Bedrock::DeviceIdRecord&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::Bedrock::Result<
        void,
        ::std::variant<
            ::Bedrock::DeviceIdErrorType::FileWriteError,
            ::Bedrock::DeviceIdErrorType::NoCacheFound,
            ::Bedrock::DeviceIdErrorType::CacheOpenFailed,
            ::Bedrock::DeviceIdErrorType::ValidationFail>>
    readFromCacheFolder(
        ::Core::FileSystem&        fileSystem,
        ::Core::Path const&        pathToCacheFolder,
        ::Bedrock::DeviceIdRecord& outRecord
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const*& _cacheRecordFileName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static char const*& _cacheRecordFileName();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock

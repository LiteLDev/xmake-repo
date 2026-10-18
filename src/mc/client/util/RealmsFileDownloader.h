#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/util/DownloaderResult.h"
#include "mc/util/StreamFileDownloader.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
struct FileInfo;
namespace Bedrock::Http { class Request; }
// clang-format on

class RealmsFileDownloader : public ::StreamFileDownloader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>> mRealmsAPI;
    ::ll::UntypedStorage<8, 32>                         mRealmsToken;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsFileDownloader();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RealmsFileDownloader();

    virtual void initRealmsFileDownloader(std::string const&, int const, std::string const&, ::FileInfo const&, ulong, std::string const&, std::function<void (DownloaderResult)>);

    virtual void initFileDownloader(std::string const&, std::string const&, ::FileInfo const&, ulong, ulong, std::string const&, std::function<void (DownloaderResult)>);

    virtual ::Bedrock::Http::Request _makeRequest();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsFileDownloader(std::weak_ptr<RealmsAPI>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<RealmsAPI>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initRealmsFileDownloader(
        std::string const&,
        int const,
        std::string const&,
        ::FileInfo const&,
        ulong,
        std::string const&,
        std::function<void(DownloaderResult)>
    );

    MCNAPI void $initFileDownloader(
        std::string const&,
        std::string const&,
        ::FileInfo const&,
        ulong,
        ulong,
        std::string const&,
        std::function<void(DownloaderResult)>
    );

    MCNAPI ::Bedrock::Http::Request $_makeRequest();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsFileDownloader {};
#endif // @header-generator platform

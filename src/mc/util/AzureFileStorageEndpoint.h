#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/Components.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/DownloaderResult.h"

// auto generated forward declare list
// clang-format off
class AzureFileDownloader;
class TaskGroup;
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Core { class Path; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Util::Url { struct ComponentsView; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class AzureFileStorageEndpoint {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 120, ::Util::Url::Components>                         mBaseURL;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, std::string>>> mSAS;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 160> mUnk5e7675;
    ::ll::UntypedStorage<8, 24>  mUnke8f937;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AzureFileStorageEndpoint& operator=(AzureFileStorageEndpoint const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AzureFileStorageEndpoint(AzureFileStorageEndpoint const&);
#endif // @header-generator platform
    AzureFileStorageEndpoint();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~AzureFileStorageEndpoint() = default;

    virtual ::Bedrock::Http::Request makeListFilesRequest(::Core::Path const&) const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendListFilesRequest(::Bedrock::Http::Request&, ::TaskGroup&, std::function<void (const Bedrock::Http::Response&, const std::string&)>) const;
#else // @header-generator platform
    virtual void sendListFilesRequest(
        ::Bedrock::Http::Request&,
        ::TaskGroup&,
        ::std::function<void(::Bedrock::Http::Response const&, ::std::string const&)>
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void downloadSingleFile(::Core::Path const&, ::AzureFileDownloader&, std::function<void (DownloaderResult)>) const;
    // clang-format on
#else // @header-generator platform
    virtual void
    downloadSingleFile(::Core::Path const&, ::AzureFileDownloader&, ::std::function<void(::DownloaderResult)>) const;
#endif // @header-generator platform
    // NOLINTEND
};

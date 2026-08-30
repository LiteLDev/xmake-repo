#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Components.h"
#include "mc/util/DownloaderResult.h"

// auto generated forward declare list
// clang-format off
class AzureFileDownloader;
class TaskGroup;
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Core { class Path; }
namespace Util::Url { struct ComponentsView; }
// clang-format on

class AzureFileStorageEndpoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::Util::Url::Components>                         mBaseURL;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, std::string>>> mSAS;
    // NOLINTEND

public:
    // prevent constructor by default
    AzureFileStorageEndpoint& operator=(AzureFileStorageEndpoint const&);
    AzureFileStorageEndpoint();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~AzureFileStorageEndpoint() = default;

    virtual ::Bedrock::Http::Request makeListFilesRequest(::Core::Path const&) const;

    virtual void sendListFilesRequest(::Bedrock::Http::Request&, ::TaskGroup&, std::function<void (const Bedrock::Http::Response&, const std::string&)>) const;

    virtual void downloadSingleFile(::Core::Path const&, ::AzureFileDownloader&, std::function<void (DownloaderResult)>) const;
    // clang-format on
    // NOLINTEND
};

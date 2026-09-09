#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/HttpRequestHandler.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class FileDataResponse;
class ServiceClient;
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { class Status; }
namespace Core { class Path; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on

class FileDataRequest : public ::HttpRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const>                                            mContentUrl;
    ::ll::UntypedStorage<8, 48>                                                             mCallback;
    ::ll::UntypedStorage<8, 24>                                                             mFileCacheLocation;
    ::ll::TypedStorage<8, 24, std::vector<std::basic_regex<char, std::regex_traits<char>>>> mRequiredContentTypes;
    ::ll::TypedStorage<8, 16, std::shared_ptr<FileDataResponse>>                            mFileDataResponse;
    ::ll::TypedStorage<1, 1, bool>                                                          mFileExtMissing;
    ::ll::UntypedStorage<8, 24>                                                             mFullFilePath;
    // NOLINTEND

public:
    // prevent constructor by default
    FileDataRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileDataRequest();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(std::string);

    virtual void processResponse(::Bedrock::Http::Response);

    virtual void onComplete();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileDataRequest(
        ::ServiceClient const&,
        std::string const&,
        ::Core::Path const&,
        std::function<void(Bedrock::Http::Status, const Core::Path&, ulong)>
    );

    MCNAPI void addRequiredContentType(std::basic_regex<char, std::regex_traits<char>>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ServiceClient const&,
        std::string const&,
        ::Core::Path const&,
        std::function<void(Bedrock::Http::Status, const Core::Path&, ulong)>
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
    MCNAPI ::Bedrock::Threading::Async<std::string> $getAuthToken();

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::Response> $send(std::string);

    MCNAPI void $processResponse(::Bedrock::Http::Response);

    MCNAPI void $onComplete();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

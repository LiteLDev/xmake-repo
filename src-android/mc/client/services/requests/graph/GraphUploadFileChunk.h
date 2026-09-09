#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/HttpRequestHandler.h"
#include "mc/deps/core/http/Url.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class EduGraphService;
namespace Bedrock::Http { class Response; }
namespace MSGraph::Models { struct DriveItem; }
namespace MSGraph::Models { struct GraphError; }
namespace MSGraph::Models { struct GraphUploadBody; }
namespace MSGraph::Models { struct UploadSession; }
// clang-format on

class GraphUploadFileChunk : public ::HttpRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<MSGraph::Models::GraphUploadBody>> mUploadBody;
    ::ll::UntypedStorage<1, 24>                                                  mUrl;
    ::ll::TypedStorage<4, 4, uint>                                               mStartByte;
    ::ll::TypedStorage<8, 8, ulong>                                              mFileSize;
    ::ll::UntypedStorage<8, 48>                                                  mGetAuthToken;
    ::ll::UntypedStorage<8, 48>                                                  mCallback;
    ::ll::UntypedStorage<8, 160>                                                 mUploadSessionResult;
    ::ll::UntypedStorage<8, 208>                                                 mDriveItemResult;
    ::ll::UntypedStorage<4, 16>                                                  mStatus;
    // NOLINTEND

public:
    // prevent constructor by default
    GraphUploadFileChunk();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GraphUploadFileChunk();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(std::string);

    virtual void processResponse(::Bedrock::Http::Response);

    virtual void onComplete();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GraphUploadFileChunk(
        ::EduGraphService const&,
        std::function<const std::string()>,
        std::shared_ptr<MSGraph::Models::GraphUploadBody>,
        std::string const&,
        uint const,
        ulong const,
        std::function<void(
            Bedrock::Result<MSGraph::Models::UploadSession, MSGraph::Models::GraphError>,
            Bedrock::Result<MSGraph::Models::DriveItem, MSGraph::Models::GraphError>,
            uint
        )>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::EduGraphService const&,
        std::function<const std::string()>,
        std::shared_ptr<MSGraph::Models::GraphUploadBody>,
        std::string const&,
        uint const,
        ulong const,
        std::function<void(
            Bedrock::Result<MSGraph::Models::UploadSession, MSGraph::Models::GraphError>,
            Bedrock::Result<MSGraph::Models::DriveItem, MSGraph::Models::GraphError>,
            uint
        )>
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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/ms_graph/ConflictBehavior.h"
#include "mc/client/services/requests/HttpRequestHandler.h"
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class EduGraphService;
namespace Bedrock::Http { class Response; }
namespace MSGraph::Models { struct DriveItem; }
namespace MSGraph::Models { struct GraphError; }
// clang-format on

class GraphUploadDriveItem : public ::HttpRequestHandler {
#else // @header-generator platform
class GraphUploadDriveItem {
#endif // @header-generator platform
public:
    // GraphUploadDriveItem inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct File;
#else // @header-generator platform
#endif // @header-generator platform
    struct DriveItem;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct File;
#endif // @header-generator platform
    // clang-format on

    // GraphUploadDriveItem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct File {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                        filename;
        ::ll::TypedStorage<4, 4, ::MSGraph::Models::ConflictBehavior> conflictBehavior;
        // NOLINTEND
#else // @header-generator platform
    struct DriveItem {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        File& operator=(File const&);
        File();
    };

    struct DriveItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> id;
        // NOLINTEND

    public:
        // prevent constructor by default
        DriveItem& operator=(DriveItem const&);
        DriveItem();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                               mRelativeUrl;
    ::ll::UntypedStorage<8, 48>                                                                          mGetAuthToken;
    ::ll::UntypedStorage<8, 48>                                                                          mCallback;
    ::ll::UntypedStorage<1, 24>                                                                          mPath;
    ::ll::TypedStorage<8, 40, std::variant<GraphUploadDriveItem::File, GraphUploadDriveItem::DriveItem>> mId;
    ::ll::UntypedStorage<8, 208>                                                                         mResponse;
    ::ll::UntypedStorage<4, 16>                                                                          mStatus;
    // NOLINTEND

public:
    // prevent constructor by default
    GraphUploadDriveItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GraphUploadDriveItem();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(std::string);

    virtual void processResponse(::Bedrock::Http::Response);

    virtual void onComplete();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GraphUploadDriveItem(
        ::EduGraphService const&,
        std::function<const std::string()>,
        std::variant<GraphUploadDriveItem::File, GraphUploadDriveItem::DriveItem>,
        std::function<void(Bedrock::Result<MSGraph::Models::DriveItem, MSGraph::Models::GraphError>, uint)>,
        ::Core::Path
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::EduGraphService const&,
        std::function<const std::string()>,
        std::variant<GraphUploadDriveItem::File, GraphUploadDriveItem::DriveItem>,
        std::function<void(Bedrock::Result<MSGraph::Models::DriveItem, MSGraph::Models::GraphError>, uint)>,
        ::Core::Path
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
#else // @header-generator platform
    struct File {};
#endif // @header-generator platform
};

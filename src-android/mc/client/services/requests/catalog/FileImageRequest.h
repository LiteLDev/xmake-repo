#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/FileDataRequest.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class FetchImageParams;
namespace Bedrock::Http { class Status; }
namespace Core { class Path; }
// clang-format on

class FileImageRequest : public ::FileDataRequest {
public:
    // prevent constructor by default
    FileImageRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileImageRequest();

    virtual void sendCachedRequest();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileImageRequest(
        ::ContentCatalogService const&,
        ::FetchImageParams const&,
        std::function<void(Bedrock::Http::Status, const Core::Path&, ulong)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ContentCatalogService const&,
        ::FetchImageParams const&,
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
    MCNAPI void $sendCachedRequest();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/CatalogBackendPlayFab.h"
#include "mc/client/services/requests/catalog/SearchRequestURLType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class ServiceClient;
namespace Bedrock::Http { class RequestBuilder; }
// clang-format on

class CatalogBackendGatherings : public ::CatalogBackendPlayFab {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CatalogBackendGatherings();

    virtual std::string const& getCachedFilePrefix() const;

    virtual std::string getHostUrl() const;

    virtual std::string getSearchUrl(::SearchRequestURLType) const;

    virtual ::Bedrock::Threading::Async<Bedrock::Http::RequestBuilder> addAuthTokenHeader(::Bedrock::Http::RequestBuilder&&, ::ServiceClient const&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string const& $getCachedFilePrefix() const;

    MCNAPI std::string $getHostUrl() const;

    MCNAPI std::string $getSearchUrl(::SearchRequestURLType) const;

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::RequestBuilder>
    $addAuthTokenHeader(::Bedrock::Http::RequestBuilder&&, ::ServiceClient const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class CatalogBackendGatherings {};
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/clubs/GenericStatus.h"
#include "mc/client/services/requests/HttpRequestHandler.h"

// auto generated forward declare list
// clang-format off
class ServiceClient;
namespace Bedrock::Http { class Response; }
// clang-format on

class ClubsRequestHandler : public ::HttpRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mCacheCallback;
    ::ll::UntypedStorage<4, 16> mGenericStatus;
    // NOLINTEND

public:
    // prevent constructor by default
    ClubsRequestHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClubsRequestHandler();

    virtual void processResponse(::Bedrock::Http::Response);

    virtual std::string getURL() const = 0;

    virtual bool isLowPriority() const;

    virtual uint networkCallCount() const;

    virtual void completeFromCache(std::string const&, bool);

    virtual void _processResponse(::Bedrock::Http::Response) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool shouldCache() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $processResponse(::Bedrock::Http::Response);

    MCNAPI bool $isLowPriority() const;

    MCNAPI uint $networkCallCount() const;

    MCNAPI void $completeFromCache(std::string const&, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

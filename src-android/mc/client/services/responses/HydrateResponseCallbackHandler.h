#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CatalogBackend;
namespace Bedrock::Http { class Status; }
namespace Json { class Value; }
// clang-format on

struct HydrateResponseCallbackHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mAcceptLanguage;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HydrateResponseCallbackHandler();

    virtual void parseResponse(::Bedrock::Http::Status const&, ::Json::Value const&, ::CatalogBackend const&) = 0;

    virtual std::string const& getLastModifiedDate() const = 0;

    virtual ::Bedrock::Http::Status const& getStatus() const = 0;

    virtual void handleResponseCallback() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

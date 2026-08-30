#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/Document.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class ObjectNode; }
// clang-format on

namespace Bedrock {

class BootstrapConfig {
public:
    // BootstrapConfig inner types declare
    // clang-format off
    struct LoadResult;
    // clang-format on

    // BootstrapConfig inner types define
    struct LoadResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>        success;
        ::ll::TypedStorage<8, 8, char const*> errorMessage;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 4096, char[4096]>                      mBuffer;
    ::ll::TypedStorage<1, 512, char[512]>                        mError;
    ::ll::TypedStorage<8, 88, ::Bedrock::JSONObject::Document>   mDocument;
    ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::ObjectNode*> mRootObject;
    ::ll::TypedStorage<1, 1, bool>                               mInitialized;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::BootstrapConfig::LoadResult _makeBootstrapError(char const*);

    MCNAPI ::Bedrock::JSONObject::ObjectNode const* getRoot() const;

    MCNAPI ~BootstrapConfig();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::BootstrapConfig& getSharedInstance();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock

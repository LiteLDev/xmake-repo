#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/CommonDocument.h"
#include "mc/client/services/catalog/QueryManifestCustom.h"

struct QueryManifestDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 912, ::CommonDocument>     mCommon;
    ::ll::TypedStorage<8, 24, ::QueryManifestCustom> mCustom;
    // NOLINTEND

public:
    // prevent constructor by default
    QueryManifestDocument& operator=(QueryManifestDocument const&);
    QueryManifestDocument(QueryManifestDocument const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~QueryManifestDocument();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

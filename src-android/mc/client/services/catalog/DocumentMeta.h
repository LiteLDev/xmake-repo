#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/DurableDocument.h"

struct DocumentMeta {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 2040, ::DurableDocument> doc;
    ::ll::TypedStorage<1, 1, bool>                 installed;
    ::ll::TypedStorage<1, 1, bool>                 updateAvailable;
    // NOLINTEND

public:
    // prevent constructor by default
    DocumentMeta& operator=(DocumentMeta const&);
    DocumentMeta(DocumentMeta const&);
    DocumentMeta();
};

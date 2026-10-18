#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct DocumentMeta {};
#endif // @header-generator platform

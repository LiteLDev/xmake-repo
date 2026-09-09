#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/CommonDocument.h"
#include "mc/client/services/catalog/DurableCustom.h"

struct DurableDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 912, ::CommonDocument> mCommon;
    ::ll::TypedStorage<8, 1128, ::DurableCustom> mCustom;
    // NOLINTEND

public:
    // prevent constructor by default
    DurableDocument& operator=(DurableDocument const&);
};

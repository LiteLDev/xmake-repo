#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/CommonDocument.h"
#include "mc/client/services/catalog/EduContentCustom.h"

struct EduContentDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 912, ::CommonDocument>    mCommon;
    ::ll::TypedStorage<8, 1432, ::EduContentCustom> mCustom;
    // NOLINTEND

public:
    // prevent constructor by default
    EduContentDocument& operator=(EduContentDocument const&);
};

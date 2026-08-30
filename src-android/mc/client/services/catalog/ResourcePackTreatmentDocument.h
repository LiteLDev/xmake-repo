#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/CommonDocument.h"
#include "mc/client/services/catalog/ResourcePackTreatmentCustom.h"

struct ResourcePackTreatmentDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 912, ::CommonDocument>              mCommon;
    ::ll::TypedStorage<8, 104, ::ResourcePackTreatmentCustom> mCustom;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackTreatmentDocument& operator=(ResourcePackTreatmentDocument const&);
    ResourcePackTreatmentDocument(ResourcePackTreatmentDocument const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ResourcePackTreatmentDocument();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

struct SkinPackCollectionListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> mPackId;
    ::ll::UntypedStorage<8, 48>            mOnSkinPackCollectedCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinPackCollectionListener& operator=(SkinPackCollectionListener const&);
    SkinPackCollectionListener();
};

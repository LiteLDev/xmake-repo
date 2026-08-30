#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CreativeItemEntryPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4f78bb;
    ::ll::UntypedStorage<8, 64> mUnk8a9631;
    ::ll::UntypedStorage<4, 4>  mUnkd0c8ad;
    // NOLINTEND

public:
    // prevent constructor by default
    CreativeItemEntryPayload& operator=(CreativeItemEntryPayload const&);
    CreativeItemEntryPayload(CreativeItemEntryPayload const&);
    CreativeItemEntryPayload();
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/CreativeGroupInfoPayload.h"
#include "mc/CreativeItemEntryPayload.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CreativeItemRegistry;
// clang-format on

struct CreativeContentPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<CreativeGroupInfoPayload>> mGroups;
    ::ll::TypedStorage<8, 24, std::vector<CreativeItemEntryPayload>> mEntries;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CreativeContentPacketPayload(::Bedrock::NonOwnerPointer<const CreativeItemRegistry>);

    MCNAPI ~CreativeContentPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<const CreativeItemRegistry>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

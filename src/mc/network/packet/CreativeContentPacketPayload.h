#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/CreativeGroupInfoPayload.h"
#include "mc/CreativeItemEntryPayload.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CreativeItemRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct CreativeGroupInfoPayload;
struct CreativeItemEntryPayload;
#endif // @header-generator platform
// clang-format on

struct CreativeContentPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<CreativeGroupInfoPayload>> mGroups;
    ::ll::TypedStorage<8, 24, std::vector<CreativeItemEntryPayload>> mEntries;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::CreativeGroupInfoPayload>> mGroups;
    ::ll::TypedStorage<8, 24, ::std::vector<::CreativeItemEntryPayload>> mEntries;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CreativeContentPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CreativeContentPacketPayload(::Bedrock::NonOwnerPointer<const CreativeItemRegistry>);

    MCNAPI ~CreativeContentPacketPayload();
#else // @header-generator platform
    MCAPI explicit CreativeContentPacketPayload(
        ::Bedrock::NonOwnerPointer<::CreativeItemRegistry const> creativeItemRegistryForWrite
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<const CreativeItemRegistry>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::CreativeItemRegistry const> creativeItemRegistryForWrite);
#endif // @header-generator platform
    // NOLINTEND
};

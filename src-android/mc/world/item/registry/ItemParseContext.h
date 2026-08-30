#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/item/ItemIconInfo.h"
#include "mc/world/item/registry/ItemVersion.h"

struct ItemParseContext {
public:
    // ItemParseContext inner types define
    enum class LoadMode : int {
        client = 0,
        server = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ItemVersion>                                            mItemVersion;
    ::ll::TypedStorage<4, 4, ::ItemParseContext::LoadMode>                             mLoadMode;
    ::ll::TypedStorage<8, 8, std::optional<ItemIconInfo> (*)(std::string const&, int)> mItemIconFactory;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>>                         mParsedDefinitions;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>>                         mUnverifiedItemOverrideNames;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ItemVersion>>           mVanillaItemVersionMap;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemParseContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ItemParseContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemIconInfo.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/registry/ItemVersion.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ItemIconInfo;
// clang-format on
#endif // @header-generator platform

struct ItemParseContext {
public:
    // ItemParseContext inner types define
    enum class LoadMode : int {
#if defined(LL_PLAT_A) // @header-generator platform
        client = 0,
        server = 1,
#else // @header-generator platform
        Client = 0,
        Server = 1,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ItemVersion>                                            mItemVersion;
    ::ll::TypedStorage<4, 4, ::ItemParseContext::LoadMode>                             mLoadMode;
    ::ll::TypedStorage<8, 8, std::optional<ItemIconInfo> (*)(std::string const&, int)> mItemIconFactory;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>>                         mParsedDefinitions;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>>                         mUnverifiedItemOverrideNames;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ItemVersion>>           mVanillaItemVersionMap;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ItemVersion>                                                  mItemVersion;
    ::ll::TypedStorage<4, 4, ::ItemParseContext::LoadMode>                                   mLoadMode;
    ::ll::TypedStorage<8, 8, ::std::optional<::ItemIconInfo> (*)(::std::string const&, int)> mItemIconFactory;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>>                           mParsedDefinitions;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>>                 mUnverifiedItemOverrideNames;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::ItemVersion>> mVanillaItemVersionMap;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ItemParseContext();

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ItemParseContext();

#else // LL_PLAT_C
#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ItemParseContext();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ItemParseContext(
        ::ItemVersion                itemVersion,
        ::ItemParseContext::LoadMode mode,
        ::std::optional<::ItemIconInfo> (*itemIconFactory)(::std::string const&, int)
    );

    MCAPI ::std::optional<::ItemVersion> getVanillaItemVersion(::HashedString const& itemName) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void* $ctor(
        ::ItemVersion                itemVersion,
        ::ItemParseContext::LoadMode mode,
        ::std::optional<::ItemIconInfo> (*itemIconFactory)(::std::string const&, int)
    );
#endif
#endif // @header-generator platform
    // NOLINTEND
};

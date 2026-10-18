#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/texture/TextureAtlasItem.h"
#include "mc/client/renderer/texture/TextureAtlasItemTextureSetTranslation.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
struct ParsedAtlasNode;
// clang-format on

class AtlasItemManager {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, TextureAtlasItem>> mTextureAtlasItems;
    ::ll::TypedStorage<8, 24, std::vector<TextureAtlasItemTextureSetTranslation>> mTextureAtlasItemTextureSetTranslations;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    AtlasItemManager(AtlasItemManager const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void forEachItem(::brstd::function_ref<void(const std::string&, const TextureAtlasItem&)>) const;

    MCNAPI ::TextureAtlasItem const& getTextureItem(std::string const&) const;

    MCNAPI ::TextureAtlasItemTextureSetTranslation const& getTextureSetTranslation(ulong) const;

    MCNAPI ~AtlasItemManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class AtlasItemManager {};
#endif // @header-generator platform

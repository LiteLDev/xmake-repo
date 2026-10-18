#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"

// auto generated forward declare list
// clang-format off
class ArmorTrimIconGenerationInfo;
class BaseGameVersion;
class TextureAtlas;
struct RuntimeImageGeneratorInfo;
namespace mce { class TextureGroup; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class ArmorTrimIconGenerator {
public:
    // ArmorTrimIconGenerator inner types declare
    // clang-format off
    struct CustomArmorIconData;
    // clang-format on

    // ArmorTrimIconGenerator inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct CustomArmorIconData {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ArmorSlot const> mArmorSlot;
        ::ll::TypedStorage<8, 24, std::string const> mTexturePath;
        ::ll::TypedStorage<8, 24, std::string const> mTrimTexture;
        ::ll::TypedStorage<8, 24, std::map<const std::string, const std::string, std::less<const std::string>, std::allocator<std::pair<const std::string, const std::string>>> const> mTrimPalettes;
        // clang-format on
        // NOLINTEND
    };

    using IconGenerators = std::vector<std::shared_ptr<RuntimeImageGeneratorInfo>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<RuntimeImageGeneratorInfo>>> mIconGenerators;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _createGenerator(::ArmorTrimIconGenerationInfo const&);

    MCNAPI void generateTrimmedArmorTextures(::mce::TextureGroup&, ::BaseGameVersion const&);

    MCNAPI void generateTrimmedCustomArmorTextures(::mce::TextureGroup&, ::TextureAtlas&);
    // NOLINTEND
#else // @header-generator platform
    struct CustomArmorIconData {};
#endif // @header-generator platform
};

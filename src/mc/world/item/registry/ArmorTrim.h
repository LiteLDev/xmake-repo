#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStackBase;
class Level;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class ArmorTrim {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> mPatternId;
    ::ll::TypedStorage<8, 40, ::HashedString> mMaterialId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> mPatternId;
    ::ll::TypedStorage<8, 48, ::HashedString> mMaterialId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ArmorTrim& operator=(ArmorTrim const&);
    ArmorTrim(ArmorTrim const&);
#else // @header-generator platform
#endif // @header-generator platform
    ArmorTrim();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ArmorTrim(::HashedString, ::HashedString);
#else // @header-generator platform
    MCAPI ArmorTrim(::HashedString patternId, ::HashedString materialId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& getMaterialId() const;

    MCNAPI ::HashedString const& getPatternId() const;

    MCNAPI void load(::CompoundTag const&);

    MCNAPI void save(::CompoundTag&);

    MCNAPI ~ArmorTrim();
#else // @header-generator platform
    MCAPI ~ArmorTrim();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void appendUpgradeHoverText(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&);
#else // @header-generator platform
    MCAPI static void appendUpgradeHoverText(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<ArmorTrim> getTrim(::ItemStackBase const&);
#else // @header-generator platform
    MCAPI static ::std::optional<::ArmorTrim> getTrim(::ItemStackBase const& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setTrim(::ItemStackBase&, ::ArmorTrim);
#else // @header-generator platform
    MCAPI static void setTrim(::ItemStackBase& instance, ::ArmorTrim trim);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_TRIM();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_TRIM();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_TRIM_MATERIAL();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_TRIM_MATERIAL();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_TRIM_PATTERN();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_TRIM_PATTERN();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& UPGRADE_DESCRIPTION();
#else // @header-generator platform
    MCAPI static ::std::string const& UPGRADE_DESCRIPTION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& UPGRADE_DESCRIPTION_FORMAT();
#else // @header-generator platform
    MCAPI static ::std::string const& UPGRADE_DESCRIPTION_FORMAT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& WRONG_VERSION_OR_ITEM_ERROR();
#else // @header-generator platform
    MCAPI static ::std::string const& WRONG_VERSION_OR_ITEM_ERROR();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::HashedString, ::HashedString);
#else // @header-generator platform
    MCAPI void* $ctor(::HashedString patternId, ::HashedString materialId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

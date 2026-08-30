#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemStackBase;
class Level;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class ArmorTrim {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString> mPatternId;
    ::ll::TypedStorage<8, 40, ::HashedString> mMaterialId;
    // NOLINTEND

public:
    // prevent constructor by default
    ArmorTrim& operator=(ArmorTrim const&);
    ArmorTrim(ArmorTrim const&);
    ArmorTrim();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ArmorTrim(::HashedString, ::HashedString);

    MCNAPI ::HashedString const& getMaterialId() const;

    MCNAPI ::HashedString const& getPatternId() const;

    MCNAPI void load(::CompoundTag const&);

    MCNAPI void save(::CompoundTag&);

    MCNAPI ~ArmorTrim();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void appendUpgradeHoverText(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&);

    MCNAPI static std::optional<ArmorTrim> getTrim(::ItemStackBase const&);

    MCNAPI static void setTrim(::ItemStackBase&, ::ArmorTrim);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& TAG_TRIM();

    MCNAPI static std::string const& TAG_TRIM_MATERIAL();

    MCNAPI static std::string const& TAG_TRIM_PATTERN();

    MCNAPI static std::string const& UPGRADE_DESCRIPTION();

    MCNAPI static std::string const& UPGRADE_DESCRIPTION_FORMAT();

    MCNAPI static std::string const& WRONG_VERSION_OR_ITEM_ERROR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HashedString, ::HashedString);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

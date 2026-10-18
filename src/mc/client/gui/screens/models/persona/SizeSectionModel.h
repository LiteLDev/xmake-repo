#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/deps/shared_types/BodySizeType.h"

// auto generated forward declare list
// clang-format off
struct PersonaCharacter;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/shared_types/persona/ArmSizeType.h"
#include "mc/deps/shared_types/persona/BodySizeType.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace persona {

class SizeSectionModel {
public:
    // SizeSectionModel inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Section : uchar {
        Height  = 0,
        ArmSize = 1,
        None    = 2,
    };

    using ArmSizeType = ::SharedTypes::persona::ArmSizeType;

    using BodySizeType = ::SharedTypes::persona::BodySizeType;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::persona::SizeSectionModel::Section> mActiveSection;
    ::ll::TypedStorage<1, 1, ::SharedTypes::persona::ArmSizeType>  mEquippedArmSize;
    ::ll::TypedStorage<1, 1, ::SharedTypes::persona::ArmSizeType>  mPreviewedArmSize;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::BodySizeType> mEquippedHeight;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::BodySizeType> mPreviewedHeight;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SizeSectionModel();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool canEquipPreviewed() const;

    MCNAPI ::SharedTypes::persona::ArmSizeType const& getEquippedArmSize() const;

    MCNAPI ::SharedTypes::persona::BodySizeType const& getEquippedHeight() const;

    MCNAPI ::SharedTypes::persona::ArmSizeType const& getPreviewedArmSize() const;

    MCNAPI ::SharedTypes::persona::BodySizeType const& getPreviewedHeight() const;

    MCNAPI bool isActive() const;

    MCNAPI bool isArmSizePreviewed(::SharedTypes::persona::ArmSizeType const&) const;

    MCNAPI bool isHeightPreviewed(::SharedTypes::persona::BodySizeType const&) const;

    MCNAPI void setActiveSection(::persona::SizeSectionModel::Section const&);

    MCNAPI void setPreviewedArmSize(::SharedTypes::persona::ArmSizeType const&);

    MCNAPI void setPreviewedHeight(::SharedTypes::persona::BodySizeType const&);

    MCNAPI void updateEquippedSizeByActiveSection();

    MCNAPI void updateEquippedValuesByCharacter(::PersonaCharacter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Section : schar {
        Height  = 0,
        ArmSize = 1,
        None    = 2,
    };

    using ArmSizeType = ::SharedTypes::persona::ArmSizeType;

    using BodySizeType = ::SharedTypes::persona::BodySizeType;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::persona::SizeSectionModel::Section> mActiveSection;
    ::ll::TypedStorage<1, 1, ::SharedTypes::persona::ArmSizeType>  mEquippedArmSize;
    ::ll::TypedStorage<1, 1, ::SharedTypes::persona::ArmSizeType>  mPreviewedArmSize;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::BodySizeType> mEquippedHeight;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::BodySizeType> mPreviewedHeight;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SizeSectionModel() = default;
    // NOLINTEND
#else // @header-generator platform
    enum class Section : schar {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace persona

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/deps/shared_types/BodySizeType.h"

// auto generated forward declare list
// clang-format off
struct PersonaCharacter;
// clang-format on

namespace persona {

class SizeSectionModel {
public:
    // SizeSectionModel inner types define
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
};

} // namespace persona

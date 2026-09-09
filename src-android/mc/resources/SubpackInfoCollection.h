#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/SubpackInfo.h"

// auto generated forward declare list
// clang-format off
class ContentTierIncompatibleReason;
class ContentTierInfo;
// clang-format on

class SubpackInfoCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SubpackInfo>> mSubpackInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    SubpackInfoCollection(SubpackInfoCollection const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addSubpackInfo(::SubpackInfo&&);

    MCNAPI int getDefaultSubpackIndex(::ContentTierInfo const&) const;

    MCNAPI ::ContentTierInfo getSubpackContentTier(int) const;

    MCNAPI std::string const& getSubpackFolderName(int) const;

    MCNAPI int getSubpackIndex(std::string const&) const;

    MCNAPI std::string const& getSubpackName(int) const;

    MCNAPI std::vector<std::string> getSubpackNames() const;

    MCNAPI bool hasSubpacks() const;

    MCNAPI ::ContentTierIncompatibleReason isCompatible(::ContentTierInfo const&) const;

    MCNAPI ::ContentTierIncompatibleReason isCompatibleSubpack(int, ::ContentTierInfo const&) const;

    MCNAPI ~SubpackInfoCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/resources/SubpackInfo.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ContentTierIncompatibleReason;
class ContentTierInfo;
// clang-format on

class SubpackInfoCollection {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SubpackInfo>> mSubpackInfo;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnka263b4;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SubpackInfoCollection& operator=(SubpackInfoCollection const&);
#endif // @header-generator platform
    SubpackInfoCollection(SubpackInfoCollection const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SubpackInfoCollection();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::ContentTierIncompatibleReason isCompatible(::ContentTierInfo const& contentInfoTier) const;

    MCNAPI ~SubpackInfoCollection();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

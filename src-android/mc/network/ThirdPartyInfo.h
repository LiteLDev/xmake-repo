#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/NetworkType.h"

class ThirdPartyInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>> mAllowListUrls;
    ::ll::TypedStorage<8, 24, std::string>                     mCreatorId;
    ::ll::TypedStorage<8, 24, std::string>                     mCreatorName;
    ::ll::TypedStorage<8, 24, std::string>                     mStorePageId;
    ::ll::TypedStorage<1, 1, bool>                             mRequireXBL;
    ::ll::TypedStorage<8, 24, std::string>                     mExperienceId;
    // NOLINTEND

public:
    // prevent constructor by default
    ThirdPartyInfo& operator=(ThirdPartyInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ThirdPartyInfo(::ThirdPartyInfo const&);

    MCNAPI ThirdPartyInfo(
        std::unordered_set<std::string> const&,
        std::string,
        std::string,
        std::string,
        bool const,
        std::string const&
    );

    MCNAPI std::string const& getCreatorId() const;

    MCNAPI std::string const& getCreatorName() const;

    MCNAPI std::string const& getExperienceId() const;

    MCNAPI ::NetworkType getNetworkTypeOverride() const;

    MCNAPI std::string const& getStorePageId() const;

    MCNAPI bool isEligible(std::string const&) const;

    MCNAPI bool isExperience() const;

    MCNAPI bool isValid() const;

    MCNAPI ~ThirdPartyInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ThirdPartyInfo const&);

    MCNAPI void* $ctor(
        std::unordered_set<std::string> const&,
        std::string,
        std::string,
        std::string,
        bool const,
        std::string const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

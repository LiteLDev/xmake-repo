#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/events/NetworkType.h"
#else // @header-generator platform
#endif // @header-generator platform

class ThirdPartyInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>> mAllowListUrls;
    ::ll::TypedStorage<8, 24, std::string>                     mCreatorId;
    ::ll::TypedStorage<8, 24, std::string>                     mCreatorName;
    ::ll::TypedStorage<8, 24, std::string>                     mStorePageId;
    ::ll::TypedStorage<1, 1, bool>                             mRequireXBL;
    ::ll::TypedStorage<8, 24, std::string>                     mExperienceId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk8ba434;
    ::ll::UntypedStorage<8, 32> mUnk56c10f;
    ::ll::UntypedStorage<8, 32> mUnk857f57;
    ::ll::UntypedStorage<8, 32> mUnk829f08;
    ::ll::UntypedStorage<1, 1>  mUnkfff32d;
    ::ll::UntypedStorage<8, 32> mUnk1440c1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ThirdPartyInfo& operator=(ThirdPartyInfo const&);
#else // @header-generator platform
    ThirdPartyInfo();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ThirdPartyInfo(::ThirdPartyInfo const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ThirdPartyInfo(
        std::unordered_set<std::string> const&,
        std::string,
        std::string,
        std::string,
        bool const,
        std::string const&
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ThirdPartyInfo(
        ::std::unordered_set<::std::string> const& allowListUrls,
        ::std::string                              creatorId,
        ::std::string                              creatorName,
        ::std::string                              storePageId,
        bool                                       requireXBL,
        ::std::string const&                       experienceId
    );

    MCNAPI ::ThirdPartyInfo& operator=(::ThirdPartyInfo&&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getCreatorId() const;

    MCNAPI std::string const& getCreatorName() const;

    MCNAPI std::string const& getExperienceId() const;

    MCNAPI ::NetworkType getNetworkTypeOverride() const;

    MCNAPI std::string const& getStorePageId() const;

    MCNAPI bool isEligible(std::string const&) const;

    MCNAPI bool isExperience() const;

    MCNAPI bool isValid() const;
#else // @header-generator platform
    MCNAPI ::ThirdPartyInfo& operator=(::ThirdPartyInfo const&);
#endif // @header-generator platform

    MCNAPI ~ThirdPartyInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ThirdPartyInfo const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::unordered_set<std::string> const&,
        std::string,
        std::string,
        std::string,
        bool const,
        std::string const&
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::unordered_set<::std::string> const& allowListUrls,
        ::std::string                              creatorId,
        ::std::string                              creatorName,
        ::std::string                              storePageId,
        bool                                       requireXBL,
        ::std::string const&                       experienceId
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/options/FeatureOptionID.h"
#include "mc/options/FeatureOptionTabID.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class Option;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::PubSub { class Subscription; }
#endif // @header-generator platform
// clang-format on

class FeatureToggles : public ::Bedrock::EnableNonOwnerReferences {
public:
    // FeatureToggles inner types declare
    // clang-format off
    struct FeatureToggle;
    // clang-format on

    // FeatureToggles inner types define
    struct FeatureToggle {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::FeatureOptionID>       featureID;
        ::ll::TypedStorage<4, 4, ::FeatureOptionID>       dependencyFeatureID;
        ::ll::TypedStorage<8, 8, std::unique_ptr<Option>> option;
        ::ll::UntypedStorage<8, 48>                       setup;
        ::ll::UntypedStorage<8, 48>                       lock;
        ::ll::UntypedStorage<4, 16>                       tabID;
        // NOLINTEND

    public:
        // prevent constructor by default
        FeatureToggle& operator=(FeatureToggle const&);
        FeatureToggle(FeatureToggle const&);
        FeatureToggle();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::FeatureToggles::FeatureToggle& operator=(::FeatureToggles::FeatureToggle&&);

        MCNAPI ~FeatureToggle();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, ::FeatureOptionID>                 featureID;
        ::ll::TypedStorage<4, 4, ::FeatureOptionID>                 dependencyFeatureID;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Option>>       option;
        ::ll::TypedStorage<8, 64, ::std::function<void(::Option&)>> setup;
        ::ll::TypedStorage<8, 64, ::std::function<void(bool&)>>     lock;
        ::ll::TypedStorage<4, 4, ::FeatureOptionTabID>              tabID;
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using FeatureTogglesArray = std::vector<FeatureToggles::FeatureToggle>;
#else // @header-generator platform
    using ExpectedDisabled = ::std::vector<::FeatureOptionID>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using SetupFunction = std::function<void(Option&)>;
#else // @header-generator platform
    using ExpectedEnabled = ::std::vector<::FeatureOptionID>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using LockFunction = std::function<void(bool&)>;
#else // @header-generator platform
    using FeatureTogglesArray = ::std::vector<::FeatureToggles::FeatureToggle>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ExpectedDisabled = std::vector<FeatureOptionID>;
#else // @header-generator platform
    using LockFunction = ::std::function<void(bool&)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ExpectedEnabled = std::vector<FeatureOptionID>;
#else // @header-generator platform
    using SetupFunction = ::std::function<void(::Option&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<FeatureToggles::FeatureToggle>> mFeatures;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mOptionLockSubscriptions;
    ::ll::UntypedStorage<8, 24>                                           mFilePath;
    ::ll::TypedStorage<1, 1, bool>                                        mIsInGame;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::FeatureToggles::FeatureToggle>> mFeatures;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>> mOptionLockSubscriptions;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>              mFilePath;
    ::ll::TypedStorage<1, 1, bool>                                            mIsInGame;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FeatureToggles();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FeatureToggles();
#else // @header-generator platform
    virtual ~FeatureToggles() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit FeatureToggles(::AppPlatform&);
#else // @header-generator platform
    MCAPI explicit FeatureToggles(::AppPlatform& appPlatform);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initialize(::AppPlatform&);

    MCNAPI void _registerFeature(
        ::FeatureOptionTabID,
        ::FeatureOptionID,
        std::string const&,
        std::string const&,
        bool,
        ::FeatureOptionID,
        std::function<void(Option&)>,
        std::function<void(bool&)>
#else // @header-generator platform
    MCAPI ::std::function<void(bool&)> _getLockIfInGameOrOptionExpectationsNotMetLockCallback(
        ::std::vector<::FeatureOptionID> expectedDisabledOptions,
        ::std::vector<::FeatureOptionID> expectedEnabledOptions
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _registerFeatures();
#else // @header-generator platform
    MCAPI void _initialize(::AppPlatform& appPlatform);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Option* get(::FeatureOptionID);
#else // @header-generator platform
    MCAPI void _registerFeature(
        ::FeatureOptionTabID             tabID,
        ::FeatureOptionID                featureID,
        ::std::string const&             locName,
        ::std::string const&             saveName,
        bool                             defaultValue,
        ::FeatureOptionID                dependencyFeatureID,
        ::std::function<void(::Option&)> setup,
        ::std::function<void(bool&)>     lock
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::FeatureOptionID getFeatureIDFromSaveTag(std::string_view const) const;
#else // @header-generator platform
    MCAPI void _registerFeatures();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isEnabled(::FeatureOptionID) const;

    MCNAPI bool isGraniteBayFeatureEnabled() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<FeatureToggles>& mFeatureToggles();
#else // @header-generator platform
    MCAPI bool isEnabled(::FeatureOptionID featureID) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::AppPlatform&);
#else // @header-generator platform
    MCAPI void* $ctor(::AppPlatform& appPlatform);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

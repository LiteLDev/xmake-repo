#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/options/FeatureOptionID.h"
#include "mc/options/FeatureOptionTabID.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class Option;
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
        // NOLINTEND
    };

    using FeatureTogglesArray = std::vector<FeatureToggles::FeatureToggle>;

    using SetupFunction = std::function<void(Option&)>;

    using LockFunction = std::function<void(bool&)>;

    using ExpectedDisabled = std::vector<FeatureOptionID>;

    using ExpectedEnabled = std::vector<FeatureOptionID>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<FeatureToggles::FeatureToggle>> mFeatures;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mOptionLockSubscriptions;
    ::ll::UntypedStorage<8, 24>                                           mFilePath;
    ::ll::TypedStorage<1, 1, bool>                                        mIsInGame;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FeatureToggles();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FeatureToggles(::AppPlatform&);

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
    );

    MCNAPI void _registerFeatures();

    MCNAPI ::Option* get(::FeatureOptionID);

    MCNAPI ::FeatureOptionID getFeatureIDFromSaveTag(std::string_view const) const;

    MCNAPI bool isEnabled(::FeatureOptionID) const;

    MCNAPI bool isGraniteBayFeatureEnabled() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<FeatureToggles>& mFeatureToggles();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AppPlatform&);
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

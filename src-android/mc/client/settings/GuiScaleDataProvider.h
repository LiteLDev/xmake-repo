#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IOptionsDataProvider.h"
#include "mc/client/settings/LocStringData.h"
#include "mc/client/settings/OptionData.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings {

class GuiScaleDataProvider : public ::Settings::IOptionsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                mOptions;
    ::ll::UntypedStorage<8, 48>                                mGetOptimalGuiScale;
    ::ll::UntypedStorage<8, 48>                                mGetMaxGuiScale;
    ::ll::UntypedStorage<8, 48>                                mGetClampedGuiScaleOffset;
    ::ll::UntypedStorage<8, 80>                                mInfo;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mGuiScaleSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mGuiAccessibilityScalingSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSceneSizeChangedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLanguageChangedSubscription;
    ::ll::UntypedStorage<8, 32>                                mDropdownOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    GuiScaleDataProvider& operator=(GuiScaleDataProvider const&);
    GuiScaleDataProvider(GuiScaleDataProvider const&);
    GuiScaleDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~GuiScaleDataProvider();

    virtual bool canModify() const;

    virtual ::gsl::span<const Settings::OptionData> getOptions() const;

    virtual int getValue() const;

    virtual void setValue(int);

    virtual std::optional<std::variant<std::string, std::function<std::string ()>, Settings::LocStringData>> const& getInfo() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    GuiScaleDataProvider(::Settings::RegistryBuilder::IBuilderContext&, std::function<float()>, std::function<float()>);

    MCNAPI void _updateInfo();

    MCNAPI void _updateOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Settings::RegistryBuilder::IBuilderContext&, std::function<float()>, std::function<float()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canModify() const;

    MCNAPI ::gsl::span<const Settings::OptionData> $getOptions() const;

    MCNAPI int $getValue() const;

    MCNAPI void $setValue(int);

    MCNAPI std::optional<std::variant<std::string, std::function<std::string()>, Settings::LocStringData>> const&
           $getInfo() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings

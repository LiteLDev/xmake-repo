#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IOptionsDataProvider.h"
#include "mc/client/settings/LocStringData.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace Settings { struct OptionData; }
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class GuiScaleDataProvider : public ::Settings::IOptionsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>      mOptions;
    ::ll::TypedStorage<8, 64, ::std::function<int()>> mGetOptimalGuiScale;
    ::ll::TypedStorage<8, 64, ::std::function<int()>> mGetMaxGuiScale;
    ::ll::TypedStorage<8, 64, ::std::function<int()>> mGetClampedGuiScaleOffset;
    ::ll::TypedStorage<
        8,
        80,
        ::std::optional<::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>>>
                                                                     mInfo;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mGuiScaleSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mGuiAccessibilityScalingSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mSceneSizeChangedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mLanguageChangedSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::Settings::OptionData>> mDropdownOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    GuiScaleDataProvider& operator=(GuiScaleDataProvider const&);
    GuiScaleDataProvider(GuiScaleDataProvider const&);
    GuiScaleDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canModify() const /*override*/;

    virtual ::gsl::span<::Settings::OptionData const> getOptions() const /*override*/;

    virtual int getValue() const /*override*/;

    virtual void setValue(int value) /*override*/;

    virtual ::std::optional<
        ::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>> const&
    getInfo() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GuiScaleDataProvider(
        ::Settings::RegistryBuilder::IBuilderContext& context,
        ::std::function<float()>                      getOptimalGuiScale,
        ::std::function<float()>                      getMaxGuiScale
    );

    MCAPI void _updateInfo();

    MCAPI void _updateOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Settings::RegistryBuilder::IBuilderContext& context,
        ::std::function<float()>                      getOptimalGuiScale,
        ::std::function<float()>                      getMaxGuiScale
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canModify() const;

    MCAPI ::gsl::span<::Settings::OptionData const> $getOptions() const;

    MCAPI int $getValue() const;

    MCAPI void $setValue(int value);

    MCAPI ::std::optional<
        ::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>> const&
    $getInfo() const;
    // NOLINTEND
};
#else // @header-generator platform
class GuiScaleDataProvider {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IOptionsDataProvider.h"
#include "mc/client/settings/LocStringData.h"
#include "mc/client/settings/OptionData.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings {

class GraphicsModeDataProvider : public ::Settings::IOptionsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::OptionID>                                    mOptionId;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>                            mOptions;
    ::ll::TypedStorage<8, 8, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    ::ll::TypedStorage<8, 24, std::vector<Settings::OptionData>>            mDropdownOptions;
    ::ll::UntypedStorage<8, 80>                                             mInfo;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mResetSubscription;
    ::ll::UntypedStorage<4, 16>                                             mPendingValue;
    // NOLINTEND

public:
    // prevent constructor by default
    GraphicsModeDataProvider& operator=(GraphicsModeDataProvider const&);
    GraphicsModeDataProvider(GraphicsModeDataProvider const&);
    GraphicsModeDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~GraphicsModeDataProvider();

    virtual bool canModify() const;

    virtual ::gsl::span<const Settings::OptionData> getOptions() const;

    virtual int getValue() const;

    virtual void setValue(int);

    virtual std::optional<std::variant<std::string, std::function<std::string ()>, Settings::LocStringData>> const& getInfo() const;

    virtual bool flush();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GraphicsModeDataProvider(::OptionID, ::Settings::RegistryBuilder::IBuilderContext&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OptionID, ::Settings::RegistryBuilder::IBuilderContext&);
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

    MCNAPI bool $flush();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IOptionsDataProvider.h"
#include "mc/client/settings/LocStringData.h"
#include "mc/client/settings/OptionData.h"
#include "mc/client/settings/data_providers/MultiplayerBroadcastStateInfo.h"

// auto generated forward declare list
// clang-format off
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings {

class MultiplayerBroadcastDataProvider : public ::Settings::IOptionsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mContext;
    ::ll::UntypedStorage<8, 112> mStateInfo;
    ::ll::UntypedStorage<8, 32>  mDropdownOptions;
    ::ll::UntypedStorage<8, 80>  mInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiplayerBroadcastDataProvider& operator=(MultiplayerBroadcastDataProvider const&);
    MultiplayerBroadcastDataProvider(MultiplayerBroadcastDataProvider const&);
    MultiplayerBroadcastDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MultiplayerBroadcastDataProvider();

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
    MCNAPI MultiplayerBroadcastDataProvider(
        ::Settings::RegistryBuilder::IBuilderContext&,
        ::Settings::MultiplayerBroadcastStateInfo
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Settings::RegistryBuilder::IBuilderContext&, ::Settings::MultiplayerBroadcastStateInfo);
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

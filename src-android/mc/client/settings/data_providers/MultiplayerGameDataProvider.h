#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IBooleanDataProvider.h"

// auto generated forward declare list
// clang-format off
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings {

class MultiplayerGameDataProvider : public ::Settings::IBooleanDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiplayerGameDataProvider& operator=(MultiplayerGameDataProvider const&);
    MultiplayerGameDataProvider(MultiplayerGameDataProvider const&);
    MultiplayerGameDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultiplayerGameDataProvider();

    virtual bool canModify() const;

    virtual bool getValue() const;

    virtual void setValue(bool);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MultiplayerGameDataProvider(::Settings::RegistryBuilder::IBuilderContext&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Settings::RegistryBuilder::IBuilderContext&);
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

    MCNAPI bool $getValue() const;

    MCNAPI void $setValue(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings

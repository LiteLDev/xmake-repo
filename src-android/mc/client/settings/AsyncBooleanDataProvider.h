#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IBooleanDataProvider.h"

namespace Settings {

class AsyncBooleanDataProvider : public ::Settings::IBooleanDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Settings::IBooleanDataProvider>> mDelegateProvider;
    ::ll::UntypedStorage<8, 48>                                                mChangeCallback;
    ::ll::UntypedStorage<1, 16>                                                mPendingValue;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncBooleanDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncBooleanDataProvider();

    virtual void setChangeListener(std::function<void()>);

    virtual bool canModify() const;

    virtual bool getValue() const;

    virtual void setValue(bool);

    virtual bool flush();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsyncBooleanDataProvider(std::unique_ptr<Settings::IBooleanDataProvider>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<Settings::IBooleanDataProvider>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setChangeListener(std::function<void()>);

    MCNAPI bool $canModify() const;

    MCNAPI bool $getValue() const;

    MCNAPI void $setValue(bool);

    MCNAPI bool $flush();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IBooleanDataProvider.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IBooleanDataProvider.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class AsyncBooleanDataProvider : public ::Settings::IBooleanDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Settings::IBooleanDataProvider>> mDelegateProvider;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                             mChangeCallback;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mPendingValue;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncBooleanDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncBooleanDataProvider() /*override*/ = default;

    virtual void setChangeListener(::std::function<void()> callback) /*override*/;

    virtual bool canModify() const /*override*/;

    virtual bool getValue() const /*override*/;

    virtual void setValue(bool value) /*override*/;

    virtual bool flush() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AsyncBooleanDataProvider(::std::unique_ptr<::Settings::IBooleanDataProvider> delegateProvider);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::Settings::IBooleanDataProvider> delegateProvider);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setChangeListener(::std::function<void()> callback);

    MCFOLD bool $canModify() const;

    MCAPI bool $getValue() const;

    MCAPI void $setValue(bool value);

    MCAPI bool $flush();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class AsyncBooleanDataProvider {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings

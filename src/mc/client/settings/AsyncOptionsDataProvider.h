#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IOptionsDataProvider.h"

// auto generated forward declare list
// clang-format off
namespace Settings { struct LocStringData; }
namespace Settings { struct OptionData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IOptionsDataProvider.h"

// auto generated forward declare list
// clang-format off
namespace Settings { struct LocStringData; }
namespace Settings { struct OptionData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
class AsyncOptionsDataProvider : public ::Settings::IOptionsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Settings::IOptionsDataProvider>> mDelegateProvider;
    ::ll::UntypedStorage<8, 48>                                                mChangeCallback;
    ::ll::UntypedStorage<4, 16>                                                mPendingValue;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncOptionsDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~AsyncOptionsDataProvider();

    virtual void setChangeListener(std::function<void ()>);

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
    MCNAPI explicit AsyncOptionsDataProvider(std::unique_ptr<Settings::IOptionsDataProvider>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<Settings::IOptionsDataProvider>);
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class AsyncOptionsDataProvider : public ::Settings::IOptionsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Settings::IOptionsDataProvider>> mDelegateProvider;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                             mChangeCallback;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                 mPendingValue;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncOptionsDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncOptionsDataProvider() /*override*/ = default;

    virtual void setChangeListener(::std::function<void()> callback) /*override*/;

    virtual bool canModify() const /*override*/;

    virtual ::gsl::span<::Settings::OptionData const> getOptions() const /*override*/;

    virtual int getValue() const /*override*/;

    virtual void setValue(int value) /*override*/;

    virtual ::std::optional<
        ::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>> const&
    getInfo() const /*override*/;

    virtual bool flush() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AsyncOptionsDataProvider(::std::unique_ptr<::Settings::IOptionsDataProvider> delegateProvider);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::Settings::IOptionsDataProvider> delegateProvider);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setChangeListener(::std::function<void()> callback);

    MCFOLD bool $canModify() const;

    MCAPI ::gsl::span<::Settings::OptionData const> $getOptions() const;

    MCAPI int $getValue() const;

    MCAPI void $setValue(int value);

    MCFOLD ::std::optional<
        ::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>> const&
    $getInfo() const;

    MCAPI bool $flush();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class AsyncOptionsDataProvider {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings

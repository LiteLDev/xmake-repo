#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/Component.h"
#include "mc/client/settings/ComponentState.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class IStringDataProvider; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/Component.h"
#include "mc/client/settings/ComponentState.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class IStringDataProvider; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
class StringComponent : public ::Settings::Component<Settings::StringComponent> {
public:
    // StringComponent inner types define
    using FormatValidationCallback = std::function<std::optional<std::string>(std::string)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Settings::IStringDataProvider>> mDataProvider;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                    mPlaceholder;
    ::ll::UntypedStorage<4, 16>                                              mMaxLength;
    ::ll::UntypedStorage<8, 64>                                              mFormatValidation;
    ::ll::TypedStorage<1, 1, bool>                                           mIsFormatValid;
    ::ll::UntypedStorage<8, 40>                                              mFallbackValue;
    // NOLINTEND

public:
    // prevent constructor by default
    StringComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StringComponent();

    virtual ::Settings::ComponentState getDefaultState() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void commitValue();

    MCNAPI bool flush();

    MCNAPI std::optional<std::string> getFallbackValue() const;

    MCNAPI std::optional<int> getMaxLength() const;

    MCNAPI std::optional<std::string> getPlaceholder() const;

    MCNAPI std::string getValue() const;

    MCNAPI bool isFormatValid() const;

    MCNAPI bool updateValue(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Settings::ComponentState $getDefaultState() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class StringComponent : public ::Settings::Component<::Settings::StringComponent> {
public:
    // StringComponent inner types define
    using DataProvider = ::Settings::IStringDataProvider;

    using FormatValidationCallback = ::std::function<::std::optional<::std::string>(::std::string)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::IStringDataProvider>> mDataProvider;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                    mPlaceholder;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                               mMaxLength;
    ::ll::TypedStorage<8, 72, ::std::optional<::std::function<::std::optional<::std::string>(::std::string)>>>
                                                              mFormatValidation;
    ::ll::TypedStorage<1, 1, bool>                            mIsFormatValid;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFallbackValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StringComponent() /*override*/ = default;

    virtual ::Settings::ComponentState getDefaultState() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::std::string> getPlaceholder() const;

    MCAPI bool updateValue(::std::string const& value);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Settings::ComponentState $getDefaultState() const;
    // NOLINTEND
};
#else // @header-generator platform
class StringComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings

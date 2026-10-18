#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IDataProvider.h"

// auto generated forward declare list
// clang-format off
namespace Settings { struct LocStringData; }
namespace Settings { struct OptionData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IDataProvider.h"

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
class IOptionsDataProvider : public ::Settings::IDataProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IOptionsDataProvider() = default;

    virtual ::gsl::span<const Settings::OptionData> getOptions() const = 0;

    virtual int getValue() const = 0;

    virtual void setValue(int) = 0;

    virtual std::optional<std::variant<std::string, std::function<std::string ()>, Settings::LocStringData>> const& getInfo() const = 0;

    virtual bool flush();
    // clang-format on
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $flush();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IOptionsDataProvider : public ::Settings::IDataProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOptionsDataProvider() /*override*/ = default;

    virtual ::gsl::span<::Settings::OptionData const> getOptions() const = 0;

    virtual int getValue() const = 0;

    virtual void setValue(int index) = 0;

    virtual ::std::optional<
        ::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>> const&
    getInfo() const = 0;

    virtual bool flush();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $flush();
    // NOLINTEND
};
#else // @header-generator platform
class IOptionsDataProvider {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings

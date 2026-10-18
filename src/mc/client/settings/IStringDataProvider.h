#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IDataProvider.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IDataProvider.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
class IStringDataProvider : public ::Settings::IDataProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStringDataProvider() = default;

    virtual std::string getValue() const = 0;

    virtual void setValue(std::string_view) = 0;

    virtual void commitValue();

    virtual bool flush();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $commitValue();

    MCNAPI bool $flush();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IStringDataProvider : public ::Settings::IDataProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStringDataProvider() /*override*/ = default;

    virtual ::std::string getValue() const = 0;

    virtual void setValue(::std::string_view value) = 0;

    virtual void commitValue();

    virtual bool flush();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $commitValue();

    MCFOLD bool $flush();
    // NOLINTEND
};
#else // @header-generator platform
class IStringDataProvider {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings

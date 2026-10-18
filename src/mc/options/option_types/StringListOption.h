#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"

class StringListOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mValue;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mDefaultValue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mValue;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mDefaultValue;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    StringListOption();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    StringListOption();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StringListOption();
#else // @header-generator platform
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void save(std::vector<std::pair<std::string, std::string>>&);

    virtual void load(std::string const&);
#else // @header-generator platform
    virtual void load(::std::string const& valueString) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StringListOption(
        ::OptionID,
        ::OptionOwnerType,
        ::OptionResetFlags,
        std::string const&,
        std::string const&,
        std::vector<std::string> const&
    );

    MCNAPI void set(std::vector<std::string> const&, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI StringListOption(
        ::OptionID                          id,
        ::OptionOwnerType                   ownerType,
        ::OptionResetFlags                  resetFlags,
        ::std::string const&                captionId,
        ::std::string const&                saveTag,
        ::std::vector<::std::string> const& value
    );

    MCAPI void set(::std::vector<::std::string> const& value, bool saveOptionChange);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::OptionID,
        ::OptionOwnerType,
        ::OptionResetFlags,
        std::string const&,
        std::string const&,
        std::vector<std::string> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::OptionID                          id,
        ::OptionOwnerType                   ownerType,
        ::OptionResetFlags                  resetFlags,
        ::std::string const&                captionId,
        ::std::string const&                saveTag,
        ::std::vector<::std::string> const& value
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $save(std::vector<std::pair<std::string, std::string>>&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector);

    MCAPI void $load(::std::string const& valueString);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(std::string const&);
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/options/option_types/InputModeOptionValue.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/options/option_types/Option.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"

class InputModeBoolOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<InputMode, bool>> mValues;
    ::ll::TypedStorage<8, 40, std::unordered_map<InputMode, bool>> mDefaultValues;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::InputMode, bool>> mValues;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::InputMode, bool>> mDefaultValues;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    InputModeBoolOption();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    InputModeBoolOption();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~InputModeBoolOption();
#else // @header-generator platform
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void save(std::vector<std::pair<std::string, std::string>>&);
#else // @header-generator platform
    virtual void load(::std::string const& valueString) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(std::map<std::string, std::string>&);

    virtual void load(std::string const&);
#else // @header-generator platform
    virtual void load(::std::map<::std::string, ::std::string>& propertyMap) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI InputModeBoolOption(
        ::OptionID,
        ::OptionOwnerType,
        ::OptionResetFlags,
        std::string const&,
        std::string const&,
        bool
    );

    MCNAPI InputModeBoolOption(
        ::OptionID,
        ::OptionOwnerType,
        ::OptionResetFlags,
        std::string const&,
        std::string const&,
        bool,
        bool,
        bool
    );

    MCNAPI void _saveForInputMode(std::vector<std::pair<std::string, std::string>>&, ::InputMode);

    MCNAPI bool getValue(::InputMode) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI InputModeBoolOption(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        bool                 value
    );

    MCAPI InputModeBoolOption(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        bool                 valueMouse,
        bool                 valueTouch,
        bool                 valueGamePad
    );

    MCAPI void
    _saveForInputMode(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector, ::InputMode mode);

    MCAPI void set(::InputMode inputmode, bool value, bool saveOptionChange);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::OptionID, ::OptionOwnerType, ::OptionResetFlags, std::string const&, std::string const&, bool);

    MCNAPI void*
    $ctor(::OptionID, ::OptionOwnerType, ::OptionResetFlags, std::string const&, std::string const&, bool, bool, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        bool                 value
    );

    MCAPI void* $ctor(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        bool                 valueMouse,
        bool                 valueTouch,
        bool                 valueGamePad
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

    MCFOLD void $load(::std::string const& valueString);

    MCAPI void $load(::std::map<::std::string, ::std::string>& propertyMap);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(std::map<std::string, std::string>&);
#else // @header-generator platform
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

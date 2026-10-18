#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"

// auto generated forward declare list
// clang-format off
class GameVersion;
// clang-format on

class IntOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int const>         VALUE_MAX;
    ::ll::TypedStorage<4, 4, int const>         VALUE_MIN;
    ::ll::TypedStorage<4, 4, int>               mValue;
    ::ll::TypedStorage<4, 4, int>               mDefaultValue;
    ::ll::TypedStorage<1, 1, bool>              mClampToRange;
    ::ll::TypedStorage<8, 24, std::vector<int>> mPossibleValues;
    ::ll::UntypedStorage<8, 48>                 mCoerceSaveValueCallback;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int const>                  VALUE_MAX;
    ::ll::TypedStorage<4, 4, int const>                  VALUE_MIN;
    ::ll::TypedStorage<4, 4, int>                        mValue;
    ::ll::TypedStorage<4, 4, int>                        mDefaultValue;
    ::ll::TypedStorage<1, 1, bool>                       mClampToRange;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>        mPossibleValues;
    ::ll::TypedStorage<8, 64, ::std::function<int(int)>> mCoerceSaveValueCallback;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    IntOption();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    IntOption();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IntOption();
#else // @header-generator platform
    virtual ~IntOption() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void save(std::vector<std::pair<std::string, std::string>>&);
#else // @header-generator platform
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(std::string const&);
#else // @header-generator platform
    virtual void load(::std::string const& valueString) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI IntOption(
        ::OptionID,
        ::OptionOwnerType,
        ::OptionResetFlags,
        std::string const&,
        std::string const&,
        int,
        std::vector<int> const&,
        bool,
        ::GameVersion
    );

    MCNAPI IntOption(
        ::OptionID,
        ::OptionOwnerType,
        ::OptionResetFlags,
        std::string const&,
        std::string const&,
        int,
        bool,
        int,
        int,
        ::GameVersion
    );

    MCNAPI void set(int, bool);

    MCNAPI void setValues(std::vector<int> const);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI IntOption(
        ::OptionID                id,
        ::OptionOwnerType         ownerType,
        ::OptionResetFlags        resetFlags,
        ::std::string const&      captionId,
        ::std::string const&      saveTag,
        int                       value,
        ::std::vector<int> const& values,
        bool                      clampToRange,
        ::GameVersion             version
    );

    MCAPI IntOption(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        int                  value,
        bool                 clampToRange,
        int                  valueMin,
        int                  valueMax,
        ::GameVersion        version
    );

    MCAPI void set(int value, bool saveOptionChange);

    MCAPI void setValues(::std::vector<int> values);
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
        int,
        std::vector<int> const&,
        bool,
        ::GameVersion
    );

    MCNAPI void* $ctor(
        ::OptionID,
        ::OptionOwnerType,
        ::OptionResetFlags,
        std::string const&,
        std::string const&,
        int,
        bool,
        int,
        int,
        ::GameVersion
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::OptionID                id,
        ::OptionOwnerType         ownerType,
        ::OptionResetFlags        resetFlags,
        ::std::string const&      captionId,
        ::std::string const&      saveTag,
        int                       value,
        ::std::vector<int> const& values,
        bool                      clampToRange,
        ::GameVersion             version
    );

    MCAPI void* $ctor(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        int                  value,
        bool                 clampToRange,
        int                  valueMin,
        int                  valueMax,
        ::GameVersion        version
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
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

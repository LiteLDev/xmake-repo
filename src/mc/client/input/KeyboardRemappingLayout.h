#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/client/input/RemappingLayout.h"
#include "mc/deps/input/enums/RawInputType.h"

class KeyboardRemappingLayout : public ::RemappingLayout {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::KeyboardType const> mKeyboardType;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyboardRemappingLayout();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~KeyboardRemappingLayout();

    virtual void setMappingWithRawInput(std::string const&, int, ::RawInputType);

    virtual int getAdjustedKey(int) const;

    virtual std::string getSaveString(std::string const&) const;

    virtual std::string getMappedKeyName(int, bool) const;

    virtual std::string getMappedKeyName(int) const;

    virtual int _rawKeyToKey(int, ::RawInputType) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit KeyboardRemappingLayout(::KeyboardType);

    MCNAPI ::KeyboardType getKeyboardType() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::KeyboardType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setMappingWithRawInput(std::string const&, int, ::RawInputType);

    MCNAPI int $getAdjustedKey(int) const;

    MCNAPI std::string $getSaveString(std::string const&) const;

    MCNAPI std::string $getMappedKeyName(int, bool) const;

    MCNAPI std::string $getMappedKeyName(int) const;

    MCNAPI int $_rawKeyToKey(int, ::RawInputType) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/client/input/RemappingLayout.h"
#include "mc/deps/input/enums/RawInputType.h"

class KeyboardRemappingLayout : public ::RemappingLayout {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::KeyboardType const> mKeyboardType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~KeyboardRemappingLayout() /*override*/ = default;

    virtual void
    setMappingWithRawInput(::std::string const& action, int rawKeyIndex, ::RawInputType rawKeyType) /*override*/;

    virtual ::std::string getMappedKeyName(int key) const /*override*/;

    virtual ::std::string getMappedKeyName(int key, bool checkUserConfiguredSwap) const /*override*/;

    virtual int getAdjustedKey(int key) const /*override*/;

    virtual ::std::string getSaveString(::std::string const& action) const /*override*/;

    virtual int _rawKeyToKey(int rawKeyIndex, ::RawInputType rawInputType) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setMappingWithRawInput(::std::string const& action, int rawKeyIndex, ::RawInputType rawKeyType);

    MCAPI ::std::string $getMappedKeyName(int key) const;

    MCAPI ::std::string $getMappedKeyName(int key, bool checkUserConfiguredSwap) const;

    MCAPI int $getAdjustedKey(int key) const;

    MCAPI ::std::string $getSaveString(::std::string const& action) const;

    MCAPI int $_rawKeyToKey(int rawKeyIndex, ::RawInputType rawInputType) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class KeyboardRemappingLayout {};
#endif // @header-generator platform
#endif // @header-generator platform
